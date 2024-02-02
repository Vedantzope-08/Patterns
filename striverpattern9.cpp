//     *
//    ***
//   *****
//  *******
// *********
//***********
// *********
//  *******
//   *****
//    ***
//     *
#include<iostream>
using namespace std;

int main(){
	
	int i,j,k;
	
	for(k=0;k<6;k++){
		
		for(i=0;i<6-k-1+1;i++){
			cout<<" ";
		}
		for(j=1;j<=2*k-1;j++){
			cout<<"*";
		}
		for(i=0;i<6-k-1+1;i++){
			cout<<" ";
		}
		cout<<"\n";
	}
	
	for(k=0;k<6;k++){
		
		for(i=0;i<k;i++){
			cout<<" ";
		}
		
		for(j=0;j<2*6-(2*k+1);j++)
		{
			cout<<"*";
		}
		
		for(i=0;i<k;i++){
			cout<<" ";
		}
		cout<<"\n";
	}
}
