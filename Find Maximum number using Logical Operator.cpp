#include<iostream>
using namespace std;
int main(){
	
	// you can comment goto statement if you want to I used it to avoid avoid from running the program again and again 
	int a,b,c;
	
	label:
	
	cout<<endl;
	
	cout<<"Enter three numbers:"<<endl;
	cin>>a>>b>>c;
	
	if(a>b && a>c){
		
		cout<<"A is maximum number"<<endl;
		
	}
	
	else if(b>a && b>c){
		
			cout<<"B is maximum number"<<endl;
	}
	else{
		
			cout<<"C is maximum number"<<endl;
		
	}
	goto label;
	
}