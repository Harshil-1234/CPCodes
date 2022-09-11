#include<iostream>
#include<math.h>         
using namespace std;
long long int poww(long long int r,long long int n){
        if(n==1){
            return 1;
        }
        else{
            return(r*poww(r,n-1));
        }
}
long long int GP(long long int N, long long int A, long long int R){
    long long int cr=R;
    long long int nt=N;
    long long int ans = poww(cr,nt);
    return A*ans;
}

int main(){
    int N,A,R;
    cin>>A>>R>>N;
    int aa= GP(N,A,R);
    cout<<aa<<endl;
    return 0;
}