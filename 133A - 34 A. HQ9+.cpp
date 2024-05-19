#include<bits/stdc++.h>
#include<cmath>
using namespace std;

#define long long ll;



int main(){
	
	ios::sync_with_stdio(0);
	cin.tie(0);

	string p;
	cin >> p;
	bool checked = false;
	
	for(int i = 0 ; i < p.size();i++){
		if(p[i] == 'H' || p[i] == 'Q' || p[i] == '9'){
			checked = true;
			break;
		}
	}


	if(checked == true){
		cout << "YES";
	}else{
		cout << "NO";
	}












return 0;
}	

