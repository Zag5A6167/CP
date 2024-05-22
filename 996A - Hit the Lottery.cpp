#include <iostream>
#include <set>
#include <cctype>

using namespace std;

#define ll long long

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    int r = 0;
    cin >> n;
    while(n > 0){
    	if(n >= 100){
    		n -= 100;
    		r += 1;
    	}
    	else if(n >= 20){
    		n -= 20;
    		r += 1;
    	}
    	else if(n >= 10){
    		n -= 10;
    		r += 1;
    	}
    	else if(n >= 5){
    		n -= 5;
    		r += 1;
    	}
    	else if(n >= 1){
    		n -= 1;
    		r += 1;
    	}
    	else if(n == 0){
    		break;
    	}
    }

    	cout << r << endl;
    
}
