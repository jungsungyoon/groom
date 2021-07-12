#include <iostream>
#include <cstring>
using namespace std;
 
int main(int argc, char *argv[])
{
	int num;
	int sum;
	
	int temp;
 
	cin >> num; //216
 
	for (int i = 1; i < num; ++i) { //216까지실행
		sum = i; //sum =1
		temp = i; //temp 1
 
		while (temp>0) { 
			sum += temp % 10;
			temp /= 10;
		}
 
		if (num == sum) {
			cout << i;
			return 0;
		}
	}
 
	cout << "0";
 
	return 0;
}
