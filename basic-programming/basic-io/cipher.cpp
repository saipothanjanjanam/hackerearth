/*  
	Author: Sai Pothan Janjanam
    Github: github.com/saipothanjanjanam	
	HackerRank: hackerearth.com/saipothanjanjanam
*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	int k;
	string s;
	cin >> s;
	cin >> k;

	int len = s.length();

	for (int i = 0; i < len; i++){
		if (int(s[i])>=65 && int(s[i])<= 90){
			if (int(s[i]) + k > 90) s[i] = char(int(s[i])-26+k);	
			else s[i] = char(int(s[i])+k);	
		}
		if (int(s[i])>=97 && int(s[i])<=122){
			if (int(s[i]) + k > 122) s[i] = char(int(s[i])-26+k);	
			else s[i] = char(int(s[i])+k);		 
		}
		if (int(s[i])>=48  && int(s[i])<=57){
			if (int(s[i]) + k > 57) s[i] = char(int(s[i]) - 10 + k);	
			else s[i] = char(int(s[i])+k);	
		}
	}

	cout << s << endl;

	return 0;
}