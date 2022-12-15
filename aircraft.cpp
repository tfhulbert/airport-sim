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

Aircraft::Aircraft(std::string aircraftIdentifier, 
                  unsigned int maxPassengers)
{
   aircraftIdentifier_ = aircraftIdentifier;
   maxPassengers_ = maxPassengers;
   //state_ = Idle;

   std::cout << "Created new aircraft with identifier " << aircraftIdentifier_ << " and max passengers " << maxPassengers_ << std::endl;
};

/*void Aircraft::SetState(enum AircraftState state)
{
   state_ = state;
};

AircraftState Aircraft::GetState()
{
   return state_;
};*/