#include <iostream>
#include <cstring>
using namespace std;
 
int main(int argc, char *argv[])
{
	int num;
	int sum;
	
	int temp;
 
	cin >> num;
 
	for (int i = 1; i < num; ++i) {
		sum = i;
		temp = i;
 
		while (temp>0) {
			sum += temp % 10;
			temp /= 10;
		}
 
		if (num == sum) {
			cout << i << endl;
			return 0;
		}
	}
 
	cout << "0";
 
	return 0;
}
