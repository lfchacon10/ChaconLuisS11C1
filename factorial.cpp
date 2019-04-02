#include <iostream>

int main(){
	int n=7;
	int suma=1;	
	for ( int i=1; i<n ; i++)
	{
		suma += i*suma; 
	}
	std::cout<<"El factorial de "<<n<< " es "<< suma <<std::endl;
		
	int nn=77;
	double suma1=1;	// El número es muy largo entonces debe guardarse en otra clase de variable
	for ( int i=1; i<nn ; i++)
	{
		suma1 += i*suma1; 
	}
	std::cout<<"El factorial de "<<nn<< " es "<< suma1 <<std::endl;

	return 0;
} 
