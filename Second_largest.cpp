#include <iostream>


using namespace std;

void findExtremes(int arr[],int n){
int largest=INT_MIN;
int secondLargest=INT_MIN;
int smallest=INT_MAX;
int secondSmallest=INT_MAX;


for(i=0;i<n;i++){

    if(arr[i]>largest){
        secondLargest=largest;
        largest=arr[i];
    }
    else if(arr[i]>secondLargest && arr[i]!=largest){
        secondLargest=arr[i];

    }

    if (arr[i]<smallest){
        smallest=arr[i];

    }

    else if(arr[i]<secondSmallest && arr[i]!=smallest){
        secondSmallest=arr[i];
    }

}

cout<<"largest"<<largest;
cout<<"slargest "<<secondLargest<<endl;
cout<<"smallest"<<smallest<<endl;
cout<<"second smallest"<<secondSmallest<<endl;
}
int main()
{
    int arr[] ={12,35,1,10,34,1};
    int n =sizeof(arr)/sizeof(arr[0]);
    findExtremes(arr,n);
    cout << "Hello world!" << endl;
    return 0;
}
