//                                  **************** UNION ********************
// #include<stdio.h>
// union test{
//     int x,y;
// }tt;             //tt is a variable here of data type union test.

// int main(){
//     tt.x=2;      //both x and y gets the same value i,e, 2.
//     tt.y=10;     //both x and y gets the same value i,e, 10.
//     printf("%d",tt.x);

    
//     return 0;
// }

// Union with pointers

// #include<stdio.h>
// #include<string.h>
// typedef union student{
//     int roll;
//     //char name[100];
//     char * name;
// }std;

// int main(){
//     std st1;
//     std * ptr;
//     ptr = &st1;
//     st1.roll=1;
//     st1.name="Harshil";
//     //printf("%s",(*ptr).name);
//     printf("Roll no: %d and name: %s",st1.roll,st1.name);
    
//     return 0;
// }


//        **************** ENUMERATIONS ******************
#include<stdio.h>
enum days {sun,mon,tue,wed,thur};
int main(){
    enum days d1;
    d1=thur;
    printf("%d",d1);
    return 0;
}