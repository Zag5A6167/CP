#include<bits/stdc++.h>
#include<cmath>
using namespace std;

#define long long ll;

int main(){
	
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >>t;
	int n;
	string res = "EASY";
	while(t--){
		cin >> n;
		if(n == 1){
			res = "HARD";
		}
		
	}

	cout << res;
return 0;
}	

