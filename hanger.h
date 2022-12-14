//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//
// Header File: hanger.h
//
// Description:
// Contains prototypes and definitions for hanger class
//
//------------------------------------------------------------------------------

#ifndef HANGER_H
#define HANGER_H

#include "aircraft.h"

class Hanger
{
   public:
      Hanger(int hangerId);
      bool CheckHanger(); // returns true if hanger is occupied
      void StoreAircraft(Aircraft* aircraft);
      unsigned int GetHangerId();
   
   private:
      Aircraft* storedVehicle_;
      int hangerId_;
};

#endif // HANGER_H