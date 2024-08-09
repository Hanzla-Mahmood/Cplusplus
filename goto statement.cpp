#include<iostream>
using namespace std;
int main(){
	
	// goto statement is used to move the control (jump) directly to particular location
	

		
     int n=1;
     G:
     	
   	cout<<"n ="<<n<<endl;
   	
   	n++;
   	
   	if(n<=5){
   		
   		goto G;
	   }
		
	
}