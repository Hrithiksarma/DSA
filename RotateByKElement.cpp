#include<iostream>
using namespace std;
#include<vector>
std::vector <int>RotateArray(std::vector<int> arr, int d){
  std::vector<int> temp;
  int n =arr.size();
  d=d%n;

  for(int i =0;i<d;i++){
    temp.push_back(arr[i]);
  }

  for (int i = d ;i<n;i++){
    arr[i-d]=arr[i];
  }

  for(int i=0;i<d;i++){
    arr[n-d+i]=temp[i];
    
  }

  return arr;
}

  int main() {
    
    vector<int> arrreal = {10, 20, 30, 40, 50};
    int rotationCount = 2;

    cout << "Original Array: ";
    for(int x : arrreal) cout << x << " ";
    cout << endl;

 
    vector<int> rotatedVec = RotateArray(arrreal, rotationCount);

    cout << "Rotated Array (Left by " << rotationCount << "): ";
    for (int x : rotatedVec) cout << x << " ";
    cout << endl;

    return 0;
}