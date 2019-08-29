import QtQuick 2.0
import QtQuick.Controls 2.5


Item {
    width: 600
    height: 400


    Button {
        id: btn_record
        anchors.centerIn: parent
        anchors.verticalCenterOffset: -50
        height: width
        width: parent.width/3

        Image {
            id: name
            width: parent.width
            height: parent.height
            source: "ICONS_RECORD"
        }
    }

    Label {
        id: lbl_recordLength
        x: 282
        y: 256
        text: qsTr("00:00")
        font.pointSize: 17
        topPadding: 10
        anchors.top: btn_record.bottom
        anchors.horizontalCenter: parent.horizontalCenter
    }
}
