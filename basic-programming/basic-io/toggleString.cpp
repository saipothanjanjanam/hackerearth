/*  
	Author: Sai Pothan Janjanam
    Github: github.com/saipothanjanjanam	
	HackerRank: hackerearth.com/saipothanjanjanam
*/

#include <iostream>
#include <string.h>

using namespace std;

int main(){
	int i;
	char str[100];
	cin >> str;

	for(i=0; i<strlen(str); i++){
		if(int(str[i]) >= 97 && int(str[i]) <= 122) (str[i]) -= 32; 
		else if (int(str[i]) >= 65 && int(str[i]) <= 90) str[i] += 32;
	}
	
	cout << str << endl;
}
