//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//
// Header File: infrastructure.h
//
// Description:
// Contains classes for physical airport infrastructure
//
//------------------------------------------------------------------------------

#ifndef AIRPORT_H
#define AIRPORT_H

#include "hanger.h"
#include <iostream>
#include <list>
#include "runway.h"
#include "terminal.h"

class Airport
{
   public:
      Airport(int runwayCount, int hangerCount, int terminalCount);
      int GetRunwayCount();
      int GetHangerCount();
      int GetTerminalCount();

   private:
      std::list<Runway*> runwayList_;
      std::list<Terminal*> TerminalList_;
      std::list<Hanger*> hangerList_;

      int totalHangerCount_ = 0;
      int totalRunwayCount_ = 0;
      int totalTerminalCount_ = 0;
};

#endif // AIRPORT_H