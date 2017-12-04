// Authors : Jacques Beauvoir and Catherine Meyer
// Title  : Address Translation
// Assign.: Homework 4
#include<iostream>
#include <cmath> 
#include <fstream>
#include <cstring>
//#include "FlatPageTable.hpp"
using namespace std; 
int main(int argc, char *argv[]) 
{

string fileName;
ifstream inFile; 
fileName = argv[1]; 
inFile.open(fileName); 
if(!inFile.is_open())
{
	cout << "Error opening the file!" << endl;
}	
else
{
	cout << "The file was opened successfully" << endl;		
}
  return 0;

}
