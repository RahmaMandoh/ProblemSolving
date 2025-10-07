/*Write a program to calculate the power of a number. 
The number and its power are input from user.*/

#include <iostream>
using namespace std;

double power(double x, double y){
  if(y>0){
    double pow=x;
    for(int i=1; i<y; i++){
      pow*=x;
    }
    return pow;
  }else if(y==0){
    return 1;
  }else{
    y=-y;
    double pow=x;
    for(int i=1; i<y; i++){
      pow*=x;
    }
    return 1/pow;
  }
 
}

int main() {
  double x, y;
  cout << "Please enter number and the power"<< endl;
  cout << "The number" << endl;
  cin >> x;
  cout << "The power" << endl;
  cin >> y;
  cout << power(x,y);
}