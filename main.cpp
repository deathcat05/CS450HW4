// Authors : Jacques Beauvoir and Catherine Meyer
// Title  : Address Translation
// Assign.: Homework 4
#include<iostream>
#include <cmath> 
#include <fstream>
#include <cstring>
#include <string>
//#include "FlatPageTable.hpp"
using namespace std; 
int main(int argc, char *argv[]) 
{

//FPTable *aTable = new FPTable; 

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
string vAddSize; 
string  pAddSize;
string pageSize; 
char delimiter = ' ';
	while(inFile.is_open())
	{	
		getline(inFile, vAddSize, delimiter);
		cout << stoi(vAddSize) << endl;
		if(EOF)
		break;  
	}		
}
  inFile.close(); 
	return 0;

}
