#include<iostream>
using namespace std;
// int main(){
    // create a pointer

    // int a=10;
    // int *ptr=&a;

    // cout<<ptr<<endl;  // address of a
    // cout<<&a<<endl;  // address of a
    // cout<<&ptr<<endl;  // ptr address

    // int b=10.5;
    // int *ptr=&b;

    // cout<<b<<endl;
    // cout<<ptr<<endl;




    // pointer  to pointer ......................................!!!!!!
    // int a=10;
    // int *ptr=&a;
    // int **parptr=&ptr;
    // cout<<&ptr<<endl;  // address
    // cout<<parptr<<endl; // value


    // *  dereference operators
    // int a=10;
    // int *ptr=&a;

    // int **parptr=&ptr;
    // cout<<*(&a)<<endl;  // 10 
    // cout<<*(ptr)<<endl;  // 10
    // cout<<*(&ptr)<<endl;  // address
    // cout<<**(parptr)<<endl;
    // cout<<*(&parptr)<<endl;




    // NULL POINTERS........................................!!!!!!!!!!!!!!!!!!!

    // int **ptr=NULL;
    // cout<<ptr<<endl;
// }





    //  FUNCTION POINTERS

// void changeA(int a){  // paas by value
//     a=30;
// }
// int main(){
//     int a= 10;
//     changeA(a);
//     cout<<"insde main fnx :"<<a <<endl;
// }


// void changeA(int *n){  // pass by reference using pointers
//     *n=1990;
// }
// int main(){
//     int a=10;
//     changeA(&a);

//     cout<<a<<endl;

// }



// void changeA(int &n){  // pass by reference using alias
//     n=1990;
// }
// int main(){
//     int a=10;
//     changeA(a);

//     cout<<a<<endl;

// }


// ARRAY POINTERS..............----------->>>>>>>>>>>>>>>>>>>>
// int main(){
//     int arr[]={1,2,3,4};
//     cout<<*arr<<endl;
// }


// POINTER AIRTHMATIC (increment/ decrement)
// int main(){
//     int a=10;
//     int *ptr=&a;
//     cout<<ptr<<endl;
//     ptr--;
//     cout<<ptr<<endl;  //+4

// }

// ADD/ SUBTRACT  NUMBER

int main(){
    // int a = 10;
    // int *ptr =&a;

    // cout<<ptr<<endl;
    // ptr=ptr+2;
    // cout<<ptr<<endl;

// subtract............................................................
    int * ptr2;
    int *ptr1=ptr2+2;

    cout<<ptr1-ptr2<<endl;




}