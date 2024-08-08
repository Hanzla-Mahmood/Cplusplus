#include<iostream>
using namespace std;
int main(){
	
	// Display Table with while loop 
	
	int num,c=1;
	
	cout<<"Enter an number for the table:"<<endl;
	
	cin>>num;
	
	while(c<=10){
		cout<<num<<"*"<<c<<"="<<num*c<<endl;
		c++;
	}
}