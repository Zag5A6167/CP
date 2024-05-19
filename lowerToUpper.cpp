#include<bits/stdc++.h>
#include<cmath>
using namespace std;

#define long long ll;



int main(){
	
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	cin >> s;
	string tempStr;
	for(char i : s){
		if(i >= 'a' && i <= 'z'){
			tempStr += i - 32;

		}else{
			tempStr += i;
		}
		
	}

	cout << tempStr;
	













return 0;
}	

