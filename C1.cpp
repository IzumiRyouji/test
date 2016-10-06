#include<iostream>
using namespace std;



int main(){
	
	int n,m,sum=0;
	cout<<"Enter a number in binary:";
	cin>>n;
    for(int i=1,j=1;n>0;i++,j*=2){
	m=n%10;
	if(m>1) cout<<"[Input error]";
	else
	{
	n/=10;
	m*=j;
	sum+=m;
	}
	}
	
	cout<<"Decimal:"<<sum; 
	} 
