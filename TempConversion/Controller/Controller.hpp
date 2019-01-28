//
//  Controller.hpp
//  TempConversion
//
//  Created by Guillermo Ramos  on 1/28/19.
//  Copyright © 2019 Guillermo Ramos . All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include <iostream>
#include <cassert>
#include <cstdlib>
#include <iomanip>
using namespace std;

class Controller
{
private:
    //Precondition: cels is a Celsius temperature no less than absolute zero(-273.15)
    //Postcondition: The return value is the temperature cels converted to Farenheit degrees.
    double celsiusToFarenheit(double cels);
public:
    void start();
    
};


#endif /* Controller_hpp */
