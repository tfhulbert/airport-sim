//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//
// Header File: vehicle.h
//
// Description:
// Contains prototypes and definitions for vehicle class
//
//------------------------------------------------------------------------------

#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle
{
   enum VehicleState
   {
      Idle = 0,
      Parked,
      Running,
      Operating
   };

   public:
      Vehicle();
      Vehicle(int maxPassengers);
      unsigned int GetMaxPassengers();
      unsigned int GetNumberOfPassengers();
   
   protected:
      unsigned int numberOfPassengers_;
      unsigned int maxPassengers_;
      unsigned int fuelLevel_;
};

#endif // VEHICLE_H