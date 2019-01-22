/*  
	Author: Sai Pothan Janjanam
    Github: github.com/saipothanjanjanam	
	HackerRank: hackerearth.com/saipothanjanjanam
*/

#include <iostream>

using namespace std;

int checkGreater(int* A[],int N, int K);

int main()
{
	int T, N, K, count=0;
	int A[100000] = {0};
	cin >> T;

	for (int i = 0; i < T; i++){
		cin >> N >> K;
		for (int j = 0; j < N; j++){
			cin >> A[j];
		}
		while(1){
			if ((checkGreater(A, N, K) != 0)){
				count++;
			}
			else break;
		}
		A[100000] = {0};
	}
	return 0;
}


int checkGreater(int A,int N, int K){
	int check=0;
	for(int i = 0; i<N; i++){
		if(*(A[i]) < K) check++;
	}
	if(check != 0){
		for(int j = 0; j<N; j++){
		*(A[j]) += 1;
	}
		return 1;
	}
	else{
		return 0;
	} 
}