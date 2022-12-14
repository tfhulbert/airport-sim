//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//
// Implementation File: vehicle.cpp
//
//-------------------------------------------------------------------------------

#include "vehicle.h"

Vehicle::Vehicle()
{

};

Vehicle::Vehicle(int maxPassengers)
{
   numberOfPassengers_ = 0;
   maxPassengers_ = maxPassengers;
   fuelLevel_ = 10;
};

int Vehicle::GetMaxPassengers()
{
   return maxPassengers_;
};

int Vehicle::GetNumberOfPassengers()
{
   return numberOfPassengers_;
};