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
    }
    if(i>0&&min2>arr[i]) //2번째 자리 1원이다
    {
      min2=arr[i];
    }
  }
  cin>>M;
  if(M-min2<0)
  {
    printf("0");    // 만약 돈이없으면 0원이다
  }
  else
  {
    num=((M-min2)/min)+1;  // 만들어야할 자리수
  
  int t=num;
  for(int j=0;j<num;j++)
  {
    for(int i=N-1;i>-1;i--)
    {
      if(M-arr[i]<0)
        continue;
      if(t==((M-arr[i])/min+1))
      {
        M-=arr[i];
        t--;
        ans[j]=i;
        break;
      }
    }
  }

  for(int i=0;i<num;i++)
    printf("%d",ans[i]);
  
  }
}
