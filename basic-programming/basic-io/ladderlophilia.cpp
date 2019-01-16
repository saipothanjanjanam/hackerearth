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
	cin >> N;
	for (int i = 1; i <= (3*N+2); i++){
		for (int j = 0; j < 5; j++){
			if (i%3 == 0) cout << "*";
			else{
				if(j%4 == 0) cout << "*";
				else cout << " ";	
			}
		} 
	cout << endl;
	}
	return 0;
}