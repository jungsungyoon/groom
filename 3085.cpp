#include <iostream>
#include <cstring>
#include<algorithm> 
using namespace std;
int num;
char sq[51][51];
int Check() {
	char c; //문자 저장
	int answer=1;// 어차피 최소 먹을거는 1개
	
	for (int i = 0; i < num; i++) { // 행 계산
		int count = 1; // 1개부터 시작
		c = sq[i][0]; //0.0 위치부터시작 
		for (int j = 1; j < num; j++) { //행 끝까지
			if ((sq[i][j] == c)) {//값이같으면
				count += 1; 
			}
			else count = 1;//다르면 1로초기화(다르면 연속해서 먹을 수 없음)
			//c = sq[i][j]; //현재위치저장
			if (count > answer) answer = count;
		}
	}

	for (int j = 0; j < num ;j++) { // 열 계산 위와동일
		int count = 1;
		c = sq[0][j]; //첫열부터 시작
		for (int i = 1; i < num; i++) { //열끝까지
			if ((sq[i][j] == c)) {
				count += 1;
			}
			else count = 1;
			//c = sq[i][j];
			if (count > answer) answer = count;
		}
	}
	return answer; 
}



int main(int argc, char *argv[]){
	
	char temp;

	int ans=0;
	cin>>num;
    sq[num][num];
	for(int i=0;i<num;i++){
		for(int j=0;j<num;j++){
			cin>>temp;
			//cout<<'\n'<<temp<<'\n';
			sq[i][j]=temp;
			//cout<<'i'<<i<<'j'<<j<<sq[i][j]<<'\n';
			
		}
	}
	
	
	
	for (int y = 0; y < num; y++) {
		for (int x = 0; x < num; x++) {
			if (x + 1 < num) { //행비교
				//cout<<'\n'<<x;
				swap(sq[y][x], sq[y][x + 1]);  //스왑 해서 비교
				ans=max(ans,Check());
				
				//cout<<'\n'<<ans;
				swap(sq[y][x], sq[y][x + 1]); 
			}

			if (y + 1 < num) { //열비교
				//cout<<'\n'<<y;
				swap(sq[y][x], sq[y + 1][x]); 
				ans=max(ans,Check());
						//cout<<'\n'<<ans;
				swap(sq[y][x], sq[y + 1][x]); //
			}
		}
		cout<<'\n';
	}
	cout<<'\n'<<ans;
	
	return 0;
}
