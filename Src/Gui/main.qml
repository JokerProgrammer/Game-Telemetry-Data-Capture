import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Layouts 1.15
import QtQuick.Controls 2.15
import QtQuick.Controls.Material 2.15

ApplicationWindow {
    id: root
    width: 1024
    height: 820
    visible: true

    Item {
        id: bgItem
        anchors.left: root.contentItem.left
        anchors.top: root.contentItem.top
        anchors.bottom: root.contentItem.bottom
        anchors.right: root.contentItem.right

        TelemetryDataView {
            id: view
            anchors.left: bgItem.left
            anchors.top: bgItem.top
            anchors.bottom: bgItem.bottom
            anchors.right: gameList.left
            anchors.leftMargin: 30
            anchors.rightMargin: 30
        }

        GameList {
            id: gameList
            height: bgItem.height
            anchors.right: bgItem.right

        }
    }// bgItem
}
