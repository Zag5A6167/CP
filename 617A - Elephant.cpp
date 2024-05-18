#include<bits/stdc++.h>

using namespace std;


int main(){
	int x;
	cin >> x;
	int sum = x;
	int k = 0;
	while(x > 0){


		if(sum >= 5 ){
			sum-= 5;
		
			x--;
			k++;
		}
		if(sum >= 4 && sum <= 4){
			sum-= 4;
		
			x--;
			k++;
		}
		if(sum >= 3&& sum <= 3){
			sum-= 3;
		
			x--;
			k++;
		}
		if(sum >= 2 && sum <= 2){
			sum-= 2;
		
			x--;
			k++;
		}
		if(sum >= 1 && sum <= 1){
			sum-= 1;
		
			x--;
			k++;
		}
			



		if(sum == 0){
			break;
		}
	}

	cout << k << endl;
}	




// if(x >= 5){
// 			x-= 5;
// 			k++;
// 			cout << x << endl;
// 		} if(x >= 4 && x <= 4){
// 			x -= 4;
// 			k++;
// 		} if(x >= 3 && x <= 3){
// 			x -= 3;
// 			k++;
// 		} if(x >= 2 && x <= 2){
// 			x -= 2;
// 			k++;
// 		} if(x >= 1 && x <= 1){
// 			x -= 1;
// 			k++;
// 		}if(x == 0){
// 			break;
// 		}