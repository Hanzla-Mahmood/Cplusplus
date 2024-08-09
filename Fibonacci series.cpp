#include <iostream>
using namespace std;

int main() {
	
	// Fibonacci series =>  Fibonacci sequence sum of two successive terms gives the third term
	
	int a=0,b=1,next,num,count=2;
	
	cout<<"Limit"<<endl;
	cin>>num;
	
	cout<<a<<"\t"<<b;  //  \t is tab
	
	while(count<num){
		
		next=a+b;
		cout<<"\t"<<next;
		count++;
		
		a=b;
		b = next;
		
	}
	
	
	
	
	
	
	
	
}