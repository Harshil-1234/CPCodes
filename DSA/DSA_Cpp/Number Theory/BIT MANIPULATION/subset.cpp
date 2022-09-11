#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size(); 
        int subset_cnt = (1<<n); //storing number of subsets to be created (2^n)
        vector<vector<int>> subsets; //To store subsets.
        for (int mask = 0; mask < subset_cnt; mask++)
        {
            vector<int> subset; //To store a single subset.
            for (int i = 0; i < n; i++)
            {
                /*if statement checks whether the ith bit of our array is set or not for the given value of mask. Here we basically pick those indexes of array which are set and create a subset using it. 
                For example: when mask = 0, if statement will always be false, which means to never include any array element thus creating an empty subset.
                Similarly when mask = 1(001-->BIT) 2nd BIT is set thus 2nd index of array will be picked.*/
                if((mask &(1<<i))!=0){
                    subset.push_back(nums[i]);
                }
            }
            subsets.push_back(subset);
            
        }
        return subsets;
        
}

int main(){
    int len; cin>>len;
    vector<int> num(len);
    for (int i = 0; i < len; i++)
    {
        cin>>num[i];
    }
    
    vector<vector<int>> all_subsets = subsets(num);
    for(auto subsets : all_subsets){
        for(int ele : subsets){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
    //To find subset sequence having max XOR value:
    vector<int> mxXor_ans;
    int mxXOR = 0;
    for(vector<int> subsets : all_subsets){
        int xr = 0;
        for(int ele : subsets){
            xr ^= ele;
        }
        if(xr>mxXOR){
            mxXOR = xr;
            mxXor_ans = subsets;
        }
    }
    for(int j : mxXor_ans){
        cout<<j<<" ";
    }
    cout<<endl;
    return 0;
}