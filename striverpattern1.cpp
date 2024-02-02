//***
//***
//***
#include<iostream>
using namespace std;

int main(){
	
	int i,j,k;
	
	cout<<"Enter the no of rows want to print";
	cin>>i;
	cout<<"Enter the no of cols want to print";
	cin>>j;
	
	for(k=1;k<=i;k++){
		for(int l=1;l<=j;l++){
			
			cout<<" *";
		}
		cout<<"\n";
	}
}
