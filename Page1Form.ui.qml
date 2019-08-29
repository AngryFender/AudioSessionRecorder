import QtQuick 2.12
import QtQuick.Controls 2.5

Page {
    width: 600
    height: 400
    property alias btn_record: btn_record

    states: [
        State {
            name: "idle"
            PropertyChanges {


            }
        },
        State {
            name: "recording"
            PropertyChanges {

            }
        }
    ]

    Button {
        id: btn_record
        anchors.centerIn: parent
        anchors.verticalCenterOffset: -50
        height: width
        //focusPolicy: Qt.StrongFocus
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
