#include<bits/stdc++.h>
using namespace std;

void lcs(string s1,string s2){
    int n = s1.size();
    int m = s2.size();
    vector<vector<int > >dp(n+1,vector<int>(m+1,0));

    for(int i=0;i<=n;i++){
        dp[i][0] = 0;
    }
    for(int i=0;i<=m;i++){
        dp[0][i] = 0;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
        if(s1[i-1] == s2[j-1]){
            dp[i][j] = 1 + dp[i-1][j-1];
        }
        else dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
        }
    }

    cout<<"Longest Common Subsequence is of length: "<<dp[n][m]<<endl;

    int i=n,j=m;

    string ans="";
    int len = dp[n][m];
    int ind = len-1;
    for(int i=0;i<len;i++){
        ans+='#';
    }
    // printing subsequence
    while(i>0 && j>0){
        if(s1[i-1] == s2[j-1]){
            ans[ind--] = s1[i-1];
            i--;j--;
        }
        else{
            if(dp[i-1][j]>dp[i][j-1]){
                i = i-1;
            }
            else j=j-1;
        }

    }

    cout<<"Longest Common Subsequence is: "<<ans<<endl;
}

int main(){
    string s1,s2;
    cout<<"Enter String 1: ";
    cin>>s1;
    cout<<"Enter String 2: ";
    cin>>s2;
    lcs(s1,s2);
    return 0;
}