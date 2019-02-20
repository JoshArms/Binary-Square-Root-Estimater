#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int sqrt(int);

int main(){
  cout << "This program estimates the square root of a number without using cmath's sqrt" <<endl;
  int num = 0;
  cout << endl << "Enter a number to check: ";
  cin >> num;
  int ans = sqrt(num);
  cout << "The square root is at least: " << ans <<endl;
  cout << "and at most: " << ans+1<<endl;
  return 0;
}

int sqrt(int num){
  if(num*num==num){ //this catches 1 and 0
    return num;
  }
  int upper = num/2;
  int lower = 0;
  int mid = upper/2;
  while(lower<=upper){
    mid = (lower+upper)/2;
    if((mid*mid)==num){
      return mid;
    }else if((mid*mid)>num){
      upper = mid-1;
    }else{
      lower = mid+1;
    }
  }
  return mid;
}
