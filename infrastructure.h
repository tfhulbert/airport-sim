//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//
// Header File: infrastructure.h
//
// Description:
// Contains classes for physical airport infrastructure
//
//------------------------------------------------------------------------------

#ifndef INFRASTRUCTURE_H
#define INFRASTRUCTURE_H

#include <iostream>
#include "infrastructure.h"
#include <list>

namespace Infrastructure
{

   class Runway
   {
      public:
         Runway(int runwayLength);

      private:
         bool runwayFree_ = true;
         int runwayLenght_ = 0;
         // add pointer to aircraft
   };

   class Hanger
   {
      public:
         Hanger(int runwayLength);
   };

   class Terminal
   {
      public:
         Terminal();
   };

   class Airport
   {
      public:
         Airport(int runwayCount, int hangerCount, int terminalCount);
         int GetRunwayCount();
         int GetHangerCount();
         int GetTerminalCount();

      private:
         std::list<Runway *> runwayList_;

         int freeHangerCount_ = 0;
         int freeRunwayCount_ = 0;
         int freeTerminalCount_ = 0;

         int totalHangerCount_ = 0;
         int totalRunwayCount_ = 0;
         int totalTerminalCount_ = 0;
   };
}

#endif // INFRASTRUCTURE_H