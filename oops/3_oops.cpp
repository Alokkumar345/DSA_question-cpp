// #include <iostream>
// using namespace std;
// // A default constructor is automatically created by the compiler if no constructor is defined.
// class A{
//     public:
//     // constructor without any parameter
//     A(){
//         cout<<"Hello";
//     }
// };

// int main(){
//     // creating object
//     A obj;
//     return 0;
// }




//  Parameterized Constructor
// A parameterized constructor lets us pass arguments to initialize an object's members
// # include<iostream>
// using namespace std;
// class A
// {
//     public:
//     int val;
//     int val1;
//     int sum;
//     // parameterized constructor
//     A(int x, int y){
//         val=x;
//         val1=y;
//         sum=val+val1;
//     }
// };
// int main(){
//     A obj(10,89);
//     cout<<obj.val<<endl;
//     cout<<obj.val1<<endl;
//     cout<<obj.sum;
//     return 0;
// }


// copy constructor

// # include<iostream>
// using namespace std;
// class A{
//     public:
//     int val;
//     // pararmeter constructor
//     A(int x){
//         val=x;
//     }
//     // copy constructor
//     // A copy constructor is a member function that initializes an object using another object of the same class
//     A(A& a){
//         val =a.val;
//     }

// };
// int main(){
//     A a1(10);
//     A a2(a1);

//     cout<<a2.val;
//     return 0;
// }

// move constructor

#include <iostream>
#include <vector>
using namespace std; 
class myClass{
    private:
    int b;
    public:
    // constructor
    myClass(int &&a):b(move(a)){
        cout<<"Move constructor called!"<<endl;
    }
    void display(){    
        cout<<b;
    }
};
int main(){
    int a =46;
    myClass obj(move(a));
    obj.display();
}