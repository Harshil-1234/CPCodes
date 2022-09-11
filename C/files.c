// #include<stdio.h>

// int main(){
//     FILE *ptr;
//     int num,num2; //we wrote 34 in sample file and now want to copy it in num variable.
//     ptr= fopen("sample.txt","r");
//     if(ptr==NULL){
//         printf("This file doesnot exists.");
//     }
//     else{
//         fscanf(ptr,"%d %d",&num,&num2);
//         fclose(ptr);
//         printf("The value of num and num2  is: %d %d", num, num2);
//        // ptr= fopen("sample.txt","w");
//     }
//     return 0;
// }

//Writing in a file.
// #include<stdio.h>

// int main(){
//     int num=45;
//     FILE * fptr;
//     fptr=fopen("Generated.txt","w");
//     fprintf(fptr,"The number is: %d", num);
//     fclose(fptr);

//     return 0;
// }

#include<stdio.h>

int main(){
    int num=100;
    char ch[100];
    FILE * ptr;
    ptr = fopen("Practice.txt","w+");
    // while(ch!=EOF){
    //     ch=fgetc(ptr);
    //     printf("%c",ch);
    // }
    //fprintf(ptr,"\t The new number is %d",num);
    fputs(gets(ch),ptr);
    fclose(ptr);
    //printf("%d",num);
    return 0;
}

//*************************** PRACTICE SET ************************

//1. Read 3 integers from a file.
// #include<stdio.h>

// int main(){
//     FILE * ptr;
//     int num1,num2,num3;
//     ptr=fopen("sample.txt","r");
//     fscanf(ptr,"%d%d%d",&num1,&num2,&num3);
//     fclose(ptr);
//     printf("The three integers read from the file are: %d,%d,%d",num1,num2,num3);
//     return 0;
// }