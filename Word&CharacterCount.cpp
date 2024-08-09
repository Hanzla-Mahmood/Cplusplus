#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	
	int countCh=0,countWord=0;
	cout<<"Enter a sentence:"<<endl;
	
	char ch;
	while(ch!='\r'){
		
		ch =getche();
		if(ch==' '){
			countWord ++;
		}
			else{
			
				countCh++;
			}
			
		}
		cout<<"\n  Words="<<countWord+1<<endl;
		cout<<"Character="<<countCh-1<<endl;
		

}