#include<iostream>
using namespace std;
int main(){
	
	
	int a,b,c;

	
	cout<<"Enter three numbers:"<<endl;
	cin>>a>>b>>c;
	
	if(a<b && a<c){
		
		cout<<"A is Smallest number"<<endl;
		
	}
	
	else if(b<a && b<c){
		
			cout<<"B is Smallest number"<<endl;
	}
	else{
		
			cout<<"C is Smallest number"<<endl;
		
	}

}