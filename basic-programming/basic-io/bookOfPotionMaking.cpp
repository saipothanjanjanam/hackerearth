/*  
	Author: Sai Pothan Janjanam
    Github: github.com/saipothanjanjanam	
	HackerRank: hackerearth.com/saipothanjanjanam
*/

#include <iostream>

using namespace std;

int main(){
	int N, sum=0, last_digit,i=10;
	cin >> N;
	
	while (N != 0){
		last_digit = N%10;
		sum += i*last_digit;
		N = N/10;
		i--;
	}
	
	if (sum%11 == 0) cout << "Legal ISBN" << endl;
	else cout << "Illegal ISBN" << endl;

	return 0;
}