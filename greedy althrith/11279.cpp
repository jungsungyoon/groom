#include <iostream>
#include<queue>
#include<time.h>
using namespace std;
priority_queue<int> he; //c++ stl 지원 fifo 기능 heap, 내림차순

int main(){
	int start;
	int end;
	double result;
	//start=clock();
	int in;
	cin >> in;
	while(in--){
		int temp;
		cin >> temp;
		if(temp==0){
			if(he.empty()) //비어있으면 0출력
				cout<<'0'<<'\n';
			else{//아니면 그중에서 최고출력
				cout << he.top()<<'\n';
				he.pop();
			}
		}
		else{
			he.push(temp);
		}
	}
	//end=clock();
	//result = (double)(end - start) / CLOCKS_PER_SEC;
   // cout << result << "초" ; //?왜 이게 더 빠른데 왜 시간초과야 ^^ㅣ
	return 0;
}
