#include <iostream>
using namespace std;
int main(){
	int n;
	cout<< "Ingrese un valor entero: ";
	cin>>n ;
	double suma=1;	
	for ( int i=1; i<n ; i++)
	{
		if( n==0)
			break;
		
		suma += i*suma; 
	}
	cout<<"El factorial de "<<n<< " es "<< suma <<endl;

	return 0;
} 
