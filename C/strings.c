// #include<stdio.h>   
// int main(){
//     char s[]= "HARSHIL";
//     //printf("%s",s);
//     char *ptr=s;
//     while(*ptr!='\0'){
//         printf("%c",*ptr);
//         ptr++;
//     }
//     return 0;
// }

//Slicing a string using a function.

// #include<stdio.h>
// void slice(char * s,int a,int b){
//     char s2[100];
//     int i,j=0;
//     for (i=a;i<b;i++){
//         s2[j]=s[i];
//         j++;
//     }
//     s2[j]='\0';
//     printf("The sliced string is: %s", s2);
// }
// int main(){
//     char s[]="Harshil";
//     slice(s,1,4);
    
//     return 0;
// }

//Encrypting and decrytping a string.

// #include<stdio.h>
// void encrypt(char *c){
//     char *ptr=c;
//     while(*ptr!='\0'){
//         *ptr=*ptr+1;
//         ptr++;
//     }
// }
// void decrypt(char *s){
//     char *ptr=s;
//     while(*ptr!='\0'){
//         *ptr=*ptr-1;
//         ptr++;
//     }
// }
// int main(){
//     char s[100];
//     printf("Enter the string to be encrypted:\n");
//     gets(s);
//     encrypt(s);
//     printf("The encrypted string is: %s",s);
//     decrypt(s);
//     printf("\nThe decrypted string is: %s",s);



    
//     return 0;
// }

//To count occurence of a character in string.

// #include<stdio.h>
// #include<string.h>

// int main(){
//     int i,ct=0;
//     char ch, s[1000];
//     printf("Enter a string.\n");
//     gets(s);
//     printf("Enter any character to count.\n");
//     ch=getchar();
//     for(i=0;i<strlen(s);i++){
//         if(ch==s[i])
//         ct++;
//     }
//     printf("The character %c occurs %d times",ch,ct);
    

//     return 0;
// }

//To check presence of a character in string

#include<stdio.h>
#include<string.h>

int main(){
    int i,ct=0;
    char ch, s[1000];
    printf("Enter a string.\n");
    gets(s);
    printf("Enter any character to check.\n");
    ch=getchar();
    for(i=0;i<strlen(s);i++){
        if(ch==s[i])
        ct++;
    }
    if(ct>0)
    printf("The character %c is Present in the string.",ch);
    else
    printf("The character %c is Not Present in the string.",ch);
    

    return 0;
}