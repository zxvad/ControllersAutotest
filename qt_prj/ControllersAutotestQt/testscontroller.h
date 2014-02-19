#pragma once

#include <QObject>

class TestsController : public QObject
{
    Q_OBJECT
public:
    explicit TestsController(QObject *parent = 0);
    QStringList runTests(const QString &logFileName = "");
    
signals:
    void newLogLineAdded(const QString &logLine);
};

