#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
std::vector <int>RotateArray(std::vector<int> arr, int d){
  std::vector<int> temp;
  int n =arr.size();
  reverse(arr.begin(),arr.begin()+d);
  reverse(arr.begin()+d,arr.end());
  reverse(arr.begin(),arr.end());


  return arr;
}

  int main() {
    
    vector<int> arrreal = {10, 20, 30, 40, 50,60,70};
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