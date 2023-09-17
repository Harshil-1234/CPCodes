/*
Dynamic Programming(DP) -> we store previously computed values and use those value again in future if required
Generally two ways to perform DP:
1. Tabulation Method: bottom - up DP
2. Recursion + Memoization Method: top - down DP

            Recursion -> DP : generally involves 3 steps
            declaration of dp array -> storing values -> checking if values calculated

TO CONVERT RECURSION TO MEMOIZATION
-> declare dp array
-> store recursive calls in dp
-> check if that index value present in dp array

TO CONVERT RECURSION TO TABULATION
-> declare dp array
-> analyse and store base cases in them
-> run an iterative approach for remaining cases
*/
#include<bits/stdc++.h>
using namespace std;
//MEMOIZATION METHOD
//TC -> O(n) , SC -> O(n) + O(n)
int fibMem(int n,vector<int>&dp){
    if(n<=1) return n;

    //CHECKING
    if(dp[n]!= -1) return dp[n];

    //STORING
    return dp[n] = fibMem(n-1,dp) + fibMem(n-2,dp);
}

//TABULATION METHOD
//TC -> O(n) , SC -> O(n)
int fibTab(int n, vector<int>&dp){
    dp[0] = 0;
    dp[1] = 1;
    for(int i=2;i<=n;i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}
int main(){
    cout<<"Enter the number: ";
    int n;
    cin>>n;
    // DECLARATION
    vector<int>dp(n+1,-1);
    //memset function copies a single value for a specified number of times to an object
    // memset(dp,-1,sizeof dp);

    // cout<<fibMem(n,dp)<<endl;
    // cout<<fibTab(n,dp)<<endl;

    // FURTHER OPTIMIZED CODE
    // TC -> O(n) , SC -> O(1)
    int prev2 =0;
    int prev =1;
    for(int i=2;i<=n;i++){
        int curri = prev + prev2;
        prev2 = prev;
        prev = curri;
    }
    cout<<prev<<endl;
    return 0;
}