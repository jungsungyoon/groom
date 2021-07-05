#include <cmath>
#include <iostream>
using namespace std;
int f0=0;
int f1=1;
int answer=0;
int check(int a){
	
	if(a<2){
		return a;
	}
	answer= check(a-1)+check(a-2);
	return answer%1000000007;
}
int main(){
	int in;
	cin >> in;
	int ans;
	ans=check(in);
	//ans=ans%1000000007;
	cout << ans;
	
	
	return 0;
}

//비효율적 코드
//https://st-lab.tistory.com/252 이거 로 공부
//10830 을 먼저해야 이  선형대수를 통한 방법으로 해냀 수 있다