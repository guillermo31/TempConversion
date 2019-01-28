//
//  Controller.cpp
//  TempConversion
//
//  Created by Guillermo Ramos  on 1/28/19.
//  Copyright © 2019 Guillermo Ramos . All rights reserved.
//

#include "Controller.hpp"

void Controller:: start()
{
    double cels;
    cout << "Please enter a valid Celsius temperature: " << endl;
    cin >> cels;
    cout << celsiusToFarenheit(cels) << endl;
    
}

double Controller:: celsiusToFarenheit(double cels)
{
    const double MINIMUM_CELSIUS = -273.15; //abs zero in celsius degrees
    
    assert(cels >= MINIMUM_CELSIUS);
    return (9.0 / 5.0 * cels + 32);
    
}

