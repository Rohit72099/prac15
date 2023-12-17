#include<iostream>
using namespace std;
int main(){

int s,t;

  cin>>s>>t;
  

   while(s==0){
	int a=s%10;
	cout<<a<<" ";
	while(t==0){
		int b=t%10;
		cout<<b<<" ";
		if(a==b){
			cout<<"yes";
		}
		else{
			cout<<"no";
		}
		t=t/10;
	}
	s=s/10;
}

}
