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
   public:
      enum VehicleState : unsigned int;

      //+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
      //
      // Function: Vehicle
      //
      // Description:
      // Constructor for the Vehicle class.
      //
      // Notes:
      //
      //-------------------------------------------------------------------------------
      Vehicle();

      //+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
      //
      // Function: Vehicle
      //
      // Description:
      // Overloaded constructor for the Vehicle class.
      //
      // Notes:
      //
      //-------------------------------------------------------------------------------
      Vehicle(unsigned int maxPassengers);

      //+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
      //
      // Function: GetMaxPassengers
      //
      // Description:
      // Returns the maximum number of passengers a vehicle can take.
      //
      // Notes:
      //
      //-------------------------------------------------------------------------------
      unsigned int GetMaxPassengers();

      //+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
      //
      // Function: GetNumberOfPassengers
      //
      // Description:
      // Returns the number of passengers currently in a vehicle.
      //
      // Notes:
      //
      //-------------------------------------------------------------------------------
      unsigned int GetNumberOfPassengers();

      //+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
      //
      // Function: SetState
      //
      // Description:
      // Sets the vehicle state.
      //
      // Notes:
      //
      //-------------------------------------------------------------------------------
      void SetState(VehicleState state);

      //+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
      //
      // Function: GetState
      //
      // Description:
      // Returns the aircraft state.
      //
      // Notes:
      //
      //-------------------------------------------------------------------------------
      VehicleState GetState();

      typedef enum VehicleState : unsigned int
      {
         Idle = 0,
         Parked,
         Running,
         Taxiing,
         Flying
      } VehicleState;
   
   protected:
      unsigned int numberOfPassengers_;
      unsigned int maxPassengers_;
      unsigned int fuelLevel_;
      VehicleState state_;
      
};

#endif // VEHICLE_H