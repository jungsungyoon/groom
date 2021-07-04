#include <iostream>
#include <cstdlib>
using namespace std;
int N,M,num;
int arr[10]; //최대 갯수 
int ans[50];//돈

int main() {
  int min=51,min2=51;
  cin >> N;
  for(int i=0;i<N;i++)
  {
    cin >> arr[i];
    if(min>arr[i]) //첫번쨰자리 고정 0원이다 
    {
		
      min=arr[i];
		//cout<<arr[i]<<'\n';
    }
    if(i>0&&min2>arr[i]) //2번째 자리 1원이다
    {
		//cout << arr[i];
      min2=arr[i];
		//cout<<min2<<'\n';
    	
    }
  }
  cin>>M;
  if(M-min2<0)
  {
    printf("0");    // 만약 돈이없으면 0원이다
  }
  else
  {
    num=((M-min2)/min)+1;  // 만들어야할 자리수 21-7 14/6= 2+1 3
  
  int t=num;
  for(int j=0;j<num;j++) //0 1
  {
    for(int i=N-1;i>-1;i--) //i=2  i=1
    {
		
      if(M-arr[i]<0) //21-8<0 f 21-7<0 f
        continue;
      if(t==((M-arr[i])/min+1)) //13/6 2+1 3T
      {
        M-=arr[i];//13
        t--;  //2
        ans[j]=i;  //2 저장
        break;
      }
    }
  }

  for(int i=0;i<num;i++)
    printf("%d",ans[i]);
  
  }
}
