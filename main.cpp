#include <iostream>

using std::cin;
using std::cout;
using std::endl;

double sqrt(int);

const float ERROR = .00001; //constant varrible to determine accuracy of the algorithm

int main(){
  cout << "This program estimates the square root of a number without using cmath's sqrt" <<endl;
  int num = 0;
  cout << endl << "Enter a number to check: ";
  cin >> num;
  double ans = sqrt(num);
  cout << "The square root is: " << ans <<endl;
  return 0;
}
//Function: sqrt(int)
//Purpose: Binary search for the square root of a number
//Parameters: int num: number to find the square root of
//Returns: double equal to the square root within ERROR
double sqrt(int num){
  //comparisons = number of comparisons throughout the meathod
  //            this can be used to analyze efficiency
  int comparisons = 1; //1 for this first if
  if(num*num==num){ //this catches 1 and 0
    cout << "Comparisons: " << comparisons <<endl;
    return num;
  }
  double upper = num/2;
  double lower = 1+ERROR; //we know the square root is greater than 1 b/c we checked for that
  double mid = upper+lower/2;
  //Binary search
  while(lower<=upper){
    mid = (lower+upper)/2;

    if((mid*mid)==num){
      comparisons++; //1 for the if
      cout << "Comparisons: " << comparisons <<endl;
      return mid;
    }else if((mid*mid)>num){
      comparisons+=2; //1 for the first if and 1 for the else if
      upper = mid-ERROR;
    }else{
      comparisons+=2; //1 for the first if and 1 for the else if
      lower = mid+ERROR;
    }
  }
  cout << "Comparisons: " << comparisons <<endl;
  return mid;
}
