//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//
// Implementation File: vehicle.cpp
//
//-------------------------------------------------------------------------------

#include "vehicle.h"

Vehicle::Vehicle()
{

};

Vehicle::Vehicle(unsigned int maxPassengers)
{
   numberOfPassengers_ = 0;
   maxPassengers_ = maxPassengers;
   fuelLevel_ = 10;
   //state_ = Idle;
};

unsigned int Vehicle::GetMaxPassengers()
{
   return maxPassengers_;
};

unsigned int Vehicle::GetNumberOfPassengers()
{
   return numberOfPassengers_;
};

void Vehicle::SetState(Vehicle::VehicleState state)
{
   state_ = state;
};

Vehicle::VehicleState Vehicle::GetState()
{
   return state_;
};