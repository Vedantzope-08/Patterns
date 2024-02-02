//1      1
//12    21
//123  321
//12344321
#include<iostream>
using namespace std;

int main(){
	
	int i,j,k,m=4;
	for(i=1;i<=4;i++){
		
		for(j=1;j<=i;j++){
			cout<<j;
		}
		
		for(k=1;k<=(2*m-2);k++){
			cout<<" ";
			
		}m--;
		
		for(j=i;j>=1;j--){
			cout<<j;
		}
		cout<<endl;
	}
	return 0;
}
