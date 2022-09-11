#include<bits/stdc++.h>
using namespace std;

const int N =1e6+10;
int a[N];
int hp[N];
//Basically canRemove stores if the number after dividing by 2 number pair can be reduced or not.
// if canRemove[i] can be removed --> canRemove[i] = 1 else 0;
int canRemove[N];
int hsh[N];

//Function jo number input lega aur distinct prime factors dega.
vector<int> distinctPF(int x){
    vector<int> ans;
    while(x>1){
        int pf = hp[x];
        while(x % pf ==0){
            x/=pf;
        }
        ans.push_back(pf);
    }
    return ans;
}

int main(){
    for(int i=2;i<N;i++){
        if(hp[i]==0){
            for(int j =i;j<N;j+=i){
                hp[j] = i;
            }    
        }
    }
    int n,q;
    cin>>n>>q;
    for(int i =0;i<n;i++){
        int x;
        cin>>x;
        hsh[x] = 1;
    }
    for(int i=2;i<N;i++){
        if(hsh[i]){
            for(long long j =i;j<N;j*=i){
                canRemove[j] = 1;
            }
        }
    }
    while(q--){
        int x;
        cin>>x;
        vector<int> pf = distinctPF(x);
        bool isPossible = false;
        for(int i=0;i<pf.size();i++){
            for(int j=i;j<pf.size();j++){
                int product = pf[i] * pf[j];
                if(i==j && x%product!=0)continue;
                int toRemove = x/product;
                if(canRemove[toRemove]==1 || toRemove ==1){
                    isPossible = true;
                    break;
                }
            }
            if(isPossible){
                break;
            }
        }
        cout<<(isPossible? "YES\n" : "NO\n");
    }
    return 0;
}