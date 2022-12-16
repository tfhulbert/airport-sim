#include <iostream>
#include "aircraft.h"
#include "airport.h"

int main()
{
   std::cout << "Welcome to airport sim" << std::endl;

   Airport tangaloomaAirport = Airport(1, 5, 1);

   Aircraft cargoPlane = Aircraft("NZ127", 2);
   //Aircraft passengerPlane = Aircraft("QF236", 5);

   /*Hanger* emptyHanger = tangaloomaAirport.FindEmptyHanger();

   std::cout << "Aircraft is in state " << cargoPlane.GetState() << std::endl;

   emptyHanger->StoreVehicle(&cargoPlane);

   emptyHanger = tangaloomaAirport.FindEmptyRunway();*/

   Runway* emptyRunway = tangaloomaAirport.FindEmptyRunway();

   emptyRunway->StoreVehicle(&cargoPlane);

   std::cout << "Aircraft is in state " << cargoPlane.GetState() << std::endl;

   emptyRunway = tangaloomaAirport.FindEmptyRunway();

   return 0;
}