QT += core gui network sql multimedia widgets

CONFIG += debug_and_release warn_on

win32 {
    LIBS += -lrasapi32 -lshell32
    DEFINES += WINVER=0x0501
}

TARGET = Aircel
TEMPLATE = app

RESOURCES += resource/image.qrc \
    resource/audio.qrc
RC_FILE = resource/aircel.rc

SOURCES += main.cpp\
    MainWindow.cpp \
    AnimateButton.cpp \
    At.cpp \
    DeamonDatabase.cpp \
    DeamonSetting.cpp \
    ImageButton.cpp \
    SingleApplication.cpp \
    Contact.cpp \
    Message.cpp \
    SpeedLabel.cpp \
    DeamonInterface.cpp \
    ContactDialog.cpp \
    ExitDialog.cpp \
    MessageDialog.cpp \
    PinActivateDialog.cpp \
    PinModifyDialog.cpp \
    PinUnlockDialog.cpp \
    PinVerifyDialog.cpp \
    CheckBalanceWidget.cpp \
    DeviceWidget.cpp \
    HomeWidget.cpp \
    MessageWidget.cpp \
    MessageSettingWidget.cpp \
    NetworkWidget.cpp \
    NetworkModeWidget.cpp \
    NetworkSelectionWidget.cpp \
    NetworkSettingWidget.cpp \
    NetworkStatusWidget.cpp \
    OperatorWidget.cpp \
    PinWidget.cpp \
    PocketWidget.cpp \
    SettingWidget.cpp \
    SimUsimWidget.cpp \
    UserManualWidget.cpp \
    PinDialog.cpp \
    ContactMultipleSelectDialog.cpp \
    ContactFieldDialog.cpp \
    MessageFieldDialog.cpp \
    IncomingDialog.cpp \
    Data.cpp \
    Setting.cpp \
    MessageContentWidget.cpp \
    ContactContentWidget.cpp \
    ContactWidget.cpp \
    TimeLabel.cpp \
    DataWidget.cpp \
    ContactSelectDialog.cpp


HEADERS  += MainWindow.h \
    AnimateButton.h \
    At.h \
    DeamonConnection.h \
    DeamonDatabase.h \
    DeamonSetting.h \
    Define.h \
    ImageButton.h \
    SingleApplication.h \
    Contact.h \
    Message.h \
    SpeedLabel.h \
    DeamonInterface.h \
    ContactDialog.h \
    ExitDialog.h \
    MessageDialog.h \
    PinActivateDialog.h \
    PinModifyDialog.h \
    PinUnlockDialog.h \
    PinVerifyDialog.h \
    MessageWidget.h \
    MessageSettingWidget.h \
    NetworkWidget.h \
    HomeWidget.h \
    NetworkModeWidget.h \
    NetworkSelectionWidget.h \
    NetworkSettingWidget.h \
    NetworkStatusWidget.h \
    OperatorWidget.h \
    PinWidget.h \
    PocketWidget.h \
    SettingWidget.h \
    SimUsimWidget.h \
    UserManualWidget.h \
    CheckBalanceWidget.h \
    DeviceWidget.h \
    PinDialog.h \
    ContactMultipleSelectDialog.h \
    ContactFieldDialog.h \
    MessageFieldDialog.h \
    IncomingDialog.h \
    Data.h \
    Setting.h \
    MessageContentWidget.h \
    ContactContentWidget.h \
    ContactWidget.h \
    TimeLabel.h \
    DataWidget.h \
    ContactSelectDialog.h

HEADERS += SerialPort.h \
        SerialEnumerator.h \

SOURCES	+= SerialPort.cpp

unix:SOURCES += SerialPortPosix.cpp DeamonConnectionLinux.cpp
unix:!macx:SOURCES += SerialEnumeratorUnix.cpp

macx {
  SOURCES   += SerialEnumeratorOsx.cpp DeamonConnectionMac.cpp
  LIBS      += -framework IOKit -framework CoreFoundation
}

win32 {
  SOURCES   += SerialPortWin.cpp SerialEnumeratorWin.cpp DeamonConnectionWindows.cpp
  LIBS      += -lsetupapi -ladvapi32 -luser32
}





