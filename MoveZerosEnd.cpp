#include<iostream>
#include<vector>
using namespace std;

vector <int> MoveZeros(std ::vector<int> arr){
  int n= arr.size();

  int j=-1;
  for(int i=0;i<n;i++){
    if( arr[i]==0){
      j=i;
      break;
    }
  }


for(int i=j+1;i<n;i++){
  if(arr[i]!=0){
    swap(arr[i],arr[j]);
    j++;

  }
}
return arr;
}

int main(){
  std :: vector<int> arr= {0,1,2,3,4,0,4,0,3};
  std :: vector<int> ans= MoveZeros(arr);
  for(int i=0;i<ans.size();i++){
    cout<<ans[i];
  }
}