#include <iostream>
#include <cstring>
#include<algorithm> 
using namespace std;
//삼각수 공식알고리즘을 풀어버림..
int main(int argc, char *argv[]){
	int num;//최대 갯수
	int temp; //테스트값 
	int ncount; //n값구하기
	cin >> num;
	int check[num]; //테스트 저장값
		int TF[num]={0,}; //출력값
	for(int i=0;i<num;i++){ //테스트케이스 입력
		cin >> temp;
		check[i]=temp;
		//cout<<check[i]; //재대로들어감
	}
	
	for(int j=0;j<num;j++){ //출력에대한 결과
		int temp2=0; 
		int fir=1; //t1
		int count=1; //t1 이후에 값 더할거
		temp2=check[j];
		//cout<<temp2;
		while(fir<temp2){  //3<10 T
			//cout<<fir<<'\n';  //1 3 6
			if(temp2>fir){ //10>1 t 10>3 10>6 t
				count++; //2 3 4
				fir=fir+count; //fir 3  6 10 
				cout<<count<<'\n';
				//if(temp2==fir){//10==3 F 10==6 F 10==10
				//	TF[j]=1;
				//}
				if(temp2<=fir){
					ncount=count+1;
				}
				
			}
		
		}
			temp2=count*ncount;
				temp2=temp2/2;
		cout<<temp2;
	}
	
	
	return 0;	
}
