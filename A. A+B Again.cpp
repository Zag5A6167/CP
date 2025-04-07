#include<iostream>
using namespace std;





int main(){


	unsigned int n;
	unsigned int t;
	unsigned int sum =  0;
	int r;
	cin >> t;

	while(t--){
		cin >> n;
		sum  = n % 10;
		n /= 10;
		sum += n;

		cout << sum << "\n";
		
	}

	return 0;
}