# ESP32_UART_Bluetooth_Converter
## �T�v
ESP32-WROOM-32���W���[�����g�p�����AUART��BluetoothSPP�𑊌ݕϊ����A**�V���A���ʐM�𖳐��ōs����悤�ɂ���**�f�o�C�X�ł��B

�����ʐM�@�\���Ȃ��}�C�R���ł��A**�v���O�����̏C����V�K�̊J�����𓱓�����K�v�������A�]���̃V���A���ʐM�Ɠ������o�ŒʐM���o���܂��B**

**!!ESP32��3.3V�쓮�Ȃ̂ŁA5V�쓮�}�C�R���Ɛڑ�����ꍇ�͕������K�v�ł��B!!**
~~5V�q���ł������ɂ͎��ȂȂ�����~~
## �g�p���@


## ��H�}
![circuit](./pic/circuit.png "circuit")

### BOOT�ERESET
Bluetooth����wifi�ւ̕ύX��v���O�����̏C����z�肵�āA�t�@�[���E�F�A�����������ł���悤�ɁA�蓮�������݉�H����������B
dataseet�̋L�q�̒ʂ�ɁA
### �N������UART���O�ݒ�
ESP32�ւ̃t�@�[���E�F�A�������݂ƁAUART����M��UART1�����L����B
�ʏ�ESP32�͋N�����Ƀ��O��UART1����o�͂���B
���ꂪ����ƁA�}�C�R���Ƃ̒ʐM�ɃS�~�����邱�ƂɂȂ�B
dataseet�ɁAGPIO5�ɂĂ��̃��O�̏o�͐ݒ肪�ł���Ƃ���B
![gpio5setting](./pic/gpio5setting.png "gpio5setting")
���̕\����GPIO5��GND�ɗ��Ƃ��΃��O���o�͂���Ȃ��Ȃ邱�Ƃ�������̂ŁAGPIO5��GND�ɐڑ�����B



