#pragma once
#include "mysensor.h"


class myTempSensor : public mySensor
{
public:
    myTempSensor();
    virtual ~myTempSensor();
    virtual std::string returnState();
    virtual void returnValue();
};

