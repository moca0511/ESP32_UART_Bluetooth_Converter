#include "BluetoothSerial.h"
#include "Ticker.h"

#if !defined(CONFIG_BT_ENABLED) || !defined(CONFIG_BLUEDROID_ENABLED)
#error Bluetooth is not enabled! Please run `make menuconfig` to and enable it
#endif

#define SERIAL_TX_BUFFER_SIZE 1024
#define SERIAL_RX_BUFFER_SIZE 1024

BluetoothSerial SerialBT;

Ticker ticker;
float brink_time=0.5;

#define BUILTIN_LED 14
#define MODE_PIN 13

void setup() {
  //インジケータ用LEDピンの設定
  pinMode(BUILTIN_LED, OUTPUT);
  pinMode(MODE_PIN, INPUT);
  //Serialを開始
  if (digitalRead(MODE_PIN)) {
    Serial.begin(115200);
    brink_time=0.2;
  } else {
    Serial.begin(9600);
    brink_time=0.5;
  }
  //BluetoothのMACアドレス取得
  uint8_t macBT[6];
  esp_read_mac(macBT, ESP_MAC_BT);
  //BluetoothのMACアドレスの下4桁を使用して固有のデバイス名作成
  char btname[11];
  sprintf(btname, "ESP32-%02X%02X", macBT[4], macBT[5]);
  //Bluetoothのcallback関数設定
  SerialBT.register_callback(callbackBT);
  //先ほど作成したデバイス名でBluetooth開始
  if (SerialBT.begin(btname)) {
    //Bluetoothが開始できたらLED点滅開始(接続待ち)
    ticker.attach(brink_time, ledBlink);
  }
}

void loop() {
  if (Serial.available()) {
    SerialBT.write(Serial.read());
  }
  if (SerialBT.available()) {
    Serial.write(SerialBT.read());
  }
}

void callbackBT(esp_spp_cb_event_t event, esp_spp_cb_param_t *param) {
  if (event == ESP_SPP_SRV_OPEN_EVT) {
    //接続後LEDを点滅→点灯
    ticker.detach();
    digitalWrite(BUILTIN_LED, LOW);
  } else if (event == ESP_SPP_CLOSE_EVT) {
    //切断後LEDを点滅させる
    ticker.attach(brink_time, ledBlink);
  }
}

void ledBlink() {
  volatile static int led = HIGH;
  digitalWrite(BUILTIN_LED, led);
  led = !led;
}
