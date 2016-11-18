#pragma once
#include <iostream>
#include <string>
#include "return_value.cpp"

class mySensor
{
public:
    mySensor();
    virtual ~mySensor();
    virtual std::string returnState() = 0;
    virtual void returnValue() = 0;
};

