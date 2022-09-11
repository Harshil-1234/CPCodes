/*USING &z gives error as x is int and we can't store address in it.
Use *z to store value of y in it*/

// #include<stdio.h>

// int main(){
//     int x,y,*z;
//     z=&y;
//     x=&z;  
//     printf("%d %d",x,y);
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int x=10;
//     int a = ++x + x++ + x;  //11+11+35
//     printf("%d",a);
//     return 0;
// }

/* Loop runs from 0 to 9 and prints i++ */

// #include<stdio.h>

// int main(){
//     for(int i =1;i<10;printf("%d",i++));
//     return 0;
// }


/* INFINITE LOOP */
// #include<stdio.h>

// int main(){
//     for(;1;);
//         printf("x");

//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int a=10,b=10;
//     if(a=5){
//         printf("YAYYYY\n");
//         b--;
//         printf("%d",b);
//     }
//     printf("\n%d %d",a,b--); 
//     printf("\n%d",b);
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int x,y,t;
//     scanf("%d%d",&x,&y);
//     t=x,x=y,y=t;
//     printf("%d %d",x,y); 

//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>

// int main(){
//     char s[100]="this is a good boy";
//     printf("%s",s);
//     return 0;
// }

#include<stdio.h>

int main(){
    int x,a=5;
    x=a++;
    printf("%d",a);
    return 0;
}