#include<iostream>
using namespace std;

class student{
    private:
    string name;
    int age, roll_number;
    string grade;

    // getter and setter
    public:  // public bana rahe hai taki class ke bahar access kr ske
    void setname(string s){
        if(s.size()==0){
            cout<<"invalide name"<<endl;
            return ;
        }
        name=s;
    }
    void setage(int x){
        if(x < 0 || x > 100 ){
            cout<<"Invalide age"<<endl;
            return;
        }
        age=x;
    }
    void setroll_number(int r){
        if(r < 0){
            cout<<"invalid roll no";
            return;
        }
        roll_number=r;
    }
    void setgrade(string g){
        grade=g;
    }

    void getname(){
        cout<<name<<endl;
    }
    void getage(){
        cout<<age<<endl;
    }
    int getroll_number(){
        return roll_number;
    }
    string get_grade(int pin){
        if(pin==123)
        return grade;

        return " ";

    }
};
int main(){
    student s1; // object
    s1.setname("alok kumar");
    s1.setage(34);
    s1.setroll_number(23);
    s1.setgrade("A+");
    
    s1.getname();
    s1.getage();
    cout<<s1.getroll_number()<<endl;
    cout<<s1.get_grade(1273)<<endl;

    return 0;
}



//Static vs Dynamic memory alloctaion
// #include<iostream>
// using namespace std;

// class student{
//     public:
//     string name;
//     int age, roll_number;
//     string grade;
// };
// int main(){
//     student *s=new student;  // address
//     (*s).name="alok";  
//     (*s).age=23;
//     (*s).roll_number=26;
//     (*s).grade="A+";

//     cout<<s-> name<<" "<<endl;
//     cout<<s-> age<<" "<<endl;
//     cout<<s-> roll_number<<" "<<endl;
//     cout<<s-> grade<<" ";
// }