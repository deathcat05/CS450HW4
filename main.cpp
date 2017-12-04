// Authors : Jacques Beauvoir and Catherine Meyer
// Title  : Address Translation
// Assign.: Homework 4
#include<iostream>
#include <cmath> 
#include <fstream>
#include <cstring>
#include <string>
#include <vector> 
//#include "FlatPageTable.hpp"
using namespace std; 
int main(int argc, char *argv[]) 
{

//FPTable *aTable = new FPTable; 
// Variables needed for File input
string fileName;
ifstream inFile; 
fileName = argv[1]; 
inFile.open(fileName); 
string inputInfo;  
vector <string> tableInfo; 
int vAddSize, pAddSize, pageSize; 
if(!inFile.is_open())
{
	cout << "Error opening the file!" << endl;
}	
else
{ 
	while(inFile.good())
	{	
		getline(inFile, inputInfo);  
		tableInfo.push_back(inputInfo);   
	}		
}
  inFile.close(); 

for(int i = 0; i < tableInfo.size(); i++)
{
	cout << tableInfo[i] << endl; 
}

	return 0;
}
