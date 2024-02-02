//0
//1 0
//0 1 0
//1 0 1 0 
//0 1 0 1 0
//1 0 1 0 1 0
#include<iostream>
using namespace std;

int main(){
	
	int i, j,m;
	
	for(i=0; i<=5;i++){
		m = i%2; 
		if(m==0){
			for(j=0;j<=i;j++){
			cout<<m;
			m = 1-m;	
			}
			cout<< endl;	
		}else{
			for(j=0;j<=i;j++){
			cout<<m;
			m = 1-m;	
			}
			cout<< endl;
		}
		
	}
}
