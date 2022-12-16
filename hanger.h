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
      //+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
      //
      // Function: Hanger
      //
      // Description:
      // Constructor for the Hanger class.
      //
      // Notes:
      //
      //-------------------------------------------------------------------------------
      Hanger(unsigned int hangerId);

      //+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
      //
      // Function: CheckHanger
      //
      // Description:
      // Returns true if hanger is occupied.
      //
      // Notes:
      //
      //-------------------------------------------------------------------------------
      bool CheckHanger();

      //+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
      //
      // Function: StoreVehicle
      //
      // Description:
      // Assigns the pointer of a vehicle to the stored vehicle variable.
      //
      // Notes:
      //
      //-------------------------------------------------------------------------------
      void virtual StoreVehicle(Vehicle* vehicle);

      //+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
      //
      // Function: GetStoredAircraft
      //
      // Description:
      // Returns the pointer of the stored aircraft
      //
      // Notes:
      //
      //-------------------------------------------------------------------------------
      Aircraft* GetStoredAircraft();

      //+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
      //
      // Function: GetHangerId
      //
      // Description:
      // Return the hanger id assigned upon initialisation.
      //
      // Notes:
      //
      //-------------------------------------------------------------------------------
      unsigned int GetHangerId();
   
   protected:
      Vehicle* storedVehicle_;
      unsigned int hangerId_;
};

#endif // HANGER_H