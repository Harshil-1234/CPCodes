#include<bits/stdc++.h>
using namespace std;

bool isVowel(char ch){
    return ch =='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u';
}

vector<string> subsets(string s){
    int sz = (1<<s.size());
    vector<string> ans;
    for(int mask =0;mask<sz;mask++){
        string subset;
        for(int bit = 0;bit<sz;bit++){
            if(mask & (1<<bit)) subset.push_back(s[bit]);
        }
        if(subset.size()) ans.push_back(subset);
    }
    return ans;
}

int main(){
    int turn;
    cin>>turn;
    while(turn--){
        int size;
        cin>>size;
        string st[size];
        for(int i=0;i<size;i++){
            cin>>st[i];
        }
        unordered_map<string,int> hsh;
        for(int i=0;i<size;i++){
            set<char> dist_vw;
            for(char ch : st[i]){
                if(isVowel(ch)){
                    dist_vw.insert(ch);
                }
            }
            string vowel_str;
            for(char ch : dist_vw){
                vowel_str.push_back(ch);
            }
            vector<string>all_subsets = subsets(vowel_str);
            for(string vowel_subset : all_subsets){
                hsh[vowel_subset]++;
            }
        }
        long long ans =1;
        for(auto &pr : hsh){
            if(pr.second<3) continue;
            long long ct = pr.second;
            long long ways = ct * (ct-1) * (ct-2)/6;
            if(pr.first.size()%2==0) ans -= ways;
            else ans += ways;
        }
        cout<<ans<<endl;
    }
    return 0;
}