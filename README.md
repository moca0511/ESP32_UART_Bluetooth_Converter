# ESP32_UART_Bluetooth_Converter
## �T�v
ESP32-WROOM-32���W���[�����g�p�����AUART��BluetoothSPP�𑊌ݕϊ����A**�V���A���ʐM�𖳐��ōs����悤�ɂ���**�f�o�C�X�ł��B

�����ʐM�@�\���Ȃ��}�C�R���ł��A**�v���O�����̏C����V�K�̊J�����𓱓�����K�v�������A�]���̃V���A���ʐM�Ɠ������o�ŒʐM���o���܂��B**

**!!ESP32��3.3V�쓮�Ȃ̂ŁA5V�쓮�}�C�R���Ɛڑ�����ꍇ�͕������K�v�ł��B!!**
~~5V�q���ł������ɂ͎��ȂȂ�����~~
## �g�p���@
�{�̂̃X���C�h�X�C�b�`�ŃV���A���ʐM�̃{�[���[�g��I������B(9600bps/115200bps)

�}�C�R�����ɖ{�̂�ڑ�����B

�{�̂ɓd�����q������Bluetooth�ڑ��҂���Ԃɓ���B

�ʐM����PC��Bluetooth�f�o�C�X�̒ǉ��ɂ�ESP32-XXXX��ǉ��B
�f�o�C�X�ݒ�ɂĔC�ӂ̃{�[���[�g��I���B
���̍ۂɉ��zCOM�|�[�g�̃|�[�g�ԍ����m�F����Ƃ悢�B

teraterm���̃^�[�~�i���\�t�g�ŉ��zCOM�|�[�g���J���ĒʐM�J�n�B

**�X�}�[�g�t�H���ł��C�ӂ̃^�[�~�i���\�t�g�ŒʐM�\�ł��B**
## ��H�}
![circuit](./pic/circuit.png "circuit")

### �t�@�[���E�F�A�������ݕ��@
�H���d�q��[�����^�t�r�a�V���A���ϊ����W���[��](https://akizukidenshi.com/catalog/g/gM-08461/)�̂悤�ȃ��W���[����p���āAPC�Ɩ{�̂�ڑ�����B

BOOT�{�^���������Ȃ���RESET�{�^���������A�t�@�[���E�F�A�������݃��[�h�Ɉڍs����B

ArduinoIDE�Ńt�@�[���E�F�A���J���ď������݊J�n�B

**ESP32�ɏ������ނ��߂ɂ͕ʓr�ݒ肪�K�v�ł�[(�Q�l�T�C�g)](https://spiceman.jp/esp32-arduino-ide/#Arduino_IDE)**

�������ݏI����RESET�{�^�����������ƂŋN������B

### �N������UART���O�ݒ�
ESP32�ւ̃t�@�[���E�F�A�������݂ƁAUART����M��UART1�����L����B
�ʏ�ESP32�͋N�����Ƀ��O��UART1����o�͂���B
���ꂪ����ƁA�}�C�R���Ƃ̒ʐM�ɃS�~�����邱�ƂɂȂ�B
dataseet�ɁAGPIO5�ɂĂ��̃��O�̏o�͐ݒ肪�ł���Ƃ���B
![gpio5setting](./pic/gpio5setting.png "gpio5setting")
���̕\����GPIO5��GND�ɗ��Ƃ��΃��O���o�͂���Ȃ��Ȃ邱�Ƃ�������̂ŁAGPIO5��GND�ɐڑ�����B



