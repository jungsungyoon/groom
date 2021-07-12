
#include <cmath>
#include <iostream>
#include<algorithm>
using namespace std;
int p[1001];
int main(){
	int in;
	int temp;
	int max=0;
	cin >> in; //입력수
	for(int i=0;i<in;i++){
		cin>>temp;
		p[i]=temp;
	}
	sort(p,p+in);
	int sum=0;
	for(int i=0;i<in;i++){
		for(int j=0;j<=i;j++){
			sum+=p[j];
		}
	}
	
	cout << sum;
	return 0;
}

// 이 문제는 입력받으면 정렬후  <- 이게 중요 계싼을 하면된다!
//계산은 2중포문이외에도  sum과 ans 로 나눠서 sum에 각 값을 넣은다음 ans에만 더하면 
//똑같아진다
// ex:for (int i = 0; i < in; i++) {
	//	sum = sum + p[i];
	//	ans = ans + sum;
//	}
//내일은 그리드 알고리즘 더 풀기