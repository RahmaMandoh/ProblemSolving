#include <iostream>
#include <stack>
using namespace std;


int* primeNum (int arr[], int n){
  stack<int> pStack;
  int count = 0;
  for(int i=0; i<n; i++){
    if(arr[i]%2 != 1){
      pStack.push(arr[i]);
      count++;
    }
  }
  int pArray[count];
  int x;
  for(int i=0; i< count; i++){
    x = pStack.top();
    pStack.pop();
    pArray[i] = x;
  }
  return pArray;
}

int main() {
  int a1[] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
  cout <<"The prime numbers is "<< primeNum(a1, 13) << endl; 
  return 0;
}
