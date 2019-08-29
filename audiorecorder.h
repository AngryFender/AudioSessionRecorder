#ifndef AUDIORECORDER_H
#define AUDIORECORDER_H
#include <QObject>
#include <QAudioRecorder>
#include <QUrl>

class AudioRecorder:public QObject
{

    Q_OBJECT
public:
    AudioRecorder();
    ~AudioRecorder();



    Q_INVOKABLE void record();
    Q_INVOKABLE void stop();

signals:
    void signal_duration(int duration);

public slots:
    void duration_changed(qint64 duration);




private:

    QAudioRecorder qaudio;
    QAudioEncoderSettings qsettings;
};

#endif // AUDIORECORDER_H
