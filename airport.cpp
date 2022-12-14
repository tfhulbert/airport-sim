//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//
// Implementation File: infrastructure.cpp
//
//-------------------------------------------------------------------------------

#include "airport.h"

Airport::Airport(int runwayCount, int hangerCount, int terminalCount)
{
   for (int i = 0; i < runwayCount; i++) 
   {
      Runway* newRunway = new Runway(1000);
      totalRunwayCount_++;
      this->runwayList_.push_back(newRunway);
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