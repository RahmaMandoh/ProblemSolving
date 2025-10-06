#include <iostream>
using namespace std;

void minMax (int arr[], int n){
  int min = 10000000;
  int max = 0;
  for(int i=0; i<n; i++){
    if ( arr[i] < min){
      min = arr[i];
    }
    if ( arr[i] > max){
      max = arr[i];
    }
  }
  cout << min << endl;
  cout << max << endl;
}

int main() {
    int arr[] = {5,4,3,2,1};
    int arr2[] = {1,1,5,44,0,6};
    minMax(arr, 5);
    minMax(arr2, 6);
    return 0;
}
