/*  
	Author: Sai Pothan Janjanam
    Github: github.com/saipothanjanjanam	
	HackerRank: hackerearth.com/saipothanjanjanam
*/

#include <iostream>

using namespace std;

int main(){
    int A[100000], B[100000], N;
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> A[i];
    }
    for(int i=0; i<N; i++){
        cin >> B[i];
    }
    for(int i=0; i<N; i++){
        cout << A[i]+B[i] << " ";
    }
    cout << endl;
}