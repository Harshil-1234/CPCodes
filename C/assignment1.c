// 1.Write a C program to find simple interest on a given principal amount, rate of interest and time.
// #include<stdio.h>
// int main(){
//     float p,i;
//     int t;
//     printf("Enter principal amount ");
//     scanf("%f",&p);
//     printf("Enter rate of interest ");
//     scanf("%f",&i);
//     printf("Enter the time duration ");
//     scanf("%d",&t);
//     float si=(p*i*t)/100;
//     printf("The simple interest applied is %0.2f" ,si);
//     return 0; 
// }

//2.Write a C program to swap two numbers using functions.
// #include<stdio.h>
// void swap(int * x,int * y){
//     int ex= *x;
//     *x=*y;
//     *y=ex;
// }
// int main(){
//     int a,b;
//     printf("Enter two numbers to be swapped ");
//     scanf("%d %d",&a,&b);
//     printf("Before swapping:\nNumber 1= %d\nNumber 2= %d",a,b);
//     swap(&a,&b);
//     printf("\nAfter swapping:\nNumber 1= %d\nNumber 2= %d",a,b);
//     return 0;
// }

//3.Write a c program to print ASCII value of all characters.
// #include <stdio.h>

// int main()
// {
//     int i;
//     for(i=0; i<=127; i++) 
//     {
//         printf("The character at ASCII value %d = \t%c\n", i, i);
//     }

//     return 0;
// }

//4.Write a C program to check whether given character is a digit or a character in lowercase or 
//uppercase alphabet.
// #include <stdio.h>

// int main()
// {
//     char ch;
//     printf("Enter any character: ");
//     scanf("%c", &ch);


//     if(ch >= 'A' && ch <= 'Z')
//     {
//         printf("'%c' is uppercase alphabet.", ch);
//     }
//     else if(ch >= 'a' && ch <= 'z')
//     {
//         printf("'%c' is lowercase alphabet.", ch);
//     }
//     else
//     {
//         printf("'%c' is a digit. ", ch);
//     }

//     return 0;
// }

//5.Write a C program to print the all the prime numbers between 1 to 300.
// #include <stdio.h> 
// int main() 
// { 
//     int i,a,count; 
//     printf("Prime numbers between 1 and 300 are : \n"); 
//     for (i=1;i<=300;i++) 
//     { 
// 	    count=0; 
// 		     for (a=1;a<=i;a++) 
// 		    { 
//  			    if (i%a==0) 
//  				    count++; 
//  		    } 
// 	    if (count==2) 
// 		    printf("%d\t",i); 
//     } 
//  return 0; 
// } 

//6.Write a C program to check given number is palindrome number or not.
// #include<stdio.h>
// int main(){
//     int i;
//     int sum,r=0,t;
//     printf("Enter the number: ");
//     scanf("%d",&i);
//     t=i;
//     while(i>0){
//         r=i%10;
//         sum=(sum*10)+r;
//         i=i/10;
//     }
//     if(t==sum){
//         printf("The entered number is Palindrome.");
//     }else{
//         printf("The entered number is not Palindrome.");
//     }
//     return 0;
// }

//7.Write a C program to find out the power of number taking both number and power as input from
//user.
// #include<stdio.h>
// int main(){
//     int r=0,n,p;
//     int t=1;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     printf("Enter the power: ");
//     scanf("%d",&p);
//     while (p != 0) {
//         t *= n;
//         --p;
//     }
//     r+=t;
//     printf("The power of number as entered: %d",r);
//     return 0; 
// }

//8.Write a C program for matrix addition.
// #include <stdio.h>
// int main()
// {
//     //fill your code
//     int m, n;
//     scanf("%d %d",&m,&n);
//     int i, j;
//     int mat1[m][n], mat2[m][n], mat3[m][n];
//     for(i = 0; i < m; i++)
//     {
//         for(j = 0; j < n; j++)
//         scanf("%d",&mat1[i][j]);
//     }
//     for(i = 0; i < n; i++)
//     {
//         for(j = 0; j < n; j++)
//         scanf("%d",&mat2[i][j]);
//     }

//     for(i = 0; i < m; i++)
//     {
//         for(j = 0; j < n; j++)
//         {
//         mat3[i][j] = mat1[i][j] + mat2[i][j];
//         }
//     }

//     for(i = 0; i < m; i++)
//     {
//         for(j = 0; j < n; j++)
//         printf("%d ", mat3[i][j]);
//         // printf("\n");
//     }

//     return 0;
// }

// 9.Write a C program to check whether a triangle is valid or not, when the three sides of the triangle
// are entered through the keyboard. Also, check whether the triangle is equilateral, isosceles or right-
// angled triangle.

// #include<stdio.h>
// int main(){
//     int s1,s2,s3;
//     printf("Enter first side of the triangle: ");
//     scanf("%d",&s1);
//     printf("Enter second side of the triangle: ");
//     scanf("%d",&s2);
//     printf("Enter third side of the triangle: ");
//     scanf("%d",&s3);
//     if(((s1+s2)>s3) && ((s1+s3)>s2) && ((s3+s2)>s1) ){
//         printf("The triangle is valid.");
//         if(s1==s2 && s2==s3 && s3==s1){
//             printf("\nThe triangle is an equilateral triangle.");
//         }else if(s1==s2 || s2==s3 || s3==s1){
//             printf("\nThe triangle is an isoceles triangle.");
//         }else if((s1*s1)==((s2*s2)+(s3*s3)) || (s2*s2)==((s1*s1)+(s3*s3)) || (s3*s3)==((s2*s2)+(s1*s1))){
//             printf("\nThe triangle is a right angled triangle.");
//         }
//     }else{
//         printf("The tiangle is not valid");
//     }
//     return 0;

// }