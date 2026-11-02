#include<iostream>
using namespace std;

// class Student
// {
//     public:
//     string name;
//     int age, roll_number;
//     string grade;
// };

// int main()
// {
//     Student s1;
//     s1.name = "Sumit";
//     s1.age = 20;
//     s1.roll_number = 21;
//     s1.grade = "A+";

//     cout<<s1.age<<" "<<endl;
//     cout<<s1.name<<" ";
// }



// class Student
// {
//     private:
//     string name;
//     int age, roll_number;
//     string grade;

//     // Function Getter And Setter
//     public:
//     void setname(string s)
//     {
//         if(s.size() == 0)
//         {
//             cout<<"invalid name: ";
//             return;
//         }
//         name = s;
//     }

//     void setage(int a)
//     {
//         if(a<0||a>100)
//         {
//             cout<<"invalid age: "<<endl;
//             return;
//         }
//         age = a;
//     }

//     void setroll_number(int r)
//     {
//         roll_number = r;
//     }

//     void setgrade(string g)
//     {
//         grade = g;
//     }
    
//     void getname()
//     {
//         cout<<name<<endl;
//     }

//     void getage()
//     {
//         cout<<age<<endl;
//     }

//     int getroll_number()
//     {
//         return roll_number;
//     }

//     string get_grade(int pin)
//     {
//         if(pin == 123)
//         {
//             return grade;
//         }
//         return " ";
//     }

    
// };

// int main()
// {
//     Student s1;
//     s1.setname("Sumit");
//     s1.setage(20);
//     s1.setroll_number(21);
//     s1.setgrade("A+");
//     s1.getname();
//     s1.getage();
//     cout<<s1.getroll_number()<<endl;
//     cout<<s1.get_grade(123)<<endl;
// }




// Dynamic memory allocation
class Student
{
    public:
    string name;
    int age, roll_number;
    string grade;
};

int main()
{
    Student *S = new Student;
    (*S).name = "Sumit";
    (*S).age = 20;
    (*S).roll_number = 21;
    (*S).grade = "A+";

    cout<<S->name<<endl;
    cout<<S->age<<endl;
    cout<<S->roll_number<<endl;
    cout<<S->grade<<endl;
}
