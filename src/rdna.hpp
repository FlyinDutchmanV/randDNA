#include <iostream>
#include <string>
#include <random>

using namespace std;

string randDNA(seed,bases,int n)
{
	mt19937 eng1(seed());		//Random generator to accept seed from variable seed 
	string seq;					//DNA sequence variable
	
	int min = 0, max = bases.size();	//set min to 0, and max to the number of bases entered by the user
	uniform_int_distribution <int> un (min, max-1)
		
	for (int i=0; i< n ; i++)
		DNA += bases[un(eng1)];
	
	return seq;				//DNA sequence returned as string

}
