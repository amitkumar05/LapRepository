#include "functions.h"

int factorial(int n){
    if (n<0)
    	cout<<"Undefined\n";
    if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
}
