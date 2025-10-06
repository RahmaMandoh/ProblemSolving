/*Write a program that take two numbers and multiply 
them without using * operation.*/

#include <iostream>
using namespace std;

int multiply (int x, int y){
  int sum = 0;
  // bool flag = false;
  int oldX = x, oldY = y;
  if (x<0 && y<0){
    x = -x; y = -y;
  } else if (x<0){
    x = -x;
  } else if (y<0){
    y = -y;
  }
  // if (x< 0 || y< 0){
  //   flag = true;
  // }
  for(int i=0; i< x; i++){
    sum += y;
  }
  if(oldX< 0 || oldY<0){
    sum = -sum;
  }
  
  return sum;
}

int main() {
  int x,y;
  cout << "Please enter two numbers to multiply them."<< endl;
  cout << "First number: "<< endl;
  cin >> x;
  cout << "Secound number: "<< endl;
  cin >> y;
  cout << "The result is: " << multiply(x, y);
}