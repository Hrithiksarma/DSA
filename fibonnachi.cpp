#include<iostream>
using namespace std;
#include <vector>

int fib (int n, vector<int> &dp){
if(n<=1){
return n;
}

if(dp[n]!=-1){
  return dp[n];

}

return dp[n]= fib(n-1,dp) + fib(n-2,dp);

}

int main(){

  int n;
  cout<<"enter a number to find fib off";
  cin>>n;
  vector<int> dp(n+1,-1);
  cout<<fib(n,dp);





}

