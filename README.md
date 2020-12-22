# ESP32_UART_Bluetooth_Converter
## 概要
ESP32-WROOM-32モジュールを使用した、UARTとBluetoothSPPを相互変換し、**シリアル通信を無線で行えるようにする**デバイスです。

無線通信機能がないマイコンでも、**プログラムの修正や新規の開発環境を導入する必要が無く、従来のシリアル通信と同じ感覚で通信が出来ます。**

**!!ESP32は3.3V駆動なので、5V駆動マイコンと接続する場合は分圧が必要です。!!**
~~5V繋いでもすぐには死ななかった~~
## 使用方法


## 回路図
![circuit](./pic/circuit.png "circuit")

### BOOT・RESET
Bluetoothからwifiへの変更やプログラムの修正を想定して、ファームウェア書き換えができるように、手動書き込み回路を実装する。
dataseetの記述の通りに、
### 起動時のUARTログ設定
ESP32へのファームウェア書き込みと、UART送受信はUART1を共有する。
通常ESP32は起動時にログをUART1から出力する。
これがあると、マイコンとの通信にゴミが入ることになる。
dataseetに、GPIO5にてこのログの出力設定ができるとある。
![gpio5setting](./pic/gpio5setting.png "gpio5setting")
この表からGPIO5をGNDに落とせばログが出力されなくなることが分かるので、GPIO5はGNDに接続する。



