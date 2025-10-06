//Write a program to take numbers from user and find the 
//max and min from them (let users choose the No of 
//numbers.
#include <iostream>
using namespace std;

pair<int,int> minMax(int arrayLength, int arr[]){
  int min = arr[0], max = arr[arrayLength-1];
  for (int i=0; i<arrayLength; i++){
    if(arr[i]< min){
      min = arr[i];
    }
    if(arr[i] > max){
      max = arr[i];
    }
  }
  // cout << "Min is: " << minN << ", and max is: " << maxN << endl;
  return make_pair(min, max);
}

int main() {
  int n;
  cout << "Please enter the number of numbers:"<< endl;
  cin >> n;
  int arr[n];
  for(int i=0; i<n ; i++){
    cout << "Number " << i+1 << endl;
    cin >> arr[i];
  }
  // cout << arr;
  // cout << minMax(n, arr);
  pair<int, int> result = minMax(n, arr);
  cout << "Min is: " << result.first << ", Max is: " << result.second;

}