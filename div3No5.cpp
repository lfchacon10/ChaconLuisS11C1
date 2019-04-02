#include <iostream>

int main(){
	int n=100;	
	std::cout<<"Los numero divisibles por 3 son: \n" <<std::endl;
	for ( int i=0; i<n ; i++)
	{ 
		if ( i%3==0 && i%5 !=0)
			std::cout<< i<< std::endl;		
	}
	return 0;
} 
