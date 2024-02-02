//1
//12
//123
//1234
//12345

#include<iostream>
using namespace std;

int main(){
	
	int i,j;
	
	for(i=0;i<=6;i++){
		for (j=1;j<=i;j++){
			cout<<j;
		}
		cout<<"\n";
	}
}
