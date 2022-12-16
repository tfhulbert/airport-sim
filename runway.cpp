//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//
// Implementation File: runway.cpp
//
//-------------------------------------------------------------------------------

#include "runway.h"

Runway::Runway(int runwayId, int runwayLength) : Hanger(runwayId)
{
   bool runwayFree_ = true;
   runwayLength_ = runwayLength;
}

unsigned int Runway::GetRunwayLength()
{
   return runwayLength_;
}

void Runway::StoreVehicle(Vehicle* vehicle)
{
   storedVehicle_ = vehicle;
   vehicle->SetState(Vehicle::Taxiing);
};