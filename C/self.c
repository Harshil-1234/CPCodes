/*#include<stdio.h>

int main(){
    float tax = 0, income;
    
    printf("Enter your income\n");
    scanf("%f", &income);
    
    if(income>=25000 && income<=50000){
    	tax = tax + 0.20 * (income - 25000);
	}
	
	else if(income >= 50000 && income <= 80000){
		tax = tax + 0.30 * (income - 50000);
	}
	
	else if(income<=80000){
	
		tax = tax + 0.50 * (income - 80000);
	}
	
	printf("You have to pay tax %f\n", tax);

   
    return 0;
}*/


// C program to read strings
  
// #include<stdio.h>
  
// int main(){
//     char str[50];
//     scanf("%s",str);
//     printf("%s",str);
  
//     return 0;
// }

// #include<stdio.h>
// #include<limits.h>
// int max(int arr[2][2]){
//     int maxElement = 0;
//     for(int i=0;i<2;i++){
            
//         for(int j=0;j<2;j++){
//             if(arr[i][j]> maxElement){
//                maxElement=arr[i][j];

//             }
//         }
//     }
//         return maxElement;
// }
// int min(int arr[2][2]){
//     int minElement = 10000;
//     for(int i=0;i<2;i++){
            
//         for(int j=0;j<2;j++){
//             if(arr[i][j]< minElement){
//                minElement=arr[i][j];

//             }
//         }
//     }
//         return minElement;
// }
// int main(){
//     int arr[2][2]={{1,2},{3,4}};
    
//     printf("%d",max(arr));
//     printf("%d",min(arr));
//     return 0;
// }

// #include<stdio.h>
// #include<limits.h>
// int max(int temperature[31][10]){
//     int maxElement = 0;
//     for(int i=0;i<2;i++){
            
//         for(int j=0;j<2;j++){
//             if(temperature[i][j]> maxElement){                  //To get highest temp.
//                maxElement=temperature[i][j];
//             }
//         }
//     }
//         return maxElement;
// }
// int min(int temperature[31][10]){
//     int minElement = 10000;
//     for(int i=0;i<2;i++){                                      //To get lowest temp.
            
//         for(int j=0;j<2;j++){
//             if(temperature[i][j]< minElement){
//                minElement=temperature[i][j];

//             }
//         }
//     }
//         return minElement;
// }
// int main(){
//     int temperature[3][5];
//     printf("Enter temperature records for 10 cities for January Month.\n");
//     for(int i=0;i<3;i++){
//         printf("Day %d: ",i+1);
//         for(int j=0;j<5;j++){
//             scanf("%d", &temperature[i][j]);
//         }
//     }
//     printf("The maximum temperature recorded in the month on January is:\n%d", max(temperature));
//     printf("\nThe minimum temperature recorded in the month on January is:\n%d", min(temperature));

//     return 0;
// }

// #include<stdio.h>
// void type(char);
// int main(){
//     char c;
//     c=getchar();
//     type(c);
    
//     return 0;
// }
// void type(char c){
//     if(c=='a'|'e'|'i'|'o'|'u'){
//         printf("Character is a vowel.");
//     }
//     else{
//         printf("Character is a consonant.");
//     }
    
// }

#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
    // int x =10;
    // char * s="Harshil";
    // printf("%s",s);
    // int i=3;
    // printf("%d",9);
    char str[100];
    scanf("%4s",str);
    printf("%s",str);
    return 0;
}