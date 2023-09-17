#include<bits/stdc++.h>
using namespace std;

int frogKJump(int ind,int k,vector<int>&heights){
    if(ind == 0)return 0;

    int minSteps = INT_MAX;

    for(int j=1;j<=k;j++){
        int jump = INT_MAX;
        if(ind - j >= 0){
            jump = frogKJump(ind-j,k,heights) + abs(heights[ind] - heights[ind - j]);
        }    minSteps = min(jump,minSteps);
    }
    return minSteps;
}

//MEMOIZATION METHOD
int frogKJumpMemo(int ind, int k,vector<int>&heights,vector<int>&dp ){
    if(ind == 0)return 0;
    if(dp[ind]!=-1)return dp[ind];

    int minSteps = INT_MAX;

    for(int j=1;j<=k;j++){
        int jump = INT_MAX;
        if(ind - j >= 0){
            jump = frogKJump(ind-j,k,heights) + abs(heights[ind] - heights[ind - j]);
            minSteps = min(jump,minSteps);
        }
    }
    return dp[ind] = minSteps;

}

int main(){
    // vector<int> heights;
    vector<int > heights;
    heights.push_back(30);
    heights.push_back(10);
    heights.push_back(60);
    heights.push_back(10);
    heights.push_back(60);
    heights.push_back(50);

    int n = heights.size(),k=2;

    // CALLING RECURSIVE FUNCTIONS

	cout << frogKJump(n-1, k, heights)<<endl;
    // heights.push_back(10);
    // heights.push_back(50);
    // heights.push_back(10);
	// cout << frogKJump(3, 2, heights)<<endl;

    // CALLING MEMOIZATION FUNCTION

    vector<int>dp(n+1,-1);
    cout<<frogKJumpMemo(n-1,k,heights,dp)<<endl;

    //TABULATION METHOD

    fill(dp.begin(),dp.end(),0);
    dp[0] = 0;
    for(int i=1;i<n;i++){
        int minSteps = INT_MAX;
        for(int j=1;j<=k;j++){
            int jump = INT_MAX;
            if(i-j>=0){
                jump = dp[i-j] + abs(heights[i] - heights[i-j]);
                minSteps = min(minSteps,jump);
            }
        }
        dp[i] = minSteps;
    }
    cout<<dp[n-1]<<endl;
    return 0;
}