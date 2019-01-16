/*  
	Author: Sai Pothan Janjanam
    Github: github.com/saipothanjanjanam	
	HackerRank: hackerearth.com/saipothanjanjanam
*/

#include <iostream>

using namespace std;

int main()
{
	int N, SH, SM, EH, EM, minDiff, min, hr, hrDiff;
	cin >> N;
	
	for (int i = 0; i < N; i++)
	{
		cin >> SH >> SM >> EH >> EM;
		minDiff = (SH*60 + SM) - (EH*60 + EM);

		if (minDiff<0) minDiff+=1440;

		hr = hrDiff - 1;
		min =  minDiff - hr*60;
		if (min<0) min=-min;
		cout << hr << " " << min << endl;
	}

	return 0;
}