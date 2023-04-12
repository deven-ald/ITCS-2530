#pragma once
#include "clockType.h"
#include "deven.h" //Included to use the headerfiles defined in this file
class extClockType :
    public clockType
{
private:
    clockType clock;
    std::string timezone;
};

