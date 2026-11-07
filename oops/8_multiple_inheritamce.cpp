#include<iostream>
using namespace std;

/*
    Important Notes on Multiple Inheritance:
    - Multiple inheritance means one class inherits from more than one base class.
    - Example: class codeteacher : public Engineer, public youtuber
    - The derived class gets properties and methods from both parent classes.
    - Constructors of both base classes are called when the derived object is created.
    - The order of constructor call is the order in which base classes are listed.
    - If both base classes have same function name, ambiguity occurs.
    - To avoid ambiguity, use the class name with scope resolution ::
      Example: A.work(); or B::work();
    - Private members of base classes are not accessible in the derived class.
    - Use access specifiers carefully: public, protected, private.
    - Multiple inheritance can create complexity, so it should be used thoughtfully.
*/

class Engineer{

    void money(){
        cout<<"hello money"<<endl;
    }
     public:
     string specilization;

     Engineer(){
        cout<<"hello engineer\n";
     }

     void work(){
        cout<<"I have specilization in "<<specilization<<endl;
     }
};

class youtuber{
    public:
    int subscribes;
    youtuber(){
        cout<<"hello youtuber\n";
    }

    void contentcreator(){
        cout<<"I have a subscriber base of "<<subscribes<<endl;
    }
};

class codeteacher:public Engineer,public youtuber{
    public:
    string name;

    codeteacher(){
        cout<<"hello coder\n";

    }
    codeteacher(string name, string specilization, int subscriber){
        this->name=name;
        this->specilization=specilization;
        this->subscribes=subscriber;
    }
    void showcase(){
        cout<<"my name is "<<name<<endl;
        work();
        contentcreator();


    }
};

int main(){
    // codeteacher A1("alok", "AI", 45000);
    codeteacher A1;
    // A1.showcase();
    // A1.money();

}