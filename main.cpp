#include <iostream>
#include "aircraft.h"
#include "airport.h"

int main()
{
   std::cout << "Welcome to airport sim" << std::endl;

   Airport* TangaloomaAirport = new Airport(1, 5, 1);

   Aircraft* cargoPlane = new Aircraft("NZ127", 2);

   Hanger* empty = TangaloomaAirport->FindEmptyHanger();

   empty->StoreAircraft(cargoPlane);

   empty = TangaloomaAirport->FindEmptyHanger();
}