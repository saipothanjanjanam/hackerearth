/*  
	Author: Sai Pothan Janjanam
    Github: github.com/saipothanjanjanam	
	HackerRank: hackerearth.com/saipothanjanjanam
*/

#include <iostream>

using namespace std;

int main()
{
	int N,minSkill,fSkill;
	cin >> N >> minSkill;
	for (int i = 0; i < N; ++i)
	{
		cin >> fSkill;
		if (fSkill >= minSkill) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

	return 0;
}