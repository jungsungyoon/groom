#include <iostream>
using namespace std;

int check(int a){
	//cout <<a<<'\n';
	 if(a<=1){
	 return 1;
	 }
	return a*check(a-1);
}


int main(){
	int in;
	int ans;
	cin >> in;
	ans=check(in);
	
	cout<<ans;
	return 0;
}