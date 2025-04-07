#include<iostream>
using namespace std;





int main(){


	int a,b,c;
	int t;
	cin >> t;

	while(t--){
		cin >> a >> b >> c;

		if(a==b){
			cout << c << endl;
		}else if(b==c){
			cout << a << endl;

		}else if(a==c){
			cout << b << endl;
		}
		
	}

	return 0;
}