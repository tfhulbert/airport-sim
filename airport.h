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
      //+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
      //
      // Function: Airport
      //
      // Description:
      // Constructor for the Airport class.
      //
      // Notes:
      //
      //-------------------------------------------------------------------------------
      Airport(unsigned int runwayCount, unsigned int hangerCount, unsigned int terminalCount);

      //+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
      //
      // Function: GetRunwayCount
      //
      // Description:
      // Returns the number of Runway objects associated with the object.
      //
      // Notes:
      //
      //-------------------------------------------------------------------------------
      unsigned int GetRunwayCount();

      //+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
      //
      // Function: GetHangerCount
      //
      // Description:
      // Returns the number of Hanger objects associated with the object.
      //
      // Notes:
      //
      //-------------------------------------------------------------------------------
      unsigned int GetHangerCount();

      //+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
      //
      // Function: GetTerminalCount
      //
      // Description:
      // Returns the number of Terminal objects associated with the object.
      //
      // Notes:
      //
      //-------------------------------------------------------------------------------
      unsigned int GetTerminalCount();

      //+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
      //
      // Function: FindEmptyHanger
      //
      // Description:
      // Returns a pointer to the first available empty hanger.
      //
      // Notes:
      //
      //-------------------------------------------------------------------------------
      Hanger* FindEmptyHanger();

   private:
      std::list<Runway*> runwayList_;
      std::list<Terminal*> TerminalList_;
      std::list<Hanger*> hangerList_;

      unsigned int totalHangerCount_;
      unsigned int totalRunwayCount_;
      unsigned int totalTerminalCount_;
};

#endif // AIRPORT_H