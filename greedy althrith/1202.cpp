#include <iostream>
#include <queue>
#include<utility>
#include <algorithm>
using namespace std;
const int MAX = 300000;
int N, K;
int bag[MAX];
pair<int, int> jewelry[MAX]; //https://blockdmask.tistory.com/64
priority_queue<int> pq; 
int main(void)
{
        cin >> N >> K;
        for (int i = 0; i < N; i++) //보석 무게 값어치
                 cin >> jewelry[i].first >> jewelry[i].second;
        for (int i = 0; i < K; i++) //가방 무게
                 cin >> bag[i];
	
        //보석(무게 기준)과 가방 오름차순 정렬
        sort(jewelry, jewelry + N);
        sort(bag, bag + K);

        long long result = 0;
        int check = 0;

        //무게제한이 낮은 가방부터 최대한 비싼 보석을 넣는 방법
        for (int i = 0; i < K; i++)
        {
                 //i 번째 가방의 무게제한에 충족하는 보석 다 넣음
                 while (check < N && jewelry[check].first <= bag[i])
                         pq.push(jewelry[check++].second);
                 //pq의 루트에는 현재 기준 제일 비싼 보석이 들어있음
				//값어치를 넣은다음 result에 넣기 그후 그 값 뺴기(다른 보석 훔쳐야떄문)
                 if (!pq.empty())
                 {
                         result += pq.top();
                         pq.pop();
                 }
        }
        cout << result << "\n";
        return 0;
}
