// #include<stdio.h>
// #include<string.h>
// int main(void){
// 	int t;
// 	scanf("%d",&t);
// 	for(int j=1;j<=t;j++){
// 		char k[100];
// 		scanf("%s",&k);
// 		int ind=strlen(k)-1;
//         if (tolower(k[ind])=='y')
//             printf("Case #%d: %s is ruled by nobody.\n",j,k);
//         else if (tolower(k[ind])=='a' || tolower(k[ind])=='e' || tolower(k[ind])=='i' || tolower(k[ind])=='o' || tolower(k[ind])=='u')
//             printf("Case #%d: %s is ruled by Alice.\n",j,k);
//         else
//             printf("Case #%d: %s is ruled by Bob.\n",j,k); 
//     }
// }

#include <stdio.h>
 
int main()
{
  int m, n, p, q, c, d, k, sum = 0;
  int first[10][10], second[10][10], multiply[10][10];
 
  printf("Enter number of rows and columns of first matrix\n");
  scanf("%d%d", &m, &n);
  printf("Enter elements of first matrix\n");
 
  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      scanf("%d", &first[c][d]);
 
  printf("Enter number of rows and columns of second matrix\n");
  scanf("%d%d", &p, &q);
 
  if (n != p)
    printf("The multiplication isn't possible.\n");
  else
  {
    printf("Enter elements of second matrix\n");
 
    for (c = 0; c < p; c++)
      for (d = 0; d < q; d++)
        scanf("%d", &second[c][d]);
 
    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++) {
        for (k = 0; k < p; k++) {
          sum = sum + first[c][k]*second[k][d];
        }
 
        multiply[c][d] = sum;
        sum = 0;
      }
    }
 
    printf("Product of the matrices:\n");
 
    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++)
        printf("%d\t", multiply[c][d]);
 
      printf("\n");
    }
  }
 
  return 0;
}

