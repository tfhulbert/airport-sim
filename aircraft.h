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
   enum AircraftState 
   {
      Idle = 0,
      Parked,
      Running,
      Taxiing,
      Flying
   };

   public:
      Aircraft();
      Aircraft(std::string aircraftIdentifier, int maxPassengers);

   private:
      std::string aircraftIdentifier_;
};

#endif // AIRCRAFT_H