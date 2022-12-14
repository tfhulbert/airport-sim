//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//
// Header File: aircraft.h
//
// Description:
// Contains prototypes and definitions for aircraft class
//
//------------------------------------------------------------------------------

#ifndef AIRCRAFT_H
#define AIRCRAFT_H

#include <string>
#include "vehicle.h"

class Aircraft : public Vehicle
{
   enum AircraftState : unsigned int
   {
      Idle = 0,
      Parked,
      Running,
      Taxiing,
      Flying
   };

   public:
      //+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
      //
      // Function: Aircraft
      //
      // Description:
      // Constructor for the Aircraft class.
      //
      // Notes:
      //
      //-------------------------------------------------------------------------------
      Aircraft();

      //+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
      //
      // Function: Aircraft
      //
      // Description:
      // Overloaded constructor for the Aircraft class.
      //
      // Notes:
      // {notes}
      //
      //-------------------------------------------------------------------------------
      Aircraft(std::string aircraftIdentifier, unsigned int maxPassengers);

   protected:
      std::string aircraftIdentifier_;
      AircraftState state_;
};

#endif // AIRCRAFT_H