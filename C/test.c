/*#include<stdio.h>
int main()
{
    int num1;
    int num2;
    float num3;
    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);
    printf("Num1= %d\n", num1);
    printf("Num2= %d\n", num2);
    num3= num1 + num2;
    printf("Total= %5.3f", num3);
}*/

// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() 
// {
	
//     char s[100];
//     printf("Enter sample text: ");
//     scanf("%[^\n]%*c", &s);
  	
//     printf("Hello, World!\n%s",s);  
//     return 0;
// }

//3. Temperature table.
// #include<stdio.h>
// #include<limits.h>
// int max(int temperature[31][10]){
//     int maxElement = 0;
//     for(int i=0;i<31;i++){
            
//         for(int j=0;j<10;j++){
//             if(temperature[i][j]> maxElement){                  //To get highest temp.
//                maxElement=temperature[i][j];
//             }
//         }
//     }
//         return maxElement;
// }
// int min(int temperature[31][10]){
//     int minElement = 10000;
//     for(int i=0;i<31;i++){                                      //To get lowest temp.
            
//         for(int j=0;j<10;j++){
//             if(temperature[i][j]< minElement){
//                minElement=temperature[i][j];

//             }
//         }
//     }
//         return minElement;
// }
// int main(){
//     int temperature[31][10];
//     printf("Enter temperature records for 10 cities for January Month.\n");
//     for(int i=0;i<31;i++){
//         printf("Day %d: ",i+1);
//         for(int j=0;j<10;j++){
//             scanf("%d", &temperature[i][j]);
//         }
//     }
//     printf("The maximum temperature recorded in the month on January is:\n%d degrees", max(temperature));
//     for(int i=0;i<31;i++){
//         for(int j=0;j<10;j++){
//             if(temperature[i][j]==max(temperature)){
//                 printf("\nDay: %d\tCity: %d", i+1, j+1);
//             }
//         }
//     }
//     printf("\nThe minimum temperature recorded in the month on January is:\n%d degrees", min(temperature));
//     for(int i=0;i<31;i++){
//         for(int j=0;j<10;j++){
//             if(temperature[i][j]==min(temperature)){
//                 printf("\nDay: %d\tCity: %d", i+1, j+1);
//             }
//         }
//     }  

//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int t,n,x,ct;
//     scanf("%d",&t);
//     while(t--){
//         scanf("%d %d",&n,&x);
//         ct=n-(n/3);
//         printf("%d\n",ct);
//     }
//     return 0;
// }

#include<stdio.h>
#include<math.h>
int main(){
    printf("%x", 1234.10);
    return 0;
}