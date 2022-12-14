#include <iostream>
#include "aircraft.h"
#include "airport.h"

int main()
{
   std::cout << "Welcome to airport sim" << std::endl;

   Airport TangaloomaAirport = Airport(1, 5, 1);

   Aircraft cargoPlane = Aircraft("NZ127", 2);

   Hanger* emptyHanger = TangaloomaAirport.FindEmptyHanger();

   emptyHanger->StoreAircraft(&cargoPlane);

   emptyHanger = TangaloomaAirport.FindEmptyHanger();
}