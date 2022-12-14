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
      unsigned int GetRunwayCount();
      unsigned int GetHangerCount();
      unsigned int GetTerminalCount();

      Hanger* FindEmptyHanger();

   private:
      std::list<Runway*> runwayList_;
      std::list<Terminal*> TerminalList_;
      std::list<Hanger*> hangerList_;

      int totalHangerCount_;
      int totalRunwayCount_;
      int totalTerminalCount_;
};

#endif // AIRPORT_H