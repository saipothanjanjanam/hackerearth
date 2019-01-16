/*  
	Author: Sai Pothan Janjanam
    Github: github.com/saipothanjanjanam	
	HackerRank: hackerearth.com/saipothanjanjanam
*/

#include <iostream>
using namespace std;

int main(){
	int i = 0, count = 0;
	char a[100];
	char b[100];
	
	cin >> a;
	
	while (a[i] != '\0'){
		b[i] = a[i];
		i++;
	}

	for (int j=i-1; j>=0; j--){
		if (b[j] != a[i-j-1]) count++; 
	}

	if (count == 0) cout << "YES" << endl;
	else cout << "NO" << endl;
	
	return 0;
}