// Inheritance is an object-oriented programming concept where one class gets the properties and functions of another class. This helps reuse existing code and create a relationship between classes.

//Example: A Dog class can inherit common features from an Animal class.

// Access Specifiers
//Public
//Members can be accessed from anywhere in the program.

// Private
// Members can be accessed only inside the same class. They cannot be accessed directly by derived classes.

// Protected
// Members can be accessed inside the same class and by its derived classes, but not directly from outside.

# include<iostream>

using namespace std;
// class customer{
//     private :
//     int a;
//     protected:
//     int b;
//     public:
//     int c;

//     void fun(){  // ye access kr skta hai a,b, c ko bcs ye same class ke ander hai 
//         a=10;
//         b=90;
//         c=99;
//     }
// };

// int main(){
//     customer alok;
//     alok.c=10;
//     cout<<"Access";
//     alok.fun();

// }







class human{     // parent class
    // public:
    protected:
    string name;
    int age, weight;

};

class student:private human{   // child class
    private:
    int roll_number, fees;

    public:

    void fun(string n, int a , int w){
        name=n;  
        age=a;
        weight=w;

    }
    void display(){
        cout<<name<<' '<<age<<" "<<weight<<endl;
    }

};

int main(){
    student A;
    // A.name="alok";
    A.fun("alok", 7, 9);
    A.display();
    return 0;
}