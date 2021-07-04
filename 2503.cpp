#include <iostream>
using namespace std;
 
int num[1001];
 
int chk(int origin, int number, int strike, int ball) {
    int n1 = number / 100, n2 = (number % 100) / 10, n3 = (number % 100) % 10;
	//356 n1=3,n2=5,n3=6
	
    int o1 = origin / 100, o2 = (origin % 100) / 10, o3 = (origin % 100) % 10;
    //o1=1,o2=2,o3=3
	
	int stCnt = 0;
    int bCnt = 0;
 
    if (o1 == 0 || o2 == 0 || o3 == 0 || o1==o2 || o2==o3 || o3==o1) //중복되면 걍 아닌거임 (조건자체가 서로 다른수)
        return 0;
 
    if (n1 == o1) { stCnt++; }
    if (n2 == o2) { stCnt++; }
    if (n3 == o3) { stCnt++; }
 
    if (o1 == n2 || o1 == n3) { bCnt++; }
    if (o2 == n1 || o2 == n3) { bCnt++; }
    if (o3 == n1 || o3 == n2) { bCnt++; }
    
    if (stCnt == strike && ball == bCnt)
        return 1;
    return 0;
}
 
int main() {
    int n, ret = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int q, b, s;
        cin >> q >> s >> b;  //질문 스트라이크 볼
 
        for (int i = 123; i <= 999; i++) { //검사
            if (num[i] == 0) {
                num[i] = !chk(i, q, s, b); //123 부터 체크 에대한 NOT 맞으면 1 return 그러면 ! 적용후 0이들어감
            }
        }
    }
 
    for (int i = 123; i <= 999; i++) { //값 출력
        if (num[i] == 0) {
            ret++;
        }
    }
    cout << ret << '\n';
    return 0;
}

