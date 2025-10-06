// Write a program to take 2 numbers from user and 
// calculate sum of all numbers between them. 

#include <iostream>
using namespace std;

int main() {
  int inputOne; int inputTwo;

  cout << "Please enter two number to calculate the sum of numbers between them!" << endl;
  cout<< "Fist number: " << endl;
  cin >> inputOne;
  cout<< "Secound number: " << endl;
  cin >> inputTwo;
  int sum = 0;
  for (int i = inputOne ; i <= inputTwo; i++){
    // i+=i;
    sum += i;
  }
  // cout << inputOne<< " " <<inputOne ;
  cout << sum;
}