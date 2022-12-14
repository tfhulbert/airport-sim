#include <iostream>
#include "infrastructure.h"

using namespace Infrastructure;

int main()
{
    Airport* TangaloomaAirport = new Airport(1, 5, 1);
    std::cout << "Welcome to airport sim" << std::endl;
    std::cout << "Number of Runways is " << TangaloomaAirport->GetRunwayCount() << std::endl;
    std::cout << "Number of Hangers is " << TangaloomaAirport->GetHangerCount() << std::endl;
    std::cout << "Number of Terminals is " << TangaloomaAirport->GetTerminalCount() << std::endl;
}