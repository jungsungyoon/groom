#include<iostream>
using namespace std;
int money=1000;
int f=1;
int f1=500;//첫시작 500엔
int n[6]={500,100,50,10,5,1};
void check(int temp){
	int sum=0;//동전 합
	int ans; //동전 카운팅
	while(temp>0){
		if(f==1){
			sum+=temp/f1;
			//cout << sum <<'\n';
			ans=temp/f1; //
			temp=temp-ans*f1;
			f1=f1/5;
			f=0;
		}else if(f==0){
			
			sum+=temp/f1;
			ans=temp/f1;
			temp=temp-ans*f1;
			f1=f1/2;
			f=1;
		}
	}
	cout <<sum;
	
	
}


int main() {
	int in;
	int temp;//받아야할돈
	cin>>in; //지불할돈
	temp=money-in;
	//cout << temp;
	check(temp);
	return 0;
}

//거스름돈 알고리즘은 그리디 이면서 정보처리때 해보았다 이번꺼는 한번에 해보자
//1일떄 5로나누고 0일떄2로나누기

//정답안보고했다 
//좋다 내일 이거보다 효율적이고 이해하는 코드찾기!