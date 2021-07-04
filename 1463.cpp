#include <cmath>
#include <iostream>
using namespace std;
int s[1000001];
int check(int a){
	//더보기
	for (int i = 2; i <= a; i++) //1을 먼저 계속뺴는이유는 어차피 나누면서 +1 을 하면서 작은수나 큰수로 변하기때문이다
	{
		s[i] = s[i - 1] + 1; //1뺴기
		if (i % 2 == 0) //2나누어떨어짐
			s[i] = min(s[i / 2] + 1, s[i]);
		cout<< s[i]<<'\n';
		if (i % 3 == 0) //3나누어떨어짐
			s[i] = min(s[i / 3] + 1, s[i]); //s[3]=1
		cout<< s[i]<<'\n';
	}

	return s[a];


}


int main(){
	s[1]=0;
	int in;
	int ans;
	cin >> in;
	ans=check(in);
	cout <<ans;
	return 0;
}
