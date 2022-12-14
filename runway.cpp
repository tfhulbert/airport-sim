//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//
// Implementation File: runway.cpp
//
//-------------------------------------------------------------------------------

#include "runway.h"

Runway::Runway(int runwayLength)
{
   bool runwayFree_ = true;
   runwayLength_ = runwayLength;
}

unsigned int Runway::GetRunwayLength()
{
   return runwayLength_;
}