// Title: Flat Page Table 
// File : FlatPageTable.hpp                                                        
#ifndef _FPT_HPP
#define _FTP_HPP

#include<iostream>
#include<queue>

class FPTable {

public:
  FPTable();
  FPTable(int valid, int permission, int ppn);

  // Populate: so my idea for this was we create a loop that                      
  // iterates for the number of arrays we need, creating a new  
  // instance of the fpTable array and pushing it into the queue               

  queue populate();
  ~FPTable();

private:
  int *fpTable; // flat page table array                          
  int _valid, _permission, _ppn; // set by the constructor        
  int valid_index, permission_index, ppn_index, used_bit_index; // holds indices not sure about ppn
  std::queue <fpTable*> fptQ; // a queue that holds the FPT arrays
}

#endif
