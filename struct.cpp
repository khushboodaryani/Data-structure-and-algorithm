#include <iostream>
using namespace std;

struct student
{
    string name;
    int roll;
    double cgpa;
    bool enrolled;
};
// struct = A structure that group related variables under one name
// struct can contain many different data types like string and int, bool
// variable in a struct are known as "members"
// memebers can be access with . "Class Member Access Operator"
int main()
{
    student student1;
    student1.name = "john";
    student1.roll = 1;
    student1.cgpa = 3.5;
    student1.enrolled = true;

    student student2;
    student1.name = "liya";
    student1.roll = 2;
    student1.cgpa = 4.5;
    student1.enrolled = true;

    cout << student1.name << endl;
    cout << student1.roll << endl;
    cout << student1.cgpa << endl;
    cout << student1.enrolled << endl;

    cout << student2.name << endl;
    cout << student2.roll << endl;
    return 0;
}