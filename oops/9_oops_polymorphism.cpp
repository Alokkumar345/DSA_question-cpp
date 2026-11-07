#include <iostream>
using namespace std;

/*
    Polymorphism in C++
    - Polymorphism means "many forms".
    - One function name can behave differently in different situations.
    - It is one of the main pillars of OOP.

    Types of polymorphism:
    1. Compile-time polymorphism
       - achieved by function overloading
       - achieved by operator overloading

    2. Runtime polymorphism
       - achieved by function overriding using virtual functions

    Simple definition:
    Polymorphism = same name, different behavior.

    Example:
    - same print() function can work for different objects
    - same function can be overridden in derived class



    - virtual makes function calls dynamic at runtime.
*/
// overloading
//  class area{
//     public:
//     int calculatearea(int r){
//         return 3.14*r*r;
//     }
//     int calculatarea(int l, int b){
//         return l*b;
//     }
//  };
//  int main(){
//     area A1, A2;
//     cout<<A1.calculatearea(4)<<endl;
//     cout<<A2.calculatarea(3,4);
//  }


// operator overloading
// class complex{
//     int real, img;
//     public:
//     complex(){

//     };
//     complex(int real,int img){ // constructor
//         this->real=real;
//         this->img=img;

//     }
//     void display(){
//         cout<<real<<" +i"<<img;
//     }
//     complex operator +(complex &c){
//         complex ans;
//         ans.real=real+c.real;
//         ans.img=img+c.img;
//         return ans;

//     }
// };

// int main(){
//     complex c1(3,4);
//     complex c2(4,6);

//     complex c3=c1+c2;
//     c3.display();

// };


// overriding

class animal{
    public:
    virtual void speak(){
        cout<<"HuHu\n";
    }
};

class dog: public animal{
    public:
    void speak(){
        cout<<"bark\n";
    }
    void roti(){
        cout<<"hello\n";

    }
};
int main(){
    // animal *p;
    // p=new dog();
    // p->speak();

    dog d1;
    d1.speak();

}