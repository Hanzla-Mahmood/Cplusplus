#include<iostream>
using namespace std;
int main()
{

// Two dimensional array 2D array can be considered as table that has rows and columns 
// Each Element in 2D array reffered with help of two indexes 

// one index for rows
// second index of columns

  int arr[2][3]; // array consist of 2 rows and 3 columns 2*3= 6 values 
  cout<<"Enter values in 2D array:"<<endl;
  
  for(int i=0;i<=1;i++)
  	
  	for(int j=0;j<=2;j++){
	  
  	
  		cin>>arr[i][j];
	  }
  	cout<<"_____________________________"<<endl;
  	
    for(int i=0;i<=1;i++)
  	{
	  
  	for(int j=0;j<=2;j++){
  		
  		cout<<arr[i][j]<<"\t";
  }
   
   cout<<endl;
   
}

    cout<<"_______________________________";
}