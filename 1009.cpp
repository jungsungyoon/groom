#include <cmath>
#include <iostream>
using namespace std;
	int n[101]; //출력저장

int check(int a,int b){
	int res=1;
	for(int i=0;i<b;i++){
		res=(res*a);
		res=res%10;
		
	}
	/*long c;//컴퓨터
	
	c=(long)pow(a,b);
	//cout<<c<<'\n';
	c=c%10;
	if(c==0){
		c=10;
	}*/
	//return c;
	return res;
	
}


int main(){
	int in; //테스트 횟수
	int a,b;//a의 b승 데이터 
int ans;
	cin >> in;
	n[in];
	for(int i=0;i<in;i++){
		cin>> a >> b;
		ans=check(a,b);
		n[i]=ans;
	}
	for(int i=0;i<in;i++){
		cout<<n[i]<<'\n';
	}
	
	return 0;
	
	
}
