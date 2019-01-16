/*  
	Author: Sai Pothan Janjanam
    Github: github.com/saipothanjanjanam	
	HackerRank: hackerearth.com/saipothanjanjanam
*/

#include <iostream>

using namespace std;

int main()
{
	int N;
	long int sum=0;
	long long int a[10]={0};
	cin >> N;
	for (int i=0; i<N; i++){
		cin >> a[i];
		sum += a[i];
	} 
    cout << sum << endl;
	return 0;
}