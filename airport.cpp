//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//
// Implementation File: infrastructure.cpp
//
//-------------------------------------------------------------------------------

#include "airport.h"

constexpr unsigned int DEFAULT_RUNWAY_LENGTH = 1000;

Airport::Airport(unsigned int runwayCount, unsigned int hangerCount, unsigned int terminalCount)
{
   totalHangerCount_ = 0;
   totalRunwayCount_ = 0;
   totalTerminalCount_ = 0;

   // initialise runways
   for (unsigned int i = 0; i < runwayCount; i++)
   {
      // create new runway and add to airport's runway list
      Runway *newRunway = new Runway(DEFAULT_RUNWAY_LENGTH);
      totalRunwayCount_++;
      runwayList_.push_back(newRunway);
   }

   // initialise hangers
   for (unsigned int i = 0; i < hangerCount; i++)
   {
      // create new hanger and add to airport's runway list
      Hanger *newHanger = new Hanger(i);
      totalHangerCount_++;
      hangerList_.push_back(newHanger);
   }

   totalTerminalCount_ = terminalCount;

   std::cout << "Number of Runways is " << totalRunwayCount_ << std::endl;
   std::cout << "Number of Hangers is " << totalHangerCount_ << std::endl;
   std::cout << "Number of Terminals is " << totalTerminalCount_ << std::endl;
}

Airport::~Airport()
{
      // clean up Runway objects
   std::list<Runway*>::iterator runwayIterator;
   for (runwayIterator = runwayList_.begin(); runwayIterator != runwayList_.end(); ++runwayIterator)
   {
      Runway* runwayPointer = *runwayIterator;
      delete runwayPointer;
   }  

   // clean up Hanger objects
   std::list<Hanger*>::iterator hangerIterator;
   for (hangerIterator = hangerList_.begin(); hangerIterator != hangerList_.end(); ++hangerIterator)
   {
      Hanger* hangerPointer = *hangerIterator;
      delete hangerPointer;
   }   

   // clean up Terminal objects
   std::list<Terminal*>::iterator terminalIterator;
   for (terminalIterator = terminalList_.begin(); terminalIterator != terminalList_.end(); ++terminalIterator)
   {
      Terminal* terminalPointer = *terminalIterator;
      delete terminalPointer;
   }   
}

unsigned int Airport::GetRunwayCount()
{
   return totalRunwayCount_;
}

unsigned int Airport::GetHangerCount()
{
   return totalHangerCount_;
}

Hanger* Airport::FindEmptyHanger()
{
   bool foundEmptyHanger = false;

   Hanger* searchItem;

   std::list<Hanger*>::iterator hangerSearch;
   for (hangerSearch = hangerList_.begin(); hangerSearch != hangerList_.end(); ++hangerSearch)
   {
      searchItem = *hangerSearch;
      std::cout << searchItem->GetHangerId() << std::endl;
      if(!(searchItem->CheckHanger()))
      {
         foundEmptyHanger = true;
         std::cout << "Found empty hanger at hanger " << searchItem->GetHangerId() << std::endl;
         break;
      }
   }

   if (!foundEmptyHanger)
   {
      
      searchItem = NULL;
   }

   return searchItem;
};

unsigned int Airport::GetTerminalCount()
{
   return totalTerminalCount_;
}