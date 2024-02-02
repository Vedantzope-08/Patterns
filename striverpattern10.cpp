#include<iostream>
using namespace std;

int main(){
	
	int i,j,k;
	
	for(i=0;i<=9;i++){
		
		if(i<=5){
			for(j=0;j<=i;j++){
				cout<<"*";
			}
			cout<<"\n";
		}else
		{
		
			for(k=0;k<=6;k++){
			
			for(j=6;j>=k;j--){
				cout<<"*";
				
			}
			cout<<"\n";
		}
		break;
		}
		
	}
	
	return 0;
}
