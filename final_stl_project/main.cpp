#include <iostream>
#include <memory>
#include "mytempsensor.h"

int main()
{
    std::unique_ptr<mySensor> temp_ptr = std::make_unique<myTempSensor>();
    temp_ptr->returnValue();
    return 0;
}
