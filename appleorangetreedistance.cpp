#include<iostream>
using namespace std;

int main(){
	int s,t,a,b,count1=0,count2=0;
	cin>>s>>t>>a>>b;
	int app[a];
	int org[b];
	
	for(int i=1;i<a;i++){
		cin>>app[i];
		app[i]=a-app[i];
		if(app[i]>=s && app[i]<=t){
			count1+=1;
		}
	}
	for(int i=1;i<b;i++){
		cin>>org[i];
		org[i]=b-org[i];
		
		if(org[i]>=s && org[i]<=t){
			count2+=1;
		}
		
		
	}
	
	cout<<count1<<endl;
	cout<<count2<<endl;
	
	return 0;
}
