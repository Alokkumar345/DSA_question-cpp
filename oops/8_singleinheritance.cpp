#include <iostream>
#include <string>
using namespace std;

/*
    Notes on Inheritance in C++:
    - Inheritance allows a class to reuse properties and methods of another class.
    - Parent class = base class, Child class = derived class.
    - Here, Student inherits from Human using single inheritance.
    - public inheritance keeps public members public in the derived class.
    - protected members are accessible inside the derived class, but not outside.
    - A derived class can use the base class methods/functions when access is allowed.
    - Constructor of the base class is not inherited, but the derived class constructor can initialize base members.
*/

// Single inheritance
class Human {   // parent class
protected:
    string name;
    int age;

public:
    void work() {
        cout << "I am working\n";
    }
};

class Student : public Human {  // child class
    int roll_num;
    int fees;

public:
    Student(string name, int age, int roll_num, int fees) {
        this->name = name;
        this->age = age;
        this->roll_num = roll_num;
        this->fees = fees;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll Number: " << roll_num << endl;
        cout << "Fees: " << fees << endl;
    }

};

int main() {
    Student student1("Alok", 20, 101, 5000);

    student1.work();
    student1.display();

    return 0;
}