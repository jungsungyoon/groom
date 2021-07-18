/*
#include <cmath>
#include <iostream>
using namespace std;
int out[5][5]; //입력 크기
int tem[5][5]; //임시
int pr[5][5];//정답 
int check(int in,int z){
	int te;
	for(int i=0;i<in;i++){
		for(int j=0;j<in;j++){
			te=0;
			for(int z=0;z<in;z++)
		{
			te=out[i][z]*out[z][j];
		te=te%1000;
			
		}
			tem[i][j]=te;
	}
	}
	
	
	return 0;
}


int main(){
	int in;//행크기 정사각형
	int z;//승 수
	int temp=0;
	cin >> in >> z;
	for(int i=0;i<in;i++){  //in 에 대한 크기만큼 수 넣기
		for(int j=0;j<in;j++){
			cin >> temp;
			out[i][j]=temp;
			
			cout<<out[i][j]<<'\t';
		}
	}
	
	
	int te;
	int temp2;
	while(z>0){
	for(int i=0;i<in;i++){
		for(int j=0;j<in;j++){
			te=0;
			for(int z=0;z<in;z++)
		{
			te+=out[i][z]*out[z][j];
		}
				
			//te=te%1000;
			tem[i][j]=te;
				
			}
	}
		z=z-1;
		}
	for(int i=0;i<in;i++){
		for(int j=0;j<in;j++){
			cout<<	tem[i][j]<<'\n';
		}
	
	}
	
	//check(in,z);

	return 0;
	//https://modernalchemist.tistory.com/10 <-곱셈 행렬 설명
	//m*n   n*a  행렬의 크기 main
}

*/



#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

long long N, B;
long long A[5][5]; //고정값 
long long temp[5][5];
long long ans[5][5];



// 행렬 곱셈
void Matrix_multi(long long X[5][5], long long Y[5][5])
{
	//int k1=0;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
		{
			temp[i][j] = 0; // 행렬 초기화
			for (int k = 0; k < N; k++)
		
				temp[i][j] += (X[i][k] * Y[k][j]);
		//cout<< X[i][k1]<<'\t'<<Y[k1][j]<<'\t'<<'\n';
		//	k1++;
			temp[i][j] %= 1000;
			//ut << temp[i][j]<<'\t'<<'\n';
		}

	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			X[i][j] = temp[i][j];
}

int main()
{
	cin >> N >> B; //in,n 승

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			cin >> A[i][j];
		    ans[i][i] = 1; // 정답행렬은 단위행렬로
	}
	
	while (B > 0) //b=5
	{
		if (B % 2 == 1)  //B=5
		{
			Matrix_multi(ans, A); // 정답행렬에 A행렬 곱하기
		}
		Matrix_multi(A, A); //제곱 하면 값바뀜 그거 다시 제곱  
		//값 어떻게 가는지봐야겠음
		B /= 2; //b 2 b=1
	}
;


	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			cout << ans[i][j] << " ";
		cout << endl;
	}
	
}
