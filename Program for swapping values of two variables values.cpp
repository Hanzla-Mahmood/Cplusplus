#include<iostream>
using namespace std;
int main(){
	
	// Program for swapping values of two variables values
	
	int a = 20;
	int b =10;
	
	cout<<"before a = "<<a<<"   b = "<<b<<endl;
	
	int temp = a;  // temp =20 and now a is free
	
	a = b;  // now a =10
	
	b = temp; // b = 20 because temp is holding 20
	
	cout<<"after a = "<<a<<" b = "<<b;
	

	
}