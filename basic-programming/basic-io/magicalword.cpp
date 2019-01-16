/*  
	Author: Sai Pothan Janjanam
    Github: github.com/saipothanjanjanam	
	HackerRank: hackerearth.com/saipothanjanjanam
*/

#include <iostream>
#include <stdio.h>

using namespace std;

bool isPrime(int x);

int main()
{
	int test_cases;
	int N=0;
	char s[100]; 
	cin >> test_cases;
	
	for (int i=0; i<test_cases; i++){
		cin >> N;
		cin >> s;
		for (int j=0; j<N; j++){
			while(isPrime(s[j])){
				int(s[j]) = int(s[j]) + 1;
			}
		}
		cout << s << endl;
	}
	
	return 0;
}


bool isPrime(int x){
	int flag=0, count = 0;
	if (x%2==0 || x%3==0) return flag;
	for (int i=5; i*i<x; i++)
	{
		if (x%i == 0) return flag;
	}
	flag==1;
	return flag;
}