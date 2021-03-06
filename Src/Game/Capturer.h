#pragma once

#include "Data/TelemetryDataBuffer.h"

#include <QObject>
#include <QMap>
#include <QThread>

class Capturer : public QThread
{
    Q_OBJECT
public:
    Capturer();
    virtual void setFlag(bool flag){};

protected:
    TelemetryDataBuffer lastTelemetryData;

};

inline Capturer::Capturer()
{
    QObject::connect(&lastTelemetryData,&TelemetryDataBuffer::messagesChanged,
                     &TelemetryDataBuffer::Instance(),&TelemetryDataBuffer::update,
                     Qt::QueuedConnection);
}
