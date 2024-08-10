#include<iostream>

void  max (int  ,int  );  

using namespace std;
int main()
{
	int a,b;
	
	cout<<"Enter two numbers"<<endl;
	cin>>a>>b;
	max(a,b);  //function call
	
   
}
   
void max(int x,int y){  // pass by value a and b  value passing to  x and y which are formal parameter
	
	if(x>y){
		cout<<"Maximum number is "<<x;
	}
	else{
			cout<<"Maximum number is "<<y;
	}
}