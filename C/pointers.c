#include<stdio.h>

int main(){
  int t,ct;
  scanf("%d",&t);
  while(t--){
    int n,k;
    scanf("%d %d",&n,&k);
    int items[n];
    for(int i=0;i<n;i++){
      scanf("%d",&items[i]);
    }
    for(int k=0;k<n;k++){
        ct=0;
        if((k/2)>items[k]){
            ct=ct+1;
        }
    }
    printf("%d\n",ct);
  }
  return 0; 
}