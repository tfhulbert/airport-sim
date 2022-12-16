//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//
// Implementation File: hanger.cpp
//
//-------------------------------------------------------------------------------

#include "hanger.h"
#include <stdlib.h>

Hanger::Hanger(unsigned int hangerId)
{
   storedVehicle_ = NULL;
   hangerId_ = hangerId;
};

// returns true if hanger is occupied
bool Hanger::CheckHanger()
{
   bool hangerFull = true;

   if(storedVehicle_ == NULL)
   {
      hangerFull = false;
   }
   return hangerFull;
}

void Hanger::StoreVehicle(Vehicle* vehicle)
{
   storedVehicle_ = vehicle;
   vehicle->SetState(Vehicle::Parked);
}

Aircraft* GetStoredVehicle()
{

}

unsigned int Hanger::GetHangerId()
{
   return hangerId_;
}