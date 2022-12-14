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
      // Function: StoreAircraft
      //
      // Description:
      // Assigns the pointer of an aircraft to the stored vehicle variable.
      //
      // Notes:
      //
      //-------------------------------------------------------------------------------
      void StoreAircraft(Aircraft* aircraft);

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
   
   private:
      Aircraft* storedVehicle_;
      unsigned int hangerId_;
};

#endif // HANGER_H