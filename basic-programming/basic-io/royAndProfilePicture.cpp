/*  
	Author: Sai Pothan Janjanam
    Github: github.com/saipothanjanjanam	
	HackerRank: hackerearth.com/saipothanjanjanam
*/

#include <iostream>

using namespace std;

int main()
{
	int L,N;
	int* W = NULL;
	int* H = NULL;
	cin >> L;
	cin >> N;
	W = new (nothrow) int[N];
	H = new (nothrow) int[N];
	for (int i = 0; i < N; i++){
		cin >> W[i] >> H[i];
	}
	for (int i = 0; i<N; i++){
		if(W[i]<L || H[i]<L) cout << "UPLOAD ANOTHER" << endl;
		else if(W[i]>=L && H[i]>=L){
			if(W[i] == H[i]) cout << "ACCEPTED" << endl;
			else cout << "CROP IT" << endl;	
		} 
	}

	delete[] W;
	delete[] H;

	return 0;
}