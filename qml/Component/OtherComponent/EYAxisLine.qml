import QtQuick 2.0

E_VerticalLine {
    id: idRoot
    property int resolution: 5
    property int maxValue: 100
    lineColor: "gray"
    lineWidth: 2
    lineRange: parent.height - 30
    Column {
//        spacing: parent.width/resolution
        Repeater {
            model: resolution
            Item {
                E_HorizentalLine {
                    id: resLine
                    anchors.left: parent.right
                    y: index* idRoot.lineRange/idRoot.resolution
                    lineColor: "black"
                    lineRange: 5

                }
                Text {
                    id: resText
                    text: maxValue/resolution* (resolution - index)
                    anchors.right: parent.left
                    anchors.rightMargin: 3
                    anchors.verticalCenter: resLine.verticalCenter
                }
                E_HorizentalLine {
                    id: resVirtualLine
                    anchors.left: parent.right
                    anchors.leftMargin: 50
                    y: index* idRoot.lineRange/idRoot.resolution
                    lineColor: "gray"
                    lineRange: 400

                }
            }
        }
    }
    Component.onCompleted: {
        console.log('width: ' + idRoot.width)
    }
}
