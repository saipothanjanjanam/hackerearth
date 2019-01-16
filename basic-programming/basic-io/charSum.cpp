/*  
	Author: Sai Pothan Janjanam
    Github: github.com/saipothanjanjanam	
	HackerRank: hackerearth.com/saipothanjanjanam
*/

#include <iostream>
#include <string.h>

using namespace std;

int main(){
	int i, sum=0;
	char s[100];   
    cin >> s;    
    i = strlen(s);
    for(int j=0; j<i; j++){
		sum += int(s[j]) -96;    	
    }

    cout << sum << endl;

    return 0;
}
