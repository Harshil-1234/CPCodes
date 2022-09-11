// ******Printing rectangle pattern with i rows, j columns******
// #include<iostream>
// using namespace std;

// int main(){
//     int r,c;
//     cout<<"Enter numb of rows: ";cin>>r;
//     cout<<"Enter numb of column: ";cin>>c;
//     for(int i=1;i<=r;i++){ //To print rows
//         for(int j=1;j<=c;j++){
//             cout<<"*";
            
//         }
//         cout<<endl;

//     }
//     return 0;
// }

//********* HOLLOW RECTANGLE PATTERN(Only BORDERS)***********
// #include<iostream>
// using namespace std; 

// int main(){
//     int row,col;
//     cin>>row>>col;
//     for(int i=1;i<=1;i++){              //TO PRINT FIRST ROW(UPPER BORDER)
//         for(int j=1;j<=col;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }

//     for(int i=2;i<=row-1;i++){
//         for(int j=1;j<=col;j++){
//             if(j==1 || j==col){ 
//                 cout<<"*";}
//             else{
//             cout<<" ";}
//         }
//         cout<<endl;
//     }

//     for(int i=row;i<=row;i++){             //TO PRINT LAST ROW(LOWER BORDER)
//         for(int j=1;j<=col;j++){
//             cout<<"*";
//         }
//     }
    
//     return 0;
// }

//****** INVERTED HALF PYRAMID *******
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for(int i=n;i>=1;i--){
//         for(int j=1; j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//******* HALF PYRAMID RIGHT TO LEFT********
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1; j<=n;j++){
//             if(j<=n-i){
//                 cout<<" ";
//             }
//             else{
//                 cout<<"*";}
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//****** HALF PYRAMID USING NUMBERS *******
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1; j<=i;j++){
//             cout<<i;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//****** FLOYD"S TRIANGLE *******
// #include<iostream>
// using namespace std;

// int main(){
//     int x=0,n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1; j<=i;j++){
//             //x++;
//             cout<<++x;
//             cout<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//******* BUTTERFLY PATTERN***********
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1; j<=i;j++){
//             cout<<"*";
//         }
//         int space= 2*n-2*i;                 //***** UPPER PART*******
//         for(int j =1; j<=space;j++){
//             cout<<" ";
//         }
//         for(int j=1; j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i=n;i>=1;i--){
//         for(int j=1; j<=i;j++){
//             cout<<"*";
//         }
//         int space= 2*n-2*i;                 //****** LOWER PART *******
//         for(int j =1; j<=space;j++){
//             cout<<" ";
//         }
//         for(int j=1; j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//*********** ADVANCED PROBLEMS ****************
//******* PRINTING INVERTED NUMBERS ********
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
    
//     cin>>n;
//     for(int i=n;i>=1;i--){
//         int x=1;
//         for (int j=i;j>=1;j--){
//             cout<<x++<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//****** Alternate 0/1 in HALF PYRAMID *******
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for (int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             if((i+j)%2==0){
//                 cout<<1;
//             }
//             // else if(i%2!=0 && j%2!=0){ i==j || i%2!=0 && j%2!=0 || i%2==0 && j%2==0
//             //     cout<<1;
//             // }
//             // else if(i%2==0 && j%2==0){
//             //     cout<<1;
//             // }
//             else{
//                 cout<<0;
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//******* RHOMBUS PATTERN **********
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         int space = n-i;
//         for(int j=1; j<=space;j++){
//             cout<<" ";

//         }
//         for(int j=1; j<=n;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }

//****** NUMBER TRIANGLE DIAGONAL ARRANGEMENT *********
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         int space = n-i;
//         for(int j=1; j<=space;j++){
//             cout<<" ";

//         }
//         int x=1;
//         for(int j=1; j<=i;j++){
            
//             cout<<x++<<" ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }

//******* PALINDROMIC PATTERN **********
// #include<iostream>
// using namespace std; 

// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         int space = n-i;
//         int j;
//         for(j=1; j<=space;j++){
//             cout<<"  ";

//         }
//         int k=i;
//         for(;j<=n;j++){
//             cout<<k--<<" ";
//         }
//         k=2;
//         for(;j<=n+i-1;j++){
//             cout<<k++<<" ";
//         }

//         cout<<endl;
//     }
//     return 0;
// }

//******** DIAMOND PATTERN **********
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for (int i =1; i<=n;i++){
//         int space = n-i;
//         int j;
//         for(j=1; j<=space;j++){
//             cout<<"  ";

//         }
//         int k=i;                        //****** UPPER PART ******
//         for(;j<=n;j++){
//             cout<<"*"<<" ";
//         }
//         k=2;
//         for(;j<=n+i-1;j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
        
//     for (int i =n; i>=1;i--){
//         int space = n-i;
//         int j;
//         for(j=1; j<=space;j++){
//             cout<<"  ";

//         }
//         int k=i;                           //******* LOWER PART ******** 
//         for(;j<=n;j++){
//             cout<<"*"<<" ";
//         }
//         k=2;
//         for(;j<=n+i-1;j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;

//     }
//     return 0;
// }

//********** ZIG-ZAG Pattern ***********
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>> n;
//     for(int i=1;i<=3;i++){
//         for(int j=1;j<=n;j++){
//             if((i+j)%4==0 ||(( i==2) && (j%4==0))){
//                 cout<<"*";
//             }else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }