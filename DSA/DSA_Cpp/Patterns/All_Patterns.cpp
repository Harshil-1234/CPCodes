//******* PATTERN PROBLEMS FROM STRIVER DSA SHEET ************
#include<bits/stdc++.h>
using namespace std;

void pattern19(int n){
    //upper half
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j=0;j<(2*(n-i));j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }cout<<endl;
    }

    //lower half
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j=0;j<(2*(n-i));j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }cout<<endl;
    }
}
void pattern20(int n){
    //upper half
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        for(int j=0;j<(2*(n-i));j++){
            cout<<" ";
        }
        for(int j=0;j<i;j++){
            cout<<"*";
        }cout<<endl;
    }

    //lower half
    for(int i=n-1;i>=1;i--){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        for(int j=0;j<(2*(n-i));j++){
            cout<<" ";
        }
        for(int j=0;j<i;j++){
            cout<<"*";
        }cout<<endl;
    }
}
void pattern21(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            //if first or last column
            if(i==0||i==n-1){
                cout<<"*";
            }
            else{
                //if first or last column
                if(j==0||j==n-1)
                    cout<<"*";
                else
                    cout<<" ";
            }
        }
        cout<<endl;
    }
}
void pattern22(int n){
    //logic-> first subtract all elements of output from n
    // you will see each element represent minimum distance from all 4 directions to that point
    //then after finding that distance, subtract it again from n to get the desired output
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            //distance from all 4 directions
            int top = i;
            int left = j;
            int right = (2*n - 2) - j;
            int bottom = (2*n -2)-i;

            cout<<(n - min(min(top,bottom),min(left,right)))<<" ";
        }cout<<endl;
    }
}
int main(){
    // pattern19(20);
    // pattern20(5);
    // pattern21(5);
    pattern22(5);
    return 0;
}
