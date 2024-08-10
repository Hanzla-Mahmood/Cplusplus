#include<iostream>
using namespace std;
int main()
{
 
 int arr[5] ={10,20,30,40,50};
 
  
  int num,loc = -1;
  
   cout<<"Enter a number for search "<<endl;
   
  cin>>num;
  
  for(int i=0;i<=4;i++){
  	
  if(arr[i]== num){
  	
  	loc =i;
  	
  }
  
  }
  if(loc == -1){
  	cout<<"Value nor found";
  	
  }
  else{
  	 cout<<"Value found at array index: "<<loc;
  }

 



}