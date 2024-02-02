//ABCDE
//ABCD
//ABC
//AB
//A
#include<iostream>
using namespace std;

int main(){
	
	int i,j;
	char c=65;
	
	for(i=1;i<=5;i++){
		c=65;
		for(j=5;j>=i;j--){
			cout<<c;
			c++;
		}
		cout<<endl;
	}
	return 0;
}
