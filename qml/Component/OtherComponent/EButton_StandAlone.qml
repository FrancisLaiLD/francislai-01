import QtQuick 2.0

Rectangle {
    id: _root
    // external properties
    property int btnWidth: -1
    property int btnHeight: 40
    property string btnLabel: "Unknow button"
    property string btnLabelColor: AppValueConst.text_screen_color
    property string btnColorTop: "#808080"
    property string btnColorBottom: "white"
    property string btnColorPress: "#B79612"
    property string btnBorderColor: "#404040"
    property bool __btnEnable: true
    property int btnLabelFont: 14

    // Internal Properties
    property bool isPressed: false
    // signals
    signal btnClicked()

    width: btnWidth === -1 ? idBtnLabel.width + 30 : btnWidth
    height: btnHeight === 40 ? idBtnLabel.height + 16 : btnHeight
    radius: 8
    border.width: 1
    border.color: btnBorderColor
    gradient:
        Gradient {
        GradientStop { position: 0.0; color: (_root.__btnEnable ? (_root.isPressed ? btnColorPress : btnColorTop) : "#AAA8A3")}
        GradientStop { position: 1.0; color: (_root.__btnEnable ? (_root.isPressed ? btnColorPress : btnColorBottom) : "#AAA8A3")}
    }

    Text {
        id: idBtnLabel
        text: btnLabel
        font.pixelSize: btnLabelFont
        color: btnLabelColor
        anchors.centerIn: parent
    }
    MouseArea {
        id: idMainMou
        anchors.fill: parent
        visible: __btnEnable
        onPressed: {
            _root.isPressed = true
        }
        onReleased: {
            if (_root.isPressed)
                _root.btnClicked()
        }
        onExited: {
            _root.isPressed = false
        }
    }
}
