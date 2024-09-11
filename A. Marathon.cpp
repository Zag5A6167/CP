#include<iostream>
using namespace std;


int main(){

	int a,b,c,d,t;
	
	cin >> t;
	while(t--){
		cin >> a >> b >> c >> d;
		int s = 0;
		if(b > a){
			s +=1;
		}if(c > a){
			s +=1;
		}if(d > a){
			s += 1;
		}

		cout << s << "\n";
	}





	return 0;
}