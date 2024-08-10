#include<iostream>
using namespace std;
int main(){
  // Display Actual and Reverse Order Array values
  
  int arr[5];
  
  cout<<"Enter values in array"<<endl;
  
  for(int i=0;i<=4;i++){
  	
  	cin>>arr[i];
  	
  }
  
    cout<<"Actual order"<<endl;
    
    for(int i=0;i<=4;i++){
  	
  	cout<<arr[i]<<"  ";
  	
  }
	cout<<endl;
	   cout<<"Reverse order"<<endl;
	   
	   for(int i=4;i>=0;i--){
  	
  	cout<<arr[i]<<"  ";
  	
  }
	   
}