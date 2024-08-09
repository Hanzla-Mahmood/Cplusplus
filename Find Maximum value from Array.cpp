#include <iostream>
using namespace std;

int main() {
	
int arr[5], max;

cout<<"Enter Values into array"<<endl;

for(int i=0;i<=4;i++){
	
	cin>>arr[i];

}

max =arr[0];  // setting base condition if 0 index have maximun value 

for(int i=0;i<=4;i++){
	if(max<arr[i]){
		
		max =arr[i];
		
	}	
}
cout<<"Maximum value is:"<<max<<endl;


}