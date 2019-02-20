#include <iostream>

using std::cin;
using std::cout;
using std::endl;

double sqrt(int);

const float ERROR = .00001;

int main(){
  cout << "This program estimates the square root of a number without using cmath's sqrt" <<endl;
  int num = 0;
  cout << endl << "Enter a number to check: ";
  cin >> num;
  double ans = sqrt(num);
  cout << "The square root is: " << ans <<endl;
  return 0;
}

double sqrt(int num){
  if(num*num==num){ //this catches 1 and 0
    return num;
  }
  int comparisons = 0;
  double upper = num/2;
  double lower = 0;
  double mid = upper/2;
  while(lower<=upper){
    comparisons++;
    cout << comparisons;
    mid = (lower+upper)/2;

    if((mid*mid)==num){
      return mid;
    }else if((mid*mid)>num){
      upper = mid-ERROR;
    }else{
      lower = mid+ERROR;
    }
  }
  return mid;
}
