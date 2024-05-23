#include <iostream>
#include <set>
#include <cctype>
#include<cmath>
#include<typeinfo>
using namespace std;

#define ll long long
#define nl "\n"

int main() {	

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
   	string x;
   	int ans = 0;

   	while(n > 0){
   	 	cin >> x;
   	 	if(x == "X++"){
   	 		ans +=1;
   	 	}else if(x == "++X"){
   	 		ans += 1;
   	 	}else{
   	 		ans -= 1;
   	 	}
   	 	n--;
   	}


   	cout << ans;




   	return 0;
}
