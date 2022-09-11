//To create a 2d vector and find sum for it.
// #include<stdio.h>
// struct vector{
//     int x;
//     int y;
// };
// struct vector sumvector(struct vector v1,struct vector v2){
//     struct vector result ;
//     result.x=v1.x+v2.x;
//     result.y=v1.y+v2.y;
//     return result;
// };
// int main(){
//     struct vector v1,v2,sum;
//     scanf("%d %d", &v1.x,&v1.y);
//     printf("The dimension of v1 x is:%d " ,v1.x);
//     printf("\nThe dimension of v1 y is:%d \n" ,v1.y);
//     scanf("%d %d", &v2.x,&v2.y);
//     printf("The dimension of v2 x is:%d " ,v2.x);
//     printf("\nThe dimension of v2 y is:%d " ,v2.y);

//     sum=sumvector(v1,v2);    
//     printf("\nX dim result is:%d , Y dim result is:%d ",sum.x, sum.y );

    
//     return 0;
// }



#include<stdio.h>
typedef struct people{
    char  name[100];
}ppl;
int main(){
    ppl p1;
    scanf("%s",p1.name);
    //gets(p1.name);
    //puts(p1.name);
    printf("%s",p1.name);


    return 0;
}