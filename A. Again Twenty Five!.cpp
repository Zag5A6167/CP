#include <iostream>
#include<cmath>
using namespace std;

int main() {




  double n;
  cin >> n;
  
  double  ans = pow(5,n);
  double l2 =  static_cast<int>(ans) % 10;
  ans /= 10;
  double l1 = static_cast<int>(ans) % 10;
  if(n >= 10000){
    cout << 25;
  }else{
  cout << l1;
  cout << l2;
    
  }


  return 0;
}