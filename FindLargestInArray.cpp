#include <iostream>
#include<vector>

using namespace std;

int largestElement(vector<int> &arr, int n){

int largest =arr[0];
for (int i=0;i<n;i++){
    if(arr[i]>largest){
        largest = arr[i];
    }
    continue;

}

return largest;
}

int main()
{
    vector<int> arr={3,2,4,5,2,1,4,7,89,10};
    printf("%d",largestElement(arr,10));
    vector<int> arr1={-15, -3, -22, -8};
    printf("%d",largestElement(arr1,4));


    return 0;
}
