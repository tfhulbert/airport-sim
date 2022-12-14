//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//
// Implementation File: hanger.cpp
//
//-------------------------------------------------------------------------------

#include "hanger.h"
#include <stdlib.h>

Hanger::Hanger(int hangerId)
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

void Hanger::StoreAircraft(Aircraft* aircraft)
{
   storedVehicle_ = aircraft;
}

int Hanger::GetHangerId()
{
   return hangerId_;
}