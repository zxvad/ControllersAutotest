#-------------------------------------------------
#
# Project created by QtCreator 2013-09-19T16:36:31
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

unix {
    CPPUNIT_LIB_DIR = /usr/local/lib

    debug {
        OBJECTS_DIR = .obj_debug
        LIBS += -L$${CPPUNIT_LIB_DIR} -lcppunit
    }
    release {
        OBJECTS_DIR = .obj_release
        LIBS += -L$${CPPUNIT_LIB_DIR} -lcppunit
    }
}

win32 {
    QMAKE_CXXFLAGS_DEBUG -= -Gm
    QMAKE_CXXFLAGS_DEBUG -= -Zi

    #CPPUNIT_LIB_DIR = C:\Users\Rushik\workspace\CppUnitBuild\Debug\
    CPPUNIT_LIB_DIR = C:/Alcherk/DevTools/cppunit/src/cppunit/.libs

    #LIBS += $${CPPUNIT_LIB_DIR}\libCppUnitBuild.a
    LIBS += $${CPPUNIT_LIB_DIR}/libcppunit.a

}

TARGET = ControllersAutotestQt
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    ../../math/AutotestController/autotestcontroller.cpp \
    ../../math/SCADAEvents/Utils.cpp \
    ../../math/SCADAEvents/DateTime.cpp \
    ../../math/SCADAEvents/Sensors/SensorValue.cpp \
    ../../math/SCADAEvents/Sensors/SensorsValuesProcessor.cpp \
    ../../math/SCADAEvents/Sensors/SensorSettingsAbstractFactory.cpp \
    ../../math/SCADAEvents/Sensors/SensorSettings.cpp \
    ../../math/SCADAEvents/Sensors/SensorFloatValue.cpp \
    ../../math/SCADAEvents/Sensors/SensorFloatSettingsFactory.cpp \
    ../../math/SCADAEvents/Sensors/SensorFloatSettings.cpp \
    ../../math/SCADAEvents/SCADAMessages/SCADAException.cpp \
    ../../math/SCADAEvents/SCADAMessages/SCADAEventMessageInt.cpp \
    ../../math/SCADAEvents/SCADAMessages/SCADAEventMessageFloat.cpp \
    ../../math/SCADAEvents/SCADAMessages/SCADAEventMessage.cpp \
    ../../tests/TagsProcessorTest/TagsProcessorTest.cpp \
    ../../tests/TagsProcessorTest/TaggedMessageTest.cpp \
    ../../tests/TagsProcessorTest/RawDataTest.cpp \
    ../../tests/SCADATests/Tester.cpp \
    ../../tests/SCADATests/SensorValueTest.cpp \
    ../../tests/SCADATests/SensorSettingsTest.cpp \
    ../../tests/SCADATests/SensorFloatValueTest.cpp \
    ../../tests/SCADATests/SensorFloatSettingsTest.cpp \
    ../../tests/SCADATests/SCADAMessageTest.cpp \
    ../../tests/SCADATests/SCADAMessageIntTest.cpp \
    ../../tests/SCADATests/SCADAMessageFloatTest.cpp \
    testscontroller.cpp

HEADERS  += mainwindow.h \
    ../../math/AutotestController/autotestcontroller.h \
    ../../math/SCADAEvents/Utils.h \
    ../../math/SCADAEvents/GlobalConst.h \
    ../../math/SCADAEvents/DateTime.h \
    ../../math/SCADAEvents/Sensors/SensorValue.h \
    ../../math/SCADAEvents/Sensors/SensorsValuesProcessor.h \
    ../../math/SCADAEvents/Sensors/SensorSettingsAbstractFactory.h \
    ../../math/SCADAEvents/Sensors/SensorSettings.h \
    ../../math/SCADAEvents/Sensors/SensorFloatValue.h \
    ../../math/SCADAEvents/Sensors/SensorFloatSettingsFactory.h \
    ../../math/SCADAEvents/Sensors/SensorFloatSettings.h \
    ../../math/SCADAEvents/SCADAMessages/SCADAException.h \
    ../../math/SCADAEvents/SCADAMessages/SCADAEventMessageInt.h \
    ../../math/SCADAEvents/SCADAMessages/SCADAEventMessageFloat.h \
    ../../math/SCADAEvents/SCADAMessages/SCADAEventMessage.h \
    ../../tests/TagsProcessorTest/TagsProcessorTest.h \
    ../../tests/TagsProcessorTest/TaggedMessageTest.h \
    ../../tests/TagsProcessorTest/RawDataTest.h \
    ../../tests/SCADATests/Tester.h \
    ../../tests/SCADATests/SensorValueTest.h \
    ../../tests/SCADATests/SensorSettingsTest.h \
    ../../tests/SCADATests/SensorFloatValueTest.h \
    ../../tests/SCADATests/SensorFloatSettingsTest.h \
    ../../tests/SCADATests/SCADAMessageTest.h \
    ../../tests/SCADATests/SCADAMessageIntTest.h \
    ../../tests/SCADATests/SCADAMessageFloatTest.h \
    testscontroller.h

FORMS    += mainwindow.ui

OTHER_FILES += \
    ../../tests/SCADATests/testBase.csv
