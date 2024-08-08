#include<iostream>


using namespace std;
int main(){
	// convert Fahrenheit  to Celsius and vice versa
	
	// Farenheit to Celsius = 5.0/9.0 * (temp-32)
    //Celsius to Farenheit  = (9.0/5.0 *temp)+32
    
    float temp,result;
	int choice;
	
	cout<<"Enter '1' to convert Farenheit to Celsius"<<endl;
	cout<<"Enter '2' to convert Celsius to Farenheit "<<endl;
	
	cin>>choice;
	
	switch(choice){
		case 1:{
			
			cout<<"Enter temp in Farenheit:"<<endl;
			cin>>temp;
			
			result =  5.0/9.0 * (temp-32);
			cout<<"Farenheit to Celsius temp is:"<<result<<endl;
			
			break;
		}
		
		case 2:{
			cout<<"Enter temp in Celsius:"<<endl;
			cin>>temp;
			result = (9.0/5.0 *temp)+32;
			cout<<"Celsius to Farenheit is:"<<result<<endl;
			
			
			break;
		}
				
		default:{
			cout<<"Invalid Optiion"<<endl;
			break;
		}
		
	}
	
}