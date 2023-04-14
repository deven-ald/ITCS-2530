#pragma once
#include "personType.h"
#include "deven.h"
#include "addressType.h"
#include "dateType.h"

class extPersonType :
    public personType
{
private:
    addressType address;
    dateType birthdate;
    std::string classification;
    int phonenumber;


};

