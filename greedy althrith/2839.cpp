#include<iostream>
using namespace std;
int main() {
	int N, m, mod, ans;
	cin >> N;
	m = N / 5; //m:5kg 봉지의 사용 최대 개수 2
	while (m >= 0) {
		mod = 0;
		ans = 0;
		if (m > 0)
		{
			mod = N - 5 * m; //5kg 봉지 사용하고 남은 무게 6
			//cout << mod<<'\n';
			ans = m;  //1
		}
		else{
			mod = N; //11
		}
		ans += mod / 3; //3kg 봉지 사용 개수 더하기  3
		mod = mod % 3; //3kg 봉지 사용하고 남은 무게 0
		
		if (mod == 0)
		{
			cout << ans;
			break;
		}
        m--; // 0으로 나누어 떨어지지 않으므로 5kg 봉지 개수 줄이고 다시 반복
	}
	if (mod != 0)
		cout << -1;
}
