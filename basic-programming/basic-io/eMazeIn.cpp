/*  
	Author: Sai Pothan Janjanam
    Github: github.com/saipothanjanjanam	
	HackerRank: hackerearth.com/saipothanjanjanam
*/

#include <iostream>

using namespace std;

int main()
{
	string S;
	int x=0,y=0,i=0;
	cin >> S;
	while (S[i] != '\0'){
		if(S[i] == 'L') x--;
		else if(S[i] == 'R') x++;
		else if(S[i] == 'U') y++;
		else if(S[i] == 'D') y--;
		i++;
	}
	cout << x << " " << y << endl;
	return 0;
}