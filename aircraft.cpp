//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//
// Implementation File: aircraft.cpp
//
//-------------------------------------------------------------------------------

#include "aircraft.h"
#include <iostream>
#include <string>
#include "vehicle.h"

Aircraft::Aircraft()
{

};

Aircraft::Aircraft(std::string aircraftIdentifier, int maxPassengers)
{
   aircraftIdentifier_ = aircraftIdentifier;
   maxPassengers_ = maxPassengers;

   std::cout << "Created new aircraft with identifier " << aircraftIdentifier_ << " and max passengers " << maxPassengers_ << std::endl;
};