#include<iostream>
using namespace std;

int main(){
	
	int i,j;
	char c=65;
	
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			cout<<c;
			
		}c++;
		cout<<endl;
	}	
	return 0;
}
