// 10 -> 2*5
// Highest Prime = 5
// Lowest Prime = 2

#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
vector<bool> isPrime(N,1);
vector<int> lp(N,0), hp(N,0);

int main(){
    isPrime[0]=isPrime[1]=0;
    for(int i=2;i<=N;i++){
        if(isPrime[i]){
            //Ek Prime number ka lowest and highest vo khud hai.
            lp[i] = hp[i] = i;

            for(int j = 2*i;j<N;j+=i){
                isPrime[j] = 0;

                //Sbhi i ke multiples mei i store hojaega.
                hp[j] = i;

                if(lp[j]==0){

                    //Sbse pehle kisi bhi number ka lowest prime divisor agega making 
                    // lp[i] != 0 
                    lp[j] = i;
                }

            }
        }
    }

    cout<<"Number"<<" "<<"Lowest Prime"<<" "<<"Highest Prime"<<endl;
    for(int i =1;i<=100;i++){
        cout<<i<<" "<<lp[i]<<" "<<hp[i]<<endl;
    }
    
    return 0;
}