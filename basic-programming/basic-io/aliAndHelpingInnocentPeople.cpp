/*  
	Author: Sai Pothan Janjanam
    Github: github.com/saipothanjanjanam	
	HackerRank: hackerearth.com/saipothanjanjanam
*/

#include <iostream>

using namespace std;

int main(){
	string s;
	cin >> s;

	if ((int(s[0])+int(s[1]))%2==0 && (int(s[3])+int(s[4]))%2==0 && (int(s[4])+int(s[5]))%2==0 && (int(s[7])+int(s[8]))%2==0 && (s[2] == 'A' || s[2] == 'E' || s[2] == 'I' || s[2] == 'O' || s[2] == 'U')){
		cout << "valid" << endl; 
	}
	else cout << "invalid" << endl;

	return 0;
}