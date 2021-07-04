#include <iostream>
using namespace std;
 int chess[51][51];  //null 값 
int check(int x,int y)
{
	int whitecnt = 0;
	int blackcnt = 0;

	for (int i = x; i < x + 8; i++) {
		for (int j = y; j < y + 8; j++) {
			if ((i + j) % 2 == chess[i][j]) whitecnt++; // 스타트 흰
			if ((i + j + 1) % 2 == chess[i][j]) blackcnt++; // 스타트 블
		}
	}

	return min(whitecnt, blackcnt); // 둘 중 최소값 반환
}

int main()
{
	int wid,hei;
	int mini = 2500; // 50*50
	char c;

	cin >> wid >> hei;

	for (int i = 0; i < wid; i++) { // 검정0 하얀 1
		for (int j = 0; j < hei; j++) {		
			cin >> c;
			if (c == 'B') chess[i][j] = 0;
			else chess[i][j] = 1;
		}
	}

	for (int i = 0; i <= wid-8; i++) { // 8칸으로 정사각형체스판 만들기
		for (int j = 0; j <= hei-8; j++) {
			if (mini > check(i, j)) mini = check(i, j); // 가장 작은 값인지 판별
		}
	}

	cout << mini;
}
