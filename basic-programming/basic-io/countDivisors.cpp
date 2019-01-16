/*  
	Author: Sai Pothan Janjanam
    Github: github.com/saipothanjanjanam	
	HackerRank: hackerearth.com/saipothanjanjanam
*/


#include <iostream>

using namespace std;

int main()
{
	int i, j, k, count = 0;
	cin >> i >> j >> k;
	for(int m=i; m<=j; m++){
		if (m%k == 0) count++;
	}
	cout << count << endl;
	return 0;
}