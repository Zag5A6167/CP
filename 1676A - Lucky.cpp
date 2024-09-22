#include<bits/stdc++.h>
using namespace std;
 



 
#define ll long long
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 	
    
 
 
 	
    

    
    int s1 = 0;
    int s2 = 0;
   	int cnt = 0;
   	int t;
   	int num;
   	cin >> t;
   	string s;
 	vector<int> d1;
 	while(t--){
 		cin >> s;
 		num = stoi(s);

 		while(num > 0){
 		if(cnt < 3){
	 		int digit = num %  10;
	 		s2 += digit;
	 		d1.push_back(digit);
	 		num /= 10;
	 		cnt++;
 		}
 		else{
 			int digit = num %  10;
	 		s1 += digit;
	 		d1.push_back(digit);
	 		num /= 10;
 		}

 		
 	}
 	if(s1 == s2 || s1 == 0 && s1 == 0){
 		cout << "YES" << "\n";
 	}else{
 		cout << "NO" << "\n";
 	}
 	cnt = 0;
 	s1 = 0;
 	s2 = 0;

 	}
 	
 
 
 	
 
 
 
    return 0;
}