#include<iostream>

void table(int);  //function define


using namespace std;

int main()
{
   int num;
   
   cout<<"Enter a number for it's table"<<endl;
   cin>>num;
   
   table(num);  // function call
   
}

void table(int t){ // function definition
	
	for(int i=1;i<=10;i++){
		
		cout<<t<<"*"<<i<<"="<<t*i<<endl;
	}
}