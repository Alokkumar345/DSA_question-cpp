#include<iostream>
using namespace std;

/*
    Multipath Inheritance Notes:
    - Multipath inheritance is when a derived class inherits from multiple paths.
    - In this example, codeteacher inherits from Engineer and youtuber.
    - Both Engineer and youtuber inherit from human.
    - This creates a shared base class problem called the diamond problem.
    - If the same member is inherited twice, it becomes ambiguous.
    - virtual inheritance solves this by creating only one shared copy of the base class.
    - This is useful when we want to reuse common features without duplication.
*/

class human{
    public:
    string name;
    void display()
    {
        cout<<"My anme is "<<name<<endl;
    }
};

class Engineer: virtual public human
{
     public:
     string specilization;



     void work(){
        cout<<"I have specilization in "<<specilization<<endl;
     }
};

class youtuber: virtual public human
{
    public:
    int subscribes;
    youtuber(){
        cout<<"hello youtuber\n";
    }

    void contentcreator(){
        cout<<"I have a subscriber base of "<<subscribes<<endl;
    }
};

class codeteacher:public Engineer,public youtuber
{
    public:
    int salary;
    codeteacher(){

    }

    codeteacher(string name, string specilization, int subscriber, int salary){
        this->name=name;
        this->specilization=specilization;
        this->subscribes=subscriber;
        this->salary=salary;
    }

};

int main(){
    // codeteacher A1("alok", "AI", 45000);
    codeteacher A1("alok","Cse",6700,999);
    A1.display();
    // A1.showcase();
    // A1.money();

}

