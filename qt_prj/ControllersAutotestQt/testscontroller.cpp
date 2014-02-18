#include "testscontroller.h"

TestsController::TestsController(QObject *parent) :
    QObject(parent)
{
}


/**
  * inititate testing process, perform all tests and return QStringList
  * with their results. If logFileName declared - store same info to file.
  * If file with same name exist - overwrite it.
  *
  * emit newLogLineAdded signal in process with one log line in argument
  *
  * @param logFileName - can be empty (no file will be writen)
  * @return - list of log lines
  */
QStringList TestsController::runTests(const QString &logFileName)
{
}
