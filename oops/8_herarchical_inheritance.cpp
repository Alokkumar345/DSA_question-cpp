#include <iostream>
#include <string>
using namespace std;

/*
    Hierarchical Inheritance Notes:
    - One base class is inherited by multiple child classes.
    - In this example, Human is the parent class.
    - Student and Teacher both inherit from Human.
    - Both child classes can use the common features of Human.
    - This helps in reusing code and reducing duplication.
    - Example: name and age are common for both Student and Teacher.
    - Each child class can also have its own extra properties.
    - Hierarchical inheritance = one parent, multiple children.
*/

// Hierarchical inheritance
class Human {   // parent class
protected:
    string name;
    int age;

public:
    Human() {
        name = "";
        age = 0;
    }

    Human(string name, int age) {
        this->name = name;
        this->age = age;
    }

    void display() {
        cout << name << " " << age << "\n";
    }

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
class Teacher : public Human {
    int salary;

public:
    Teacher(string name, int age, int salary) {
        this->name = name;
        this->age = age;
        this->salary = salary;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Student A1("Alok", 20, 101, 5000);
    A1.display();

    Teacher A2("alok", 23, 99000);
    A2.display();

    return 0;
}