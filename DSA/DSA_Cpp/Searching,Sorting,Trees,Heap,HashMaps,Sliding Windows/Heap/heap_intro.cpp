//Some properties of array when used for heap implementation
/*
P1 -> every node's left child is present at index: 2*i (i is index of node)
      every node's right child is present at index: 2*i + 1 (i is index of node)
      every node's parent is present at index: i/2 (i is index of node)

    0th index of array is kept empty
*/
#include<bits/stdc++.h>
using namespace std;

class heap{
    public:
        int arr[50];
        int size;

        heap(){
            this->size = 0;
            arr[0] = -1;
        }

        //inserting into the heap using array
        void insert(int val){
            size++;
            int index = size;
            arr[index] = val;

            //loop to bring the current inserted element in its right place
            while(index>1){
                int parentIndex = index/2;
                if(arr[parentIndex]<arr[index]){
                    swap(arr[parentIndex],arr[index]);
                    index = parentIndex;
                }
                else{
                    return;
                }
            }
        }

        void print(){
            for (int i = 1; i <=size; i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;   
        }

        void deleteFromHeap(){
            if(size == 0){
                cout<<"Empty HEAP"<<endl;
                return;
            }
            //putting last node in place of first node;
            arr[1] = arr[size];

            //last node no longer required
            size--;

            //taking the first node to its correct position
            int i=1;
            while(i<size){
                int leftIndex = 2*i;
                int rightIndex = 2*i+1;
                if(arr[i]<arr[leftIndex]&& leftIndex<size){
                    swap(arr[i],arr[leftIndex]);
                    i = leftIndex;
                }
                else if(arr[i]<arr[rightIndex]&& rightIndex<size){
                    swap(arr[i],arr[rightIndex]);
                    i = rightIndex;
                }
                else
                    return;
            }

        }
};

void heapify(int arr[],int n,int i){
    int largest = i;
    int leftIndex = 2*i;
    int rightIndex = 2*i+1;
    if(arr[largest] < arr[leftIndex]&& leftIndex <= n){
        largest = leftIndex;
    }
    if(arr[largest] < arr[rightIndex]&& rightIndex <= n){
        largest = rightIndex;
    }

    if(largest!=i){
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }
}

void HeapSort(int arr[],int n){
    int size = n;

    while(size>1){
        //step1: swpap first and last element
        swap(arr[1],arr[size]);

        //as we sorted the last element no need to check it again reduce the size
        size--;

        //bringing root node to its correct position -> converting it back to a proper HEAP. 
        //converting the remaining array left to be sorted to a HEAP.
        heapify(arr,size,1);

    }
}

int main(){
    cout<<endl<<"             ------ MAX HEAP ALGORITHM USED -------"<<endl<<endl;
    cout<<"Insertion in Heap Class"<<endl;
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);

    cout<<endl<<"Printing the Heap Class"<<endl;
    h.print();

    cout<<endl<<"Delete the Root Element in Heap"<<endl;
    h.deleteFromHeap();

    h.print();

//  HEAPIFY ALGORITHM
    int arr[6]={-1,54,53,55,52,50};
    int n = 5;

    cout<<endl<<"Original Array"<<endl;
    for (int i = 1; i <=n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    //HEAP Creation
    for (int i = n/2; i > 0; i--)
    {
        heapify(arr,n,i);
    }

    cout<<endl<<"Heapified Array"<<endl;
    for (int i = 1; i <=n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    
    //Heap Sort Function
    HeapSort(arr,n);

    cout<<endl<<"Heap Sorted Array"<<endl;
    for (int i = 1; i <=n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}