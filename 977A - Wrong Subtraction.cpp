#include<bits/stdc++.h>
#include<cmath>
using namespace std;

#define long long ll;



int main(){
	
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n,k;
	cin >> n >> k;
	int res; 
	while(k != 0){
		if(n % 10 == 0){
			n /= 10;
			if(n == 1){
				break;
			}

		}else{
			n -= 1;
		}	
		
		k--;
		
	}

cout << n << endl;
	



return 0;
}	

