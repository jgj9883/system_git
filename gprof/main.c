#include <stdio.h>
#include <stdlib.h>

int add(int a, int b){
	return a+b;
}

int subtract(int a, int b){
	return a-b;
}

int multiply(int a, int b){
	return a*b;
}

int divide(int a, int b){
	return a/b;
}

void main(){
	printf(" add(1,4) = %d\n", add(1,4));
	printf(" subtract(5,3) = %d\n", subtract(5,3));
	printf(" multiply(4,4) = %d\n", multiply(4,4));
	printf(" divide(6,3) = %d\n", divide(6,3));
}


