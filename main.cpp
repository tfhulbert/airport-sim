#include <iostream>
#include "aircraft.h"
#include "airport.h"

int main()
{
   std::cout << "Welcome to airport sim" << std::endl;

   Airport tangaloomaAirport = Airport(1, 5, 1);

   Aircraft cargoPlane = Aircraft("NZ127", 2);
   //Aircraft passengerPlane = Aircraft("QF236", 5);

   Hanger* emptyHanger = tangaloomaAirport.FindEmptyHanger();

   emptyHanger->StoreAircraft(&cargoPlane);

   emptyHanger = tangaloomaAirport.FindEmptyHanger();

   std::cout << "Deconstructed airport" << std::endl;

   return 0;
}