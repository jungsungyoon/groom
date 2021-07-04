#include <iostream>
using namespace std;
 
int num[45];
 
bool check(int K) {
    for (int a = 1; a < 44; a++) {
        for (int b = 1; b < 44; b++) {
            for (int c = 1; c < 44; c++) {
                if (num[a] + num[b] + num[c] == K) {
					//cout<<num[a]<<'\n';
					//cout<<num[b]<<'\n';
					//cout<<num[c]<<'\n';
					
                    return true;
                }
            }
        }
    }
    return false;
}
int main() {
    int T, K;
     
    cin >> T;
	int ch[T];
     for (int i = 0; i < 45; i++) { //삼각수 Tn 값 구하기
        num[i] = (i*i + i) / 2;
		 //cout<<num[i]<<'\n';
    }
     
    for (int i = 0; i < T; i++) {
        cin >> K;
        if (check(K))
            ch[i]=1;
        else
            ch[i]=0;
    }
	for (int i = 0; i < T; i++) {
		cout<<ch[i]<<'\n';
	}
     
    return 0;
}
