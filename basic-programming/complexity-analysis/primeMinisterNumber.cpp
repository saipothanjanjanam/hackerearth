/*  
	Author: Sai Pothan Janjanam
    Github: github.com/saipothanjanjanam	
	HackerRank: hackerearth.com/saipothanjanjanam
*/

#include <iostream>

using namespace std;

int main()
{
	int a, b, count = 0;
	cin >> a >> b;
	
	// for (int i = a; i <= b; i++){
	// 	c = isPrime(i);	 	
	// } 

	for (int i = a; i < b; i++){
		if (i==2 || i==3){
			cout << "False" << endl;
			break;			
		}
		for (int j = 5; j*j < i; j++){
		 	count++;
		}
		if (count == 0) cout << i << endl;
		count = 0;
	}


	return 0;
}