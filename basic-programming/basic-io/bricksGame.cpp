/*  
	Author: Sai Pothan Janjanam
    Github: github.com/saipothanjanjanam	
	HackerRank: hackerearth.com/saipothanjanjanam
*/

#include <iostream>

using namespace std;

int main()
{
	int N,i=1,n_p=0,n_m=0;
	cin >> N;
	while(N>=i){
		n_p = n_p + i;
		n_m = n_m + 2*i;		
		N = N - 3*i;
		i++;
	}
	
	// if(%i < 0 || ) cout << "Motu" << endl;
	// else cout << "Patlu" << endl;
	
	return 0;
}