#include<iostream>

void sum(int  ,int  );  //function delcare

using namespace std;
int main()
{
   
   int x =10,y=10; 
    sum(x,y);                 // x and y is actual parameter
   
}

void sum(int a, int b){ // int a and b is formal parameters
	
	cout<<"sum is : "<<a+b;
}