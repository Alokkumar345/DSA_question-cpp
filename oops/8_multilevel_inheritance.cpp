#include<iostream>
using namespace std;

class person{
    protected:
    string name;


    public:
    void introduce(){
        cout<<"Hello My Name Is :"<<name<<endl;
    }

};
class employee:public person{
    protected:
    int salary;

    public:
    void monthly_salary(){
        cout<<"My Monthly salary id: "<<salary<<endl;
    }
};
class Manager: public employee{  // inherit
    public:
    string department;
    Manager(string name, int salary, string department){
        this->name=name;
        this->salary=salary;
        this->department=department;
    };
    void work(){
        cout<<"i am  leading the department"<<department<<endl;
    }
};
int main(){
    Manager A1("alok", 60000, "Finance");
    A1.monthly_salary();
    A1.introduce();
    A1.department="Ro";
    A1.work();
    return 0;
}