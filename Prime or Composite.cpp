#include <iostream>
using namespace std;

int main() {
	
	// A number is divisible by itself and 1 is called prime no otherwise it is composite no!
	
	int num, p=1;
	
	cout<<"Enter a number"<<endl;
	cin>>num;
	
	for(int i=2;i<=num/2;i++){
		
		if(num%i==0){
			p =0;
			break;
		}
	}
		if(p==1){
			cout<<"Prime number"<<endl;
			
		}
		
		else{
				cout<<"Composite number"<<endl;
		}
	}
	
