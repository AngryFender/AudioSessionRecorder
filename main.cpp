#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QApplication>
#include <QQmlContext>
#include "iconprovider.h"
#include "audiorecorder.h"


int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QApplication app(argc, argv);

    QQmlApplicationEngine engine;
    app.setWindowIcon(QIcon(":/ICONS_RECORD"));
    AudioRecorder recorder;

    engine.rootContext()->setContextProperty("recorder",&recorder);
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    engine.addImageProvider(QLatin1String("iconProvider"), new IconProvider());






    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
