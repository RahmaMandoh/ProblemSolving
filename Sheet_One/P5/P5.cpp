/*Write a program that take two numbers and calculate 
the reminder without using % operation.*/

//10%3 = 10-(3*3) = 1
// 10 mod 3

#include <iostream>
using namespace std;

int modulo (int x, int y){
  int mod;
  if(x>=0){
    do {
    mod = x-y;
    x = mod;
  } while (!(mod >= 0 && mod < y));
  }else{
    do {
    mod = x+y;
    x = mod;
  } while (!(mod >= 0 && mod < y));
  }
  
  
  return mod;
}

int main() {
  int x, y;
  cout << "Please enter two numbers to calc. reminder"<< endl;
  cout << "First number" << endl;
  cin >> x;
  cout << "Second number" << endl;
  cin >> y;
  if(y<=0){
    cout << "Non acceptable int";
  }else{
    cout << modulo(x, y);
  }
  
}