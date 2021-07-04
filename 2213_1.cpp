#include <iostream>
#include <cstring>
using namespace std;
  //실패작
int main(int argc, char *argv[])
{
	int num;
	int sum;
	
	
 
	cin >> num;
 
	for (int i = 1; i < num; ++i) {
		sum = 0;
		sum+=i;
		while (i!=0) {
			
			sum += i % 10;
			cout<<sum;
			i /= 10;
		}
 
		if (num == sum) {
			cout << i << endl;
			return 0;
		}
	}
 
	cout << "0";
 
	return 0;
}
