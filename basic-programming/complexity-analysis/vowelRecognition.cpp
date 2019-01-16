/*  
	Author: Sai Pothan Janjanam
    Github: github.com/saipothanjanjanam	
	HackerRank: hackerearth.com/saipothanjanjanam
*/

#include <iostream>
#include <string.h>

using namespace std;

int main() {
	int testCases, stringLength, count = 0;
	string s;
	cin >> testCases;
	// cout << s.length();
	for (int i = 0; i < testCases; i++){
		cin >> s;
		stringLength = s.length(); 
		for (int j = 0; j < stringLength; j++){
			for (int k = j; k < stringLength; k++){
				if(s[k] == 'A' || s[k] == 'E' || s[k] == 'I' || s[k] == 'O' || s[k] == 'U' || s[k] == 'a' || s[k] == 'e' || s[k] == 'i' || s[k] == 'o' || s[k] == 'u'){
					count++; 			
				}
			}
		}
	}
	cout << count << endl;
	return 0;
}
