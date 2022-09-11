//To calculate nth element of a fibonacci series(using recursion)
// #include<stdio.h>
// int fibonacci(int n){
//     int fib;
//     if (n<=1){
//         return 1;

//     }else{
//        fib= fibonacci(n-1)+fibonacci(n-2); 
//     }
//     return fib;
// }
// int main(){
//     int n;
//     printf("Input a number.\n");
//     scanf("%d",&n);
//     printf("The %dth fibonacci element is:\n",n);
//     printf("%d",fibonacci(n));
//     return 0;

// }

//To calculate sum of first n natural numbers
// #include<stdio.h>
// int sum(int n){
//     int total;
//     if (n==1)
//         return 1;
//     else if (n!=0)
//         total=n+sum(n-1);
//     return total;
// }
// int main(){
//     int n;
//     printf("Enter a natural number\n");
//     scanf("%d",&n);
//     printf("The sum of first %d natural numbers is\n",n);
//     printf("%d",sum(n));

//     return 0;
// }

//To print a right angle triangle of stars using function. Odd stars in every line.
// #include<stdio.h>
// void pattern(int);
// int main(){
//     int n;
//     scanf("%d",&n);
//     pattern(n);
//     return 0;
// }
// void pattern(int n){
//     int i;
//     if (n==1){
//         printf("*\n");
//         return;
//     }
//     pattern(n-1);
//     for(i=0;i<((2*n)-1);i++){
//         printf("*");
//     }
//     printf("\n");
//}

//Do above question using for loop.
// #include<stdio.h>
// int main(){
//     int n,i,j;
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         for(j=1;j<=(2*i-1);j++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }

//Finding Factorial of a number.
// #include<stdio.h>
// int factorial(int n){
//     //int fact;
//     if(n==1){
//         return 1;
//     }
//     else{
//         return n*factorial(n-1);
//     }
// }
// int main(){
//     int num;
//     scanf("%d",&num);
//     printf("%d",factorial(num));
    
//     return 0;
// }

//Printing whole Fibonnaci series

// **************** WITH FUNCTION ********************
// **************** WITH FUNCTION ********************
#include<stdio.h>
void fibonacci(int n){
    int a=0,b=1,c;
    while(a<n){
        c=a+b;
        printf("%d\t",a);
        a=b;
        b=c;
    }
}

int main(){
    int num;
    scanf("%d",&num);
    fibonacci(num);
    return 0;
}


// *********** WITHOUT FUNCTION *****************
// #include<stdio.h>

// int main(){
//     int a=0,b=1,c;
//     while(a<30){
//         c=a+b;
//         printf("%d\t",a);
//         a=b;
//         b=c;
//     }

//     return 0;
// }