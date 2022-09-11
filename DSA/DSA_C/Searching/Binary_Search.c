// TIME COMPLEXITY IS O(logn)
// *********************ARRAY SHOULD ALWAYS BE SORTED******************


#include<stdio.h>

int binarysearch(int arr[], int size, int element){
    int low,mid,high;
    low=0;
    high= size - 1;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==element){
            return element;
        }
        if(arr[mid]<element){
            low=mid+1;           // mid+1 becoz we already checked on mid and no need to include it again.
        }
        else{
            high = mid - 1;       // mid-1 becoz we already checked on mid and no need to include it again.
        }
    }

    return -1;

}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int element;
    printf("Enter element to be searched\n");
    scanf("%d",&element);
    int size = sizeof(arr)/sizeof(int);        //to print length of array.
    int search =binarysearch(arr,size,element);
    if (search == -1)
        printf("The element %d is not present in the array",element);
    else
        printf("The element %d is present at %d position",element, search);
    
    return 0;
}
