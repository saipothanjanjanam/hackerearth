/*  
	Author: Sai Pothan Janjanam
    Github: github.com/saipothanjanjanam	
	HackerRank: hackerearth.com/saipothanjanjanam
*/

#include <iostream>

using namespace std;

int main(){
    int n, fact = 1;
    cin >> n;
    
    for (int i=1; i<=n; i++){
        fact *= i;
    }
    
    cout << fact << endl;
}