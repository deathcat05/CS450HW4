#include<iomanip> // for setw if needed
#include<iostream>
#include "FlatPageTable.hpp"

// my assumption here is that each array will be size 4
// so I'm going to set a const variable to 4 for the size
static const int defaultSize = 4;

FPTable::FPTable(): size(defaultSize)
{
  fpTable = new int[defaultSize];
}

FPTable::FPTable(int valid, int permission, int ppn)
{
  int _valid = valid;
  int _permission = permission;
  int _ppn = ppn;
  int valid_index = 0;
  int permission_index = 1;
  int ppn_index = 2;
  int use_bit_index = 3; 
}
