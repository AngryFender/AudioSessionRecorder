#include "audiorecorder.h"

AudioRecorder::AudioRecorder()
{
    qsettings.setCodec("audio/pcm");
    qsettings.setQuality(QMultimedia::HighQuality);
    qsettings.setBitRate(44100);
    qsettings.setChannelCount(1);

    qaudio.setEncodingSettings(qsettings);

    qaudio.setOutputLocation(QUrl::fromLocalFile("test.wav"));

    connect(&qaudio,SIGNAL(duration_changed(qint64)),this,SLOT(duration_changed(qint64)));

}

AudioRecorder::~AudioRecorder()
{

}

void AudioRecorder::record()
{
    qaudio.record();

}

void AudioRecorder::stop()
{
    qaudio.stop();
}

void AudioRecorder::duration_changed(qint64 duration)
{

}
