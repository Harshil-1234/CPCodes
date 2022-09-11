//Making Stack code using class instead of STL
#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
        int *arr;
        int top;
        int size;

        Stack(int size){
            //stores value of size given to constructor in line 9 size var(main variable)
            this->size = size;
            arr = new int[size];
            top = -1;
        }

        void push(int element){
            if(size - top >1){
                top++;
                arr[top] = element;
            }
            else{
                cout<<"Stack OverFlow"<<endl;
            }
        }

        void pop(){
            if(top>=0){
                top--;
            }
            else{
                cout<<"Stack UnderFlow"<<endl;
            }
        }

        int peek(){
            if(top>=0)
                return arr[top];
            else{
                cout<<"Stack is Empty"<<endl;
                return -1;
            }
        }

        bool isEmpty(){
            if(top==-1){
                return true;
            }
            else{
                return false;
            }
        }

};

int main(){
    Stack st(5);

    st.push(22);
    st.push(43);
    st.push(15);

    cout<<st.peek()<<endl;

    st.pop();

    cout<<st.peek()<<endl;

    st.pop();

    cout<<st.peek()<<endl;

    st.pop();

    cout<<st.peek()<<endl;

    if(st.isEmpty()){
        cout<<"Stack is Empty"<<endl;
    }else{
        cout<<"Stack is NOT Empty"<<endl;
    }

    
    // stack<int>s;
    // s.push(2);
    return 0;
}