//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//
// Implementation File: runway.cpp
//
//-------------------------------------------------------------------------------

#include "runway.h"

Runway::Runway(int runwayLength)
{
   runwayLength_ = runwayLength;
}

int Runway::GetRunwayLength()
{
   return runwayLength_;
}