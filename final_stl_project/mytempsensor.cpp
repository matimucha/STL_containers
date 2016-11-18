#include "mytempsensor.h"

std::string _state = "";
int _value = 0;


myTempSensor::myTempSensor() {}
myTempSensor::~myTempSensor() {}
std::string myTempSensor::returnState()
{
    return _state;
}

void myTempSensor::returnValue()
{
    _value = std::modulus<int>()(std::rand(), 30);
    int returnValue(_value);
    std::cout<<"Temperature value for this sensor is: " << _value <<std::endl;
}
