#include<iostream>
using namespace std;
int main(){

  //   Input five value and display "Sum and Avg" in Array
  
  int arr[5];
  int sum = 0;
  float avg;
  
  cout<<"Enter values in array"<<endl;
  
  for(int i=0;i<=4;i++){

    cin>>arr[i];
    sum = sum+arr[i];
  }
  
  avg= sum/5;
  cout<<"Sum is "<<sum<<endl;
    cout<<"Avg is "<<avg<<endl;
}
  
  
