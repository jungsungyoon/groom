#include<iostream>
using namespace std;
int main() {
	int in,m,ans,temp; //입력,5kg최대갯수 ,답 ,남은무게
	
	cin >> in;
	m=in/5; //5kg 최대 갯수 2
	while(m>=0){
		
		temp=0; //3kg 는 0으로 초기화
		ans=0; //답도 초기화
		if(m>0){
			temp=in-5*m; //5kg 사용하고 남은 무게6
			ans=m; //답은 1
		}else{
			temp=in; //3kg
		}
		ans+=temp/3;//남은무게에서 3kg씩 더하기 3
		temp=temp%3; //사용하고 남은 무게 0
		//cout<< temp;
		
		if(temp==0){ //남은무게가 0이 아니라는것은 5kg갯수를 빼야된다는소리
			cout<<ans;
			break; //아 이거 빠졌네 11하면 m--로 temp값 2로가네 
		}
		m--;
	}
	cout<<temp;
	if(temp!=0){
		cout << -1;
	}
	return 0;	
}

//작동 알고리즘
//가장 적게 들기위해선 5kg을 많이 넣어야한다
//만약 넣었는데 남은 설탕이 3kg로 다 못넣으면 5kg 값을 빼야한다 남은양이 3kg까지 체크해서 0이 나와야한다!
