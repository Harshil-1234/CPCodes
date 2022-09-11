// TIME COMPLEXITY OF LINEAR SEARCH IS O(n)

#include<stdio.h>
int linearSearch(int arr[], int size, int element){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
    
}

int main(){
    int arr[]={1,4,5,6,2,3,9,8,0,7};
    int element;
    printf("Enter element to be searched\n");
    scanf("%d",&element);
    int size = sizeof(arr)/sizeof(int);        //to print length of array.
    int search =linearSearch(arr,size,element);
    if (search == -1)
        printf("The element %d is not present in the array",element);
    else
        printf("The element %d is present at %d position",element, (search+1));
    
    return 0;
}