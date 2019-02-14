#include <iostream>
#include <string>
#include <random>

using namespace std;

string randDNA(int seed,string bases,int n)
{
	mt19937 eng1(seed);		//Random generator to accept seed from variable seed 
	string seq;					//DNA sequence variable
	
	if (bases.size()==0)	//Perform check for blank variable
	{
		seq = "";			//Assign blank variable for randomisation
		return seq;
	}
	
	
	
	int min = 0, max = bases.size();	//set min to 0, and max to the number of bases entered by the user
	uniform_int_distribution <int> un (min, max-1);
		
	for (int i = 0; i< n ; i++)
		seq += bases[un(eng1)];
	
	return seq;				//DNA sequence returned as string

}
