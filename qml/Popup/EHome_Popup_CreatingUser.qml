import QtQuick 2.0
import "../Component/OtherComponent"
import Ehome 1.0

Small_Popup {
    id: _root
    __popupTitle: "Info"
    __popupType: 2 // info
    Text {
        id: textCurrentConnect
        text: "Setting up your user
Please wat..."
        horizontalAlignment: Text.AlignHCenter
        font.pixelSize: 20
        anchors.horizontalCenter: parent.horizontalCenter
        y: __startContent + 30
    }

    EButton_StandAlone {
        id: _btnGotoNetSetup
        btnLabel: "Switch to new user"
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.bottom: parent.bottom ; anchors.bottomMargin: 10
        onBtnClicked: {
            SettingModel.curInx = HomeEnum.SETTING_NETWORK
            AppManager.handleHidePopup(HomeEnum.EVENT_GO_TO_SETTING)
        }
    }
}
