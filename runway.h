//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//
// Header File: runway.h
//
// Description:
// Contains prototypes and definitions for runway class
//
//------------------------------------------------------------------------------

#ifndef RUNWAY_H
#define RUNWAY_H

#include "hanger.h"
#include <iostream>
#include <list>
#include "vehicle.h"

class Runway : public Hanger
{
   public:
      //+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
      //
      // Function: Runway
      //
      // Description:
      // Constructor for the Runway class.
      //
      // Notes:
      //
      //-------------------------------------------------------------------------------
      Runway(int runwayId, int runwayLength);

      //+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
      //
      // Function: GetRunwayLength
      //
      // Description:
      // Returns the length of the runway object.
      //
      // Notes:
      // {notes}
      //
      //-------------------------------------------------------------------------------
      unsigned int GetRunwayLength();

      //+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
      //
      // Function: StoreVehicle
      //
      // Description:
      // Assigns the pointer of a vehicle to the stored vehicle variable and sets the
      // vehicle state.
      //
      // Notes:
      //
      //-------------------------------------------------------------------------------
      void StoreVehicle(Vehicle* vehicle);

   private:
      bool runwayFree_;
      unsigned int runwayLength_;
      // add pointer to aircraft
};

#endif // RUNWAY_H