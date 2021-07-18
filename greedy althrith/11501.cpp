#include<iostream>
#include <numeric>
using namespace std;
int arr[1000001];
int stock[1000000];
int temp;
int main(){
	int test=0;
	cin >> test;//테스트 케이스
	int answer[test];//답
	temp=test;
	while(test--){
		//cout << '\n'<< test<<'\n';
		int n; //거래날
		cin >> n; 
		for(int i=0;i<n;i++){
			cin>> arr[i];
		}
		long long ans=0;
		int max=arr[n-1];//뒤에서 부터 검색 하기위한것
		for(int j=n-2;j>=0;j--){//뒤에서 2번째부터 검색시작
			if(max<arr[j]){//max가 작으면 바꾸고 아니면 max값부터 현재위치까지 계산해서 더하기
				max=arr[j];
			}else{
				ans+=max-arr[j];
				//cout << ans << '\n';
			}
		}
		cout<<ans<<'\n';
	}
	//왜 역순부터는 안되는걸가 
	/*for(int i=temp-1;i>=0;i--){
		cout << answer[i]<<'\n';
	}*/
	//https://www.acmicpc.net/source/28829631
	// accumlate :시작값, 끝값 초기값 순으로 배열의합을 구할떄 사용
	//반복문이 미친듯이 돌아가서 오래걸린다
	/*
	return 0;
}
/*
int main(){
 int tc, days;
    cin >> tc;
    for (int t = 0; t < tc; t++) {
        int tmp = 0;
        cin >> days;
        for (int d = 0; d < days; d++) cin >> stock[d];
        for (int d = days; 0 < d; d--) {
            tmp = max(tmp, stock[d - 1]);
            stock[d - 1] = max(tmp - stock[d - 1], 0);
        }
        long long ans = accumulate(stock, stock + days, 0ll);
        cout << ans << '\n';
    }
}
*/
