//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//
// Implementation File: infrastructure.cpp
//
//-------------------------------------------------------------------------------

#include "infrastructure.h"

using namespace Infrastructure;

Airport::Airport(int runwayCount, int hangerCount, int terminalCount)
{
   for (int i = 0; i < runwayCount; i++) 
   {
      
      totalRunwayCount_++;
   }

   totalHangerCount_ = hangerCount;
   totalTerminalCount_ = terminalCount;
}

int Airport::GetRunwayCount()
{
   return totalRunwayCount_;
}

int Airport::GetHangerCount()
{
   return totalHangerCount_;
}

int Airport::GetTerminalCount()
{
   return totalTerminalCount_;
}

Hanger::Hanger(int runwayLength)
{
   
}