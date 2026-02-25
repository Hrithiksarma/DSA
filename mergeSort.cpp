#include <iostream>
#include<vector>
using namespace std;



void merge(vector<int> &arr,int low ,int high ,int mid);
void mergeSort(vector<int> &arr,int low,int high){




if(low>=high){
    return;
}


int mid=(low+high)/2;

mergeSort(arr, low, mid);
mergeSort(arr, mid+1,high);
merge(arr, low, high,mid);
}


void merge(vector<int> &arr, int low,int high,int mid){

vector <int> temp;
int left=low;
int right=mid+1;

while ((left<=mid )&&(right <=high))
{

    if (arr[left]<=arr[right]){
        temp.push_back(arr[left]);
        left++;
    }
    else {
        temp.push_back(arr[right]);
        right++;

    }

}
while (left<= mid){
    temp.push_back(arr[left]);
    left++;

}
while (right<=high){
    temp.push_back(arr[right]);
    right++;
}


for(int i=low;i<=high;i++){
    arr[i]=temp[i-low];

}

}

int main(){

vector<int> arr={9,8,7,6,8,453,7,5,6};
int low=0;;
int high=arr.size()-1;
mergeSort(arr,low,high);
for(int x : arr) cout << x << " ";


}


