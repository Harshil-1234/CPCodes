//Array of 10 marks, show ptr+2 points to 3rd element.(ptr is pointer)
// #include<stdio.h>
// int main(){
//     int marks[10]={1,2,3,4,5,6,7,8,9,10};
//     int *p=&marks;
//     printf("The third element of array is: %d\n",marks[2]);
//     printf("The third element of array is: %d",*p+2);

//     return 0;
// }

//A function to reverse array passed to it.
#include<stdio.h>
int main(){
    char arr[]={1,2,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(int);
    int start =0;
    int end = size -1;
    while(start<end){
        int temp = arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    for(int i=0; i < size ; i++){
        printf("%c\t",arr[i]);
    }
    return 0;
}