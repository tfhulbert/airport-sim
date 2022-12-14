//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//
// Header File: runway.h
//
// Description:
// Contains prototypes and definitions for runway class
//
//------------------------------------------------------------------------------

#ifndef RUNWAY_H
#define RUNWAY_H

#include <iostream>
#include <list>

class Runway
{
   public:
      Runway(int runwayLength);
      unsigned int GetRunwayLength();

   private:
      bool runwayFree_;
      unsigned int runwayLength_;
      // add pointer to aircraft
};

#endif // RUNWAY_H