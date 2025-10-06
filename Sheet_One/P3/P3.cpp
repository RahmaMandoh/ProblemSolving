/* Write a program to take numbers from user and 
calculate the sum of them (let users choose the No of 
numbers. */
#include <iostream>
using namespace std;

// int arraySum (int arrayLength, int arr[]){
//   int sum = 0;
//   for (int i=0; i< arrayLength; i++){
//     sum += arr[i];
//   }
//   return sum;
// }

int main() {
  int n;
  cout << "Please enter the number of numbers:"<< endl;
  cin >> n;
  int sum = 0;
  // int arr[n];
  for(int i=0; i<n ; i++){
    int num;
    cout << "Number " << i+1 << endl;
    cin >> num;
    sum += num;
    // cin >> arr[i];
  }
  cout << "The sum is: " << sum; 
  // cout << "The sum is: " << arraySum(n, arr);
}