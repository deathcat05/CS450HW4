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

FPTable::FPTable(int valid, int pAddress, int pageBytes)
{
  int _vAddress = vAddress;
  int _pAddress = pAddress;
  int _pageBytes = pageBytes;
  int valid_index = 0;
  int permission_index = 1;
  int pageBytes_index = 2;
  int use_bit_index = 3; 
}

queue FPTable::populate()
{
  // Push a nullptr in to keep track of the start
  fptQ.push(nullptr);
  // iteration hard-coded at 4 could have more entries
  for(int i = 0; i < 4; i++) {
    // create new array
    FPTable *ftp = new FPTable();
    // I'm just pushing to the back so it stays in order
    ftpQ.push_back(ftp);
  }

}
