//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//
// Header File: terminal.h
//
// Description:
// Contains prototypes and definitions for terminal class
//
//------------------------------------------------------------------------------

#ifndef TERMINAL_H
#define TERMINAL_H

#include "hanger.h"

class Terminal : public Hanger
{
   public:
      //+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
      //
      // Function: Terminal
      //
      // Description:
      // Constructor for the Terminal class.
      //
      // Notes:
      // {notes}
      //
      //-------------------------------------------------------------------------------
      Terminal(int terminalId);
};

#endif // TERMINAL_H