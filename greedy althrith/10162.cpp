#include <iostream>
using namespace std;
int task[3]={300,60,10};
int m[3]={0,};
int main(){
	int time;
	int count=0;
	cin >> time;
	while(time>0){
		if(time%10==0){
			for(int i=0;i<3;i++){
				m[i]=time/task[i];
				time=time-(m[i]*task[i]);
				
			}
			for(int i=0;i<3;i++){
				cout<< m[i] <<' ';
			}
		}else{
			cout<<-1;
			break;
		}
	}
	return 0;
}
