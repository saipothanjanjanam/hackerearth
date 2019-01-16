/*  
	Author: Sai Pothan Janjanam
    Github: github.com/saipothanjanjanam	
	HackerRank: hackerearth.com/saipothanjanjanam
*/

#include <iostream>

using namespace std;

int main()
{
	int n,count=0;
	char s[1000000];
	cin >> n;
	cin >> s;
	for(int i = 0; i < n; i++){
		switch(s[i]){
			case 'h':
				count++;
				break;
			case 'a':
				count++;
				break;
			case 'c':
				count++;
				break;
			case 'k':
				count++;
				break;
			case 'e':
				count++;
				break;
			case 'r':
				count++;
				break;
			case 't':
				count++;
				break;
		}
	}	

	cout << int(count/11) << endl; 

	return 0;
}