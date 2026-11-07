#include<iostream>
using namespace std;

/*
    Hybrid Inheritance Notes:
    - Hybrid inheritance is a combination of more than one type of inheritance.
    - In this example, both multiple and hierarchical inheritance are used.
    - student is a common base class.
    - boy inherits from student and female.
    - girl inherits from student.
    - This creates a mixed inheritance structure.
    - It helps in reusing common features while adding specialized behavior.
    - Be careful: it may create ambiguity if functions have the same name.
    - Hybrid Inheritance means a combination of two or more types of inheritance in one program.
*/

// student
// boy
// girl
// male
// female

class student{
    public:
    void print(){
        cout<<"I am student\n";

    }

};
class male
{
    public:
    void maleprint()
    { 
        cout<<"I am male\n";

    }
};
class female{
    public:
    void maleprint(){
        cout<<"I am male\n";
    }
};
class boy:public student, public female
{
    public:

    void boyprint(){
        cout<<"i am Boy\n";
    };
};
class girl: public student{

    public:
    void girlprint(){
        cout<<"i am girl\n";
    };

};

int main(){
    girl G1;
    G1.girlprint();
    G1.print();

    boy B1;
    B1.maleprint();

}