#include <iostream>
using namespace std;

struct Address
{
    string city;
    string state;
};

//Declare a nested struct
struct Student
{
    string name;
    int age; 
    float cgpa;
    Address address; //nested struct 
};

void displayStudent(Student []);
void displayStudentPassByValue(Student); //pass by value
void updateCGPA(Student&, float);
void displayByConstRef(const Student&);

int main()
{
    //Create a Student variable
    Student stud[2];
    Student stud3 = {"Abu", 34, 4};

    //Initialize the member variables
    stud[0].name = "Ali";
    stud[0].age = 20;
    stud[0].cgpa = 4.00;
    stud[0].address.city = "Skudai";
    stud[0].address.state = "Johor";

    //Initialize using initializer list
    stud[1] = {"Aisyah", 20, 4.00, {"Shah Alam", "Selangor"}};

    displayStudent(stud);
    cout << "Before CGPA update" << endl;
    displayStudentPassByValue(stud3); //pass by value
    updateCGPA(stud3, 3.99);
    cout << "After CGPA update" << endl;
    displayStudentPassByValue(stud3);
    displayByConstRef(stud3);

    return 0;
}

void displayByConstRef(const Student &s)
{
    //s.cgpa = 3.50
    cout << "displayByConstRef" << endl;
    cout << "Student name: " << s.name << endl;
}

void updateCGPA(Student &s, float newCGPA)
{
    s.cgpa = newCGPA;
}

void displayStudentPassByValue(Student s)
{
    cout << "Student name: " << s.name << endl;
    cout << "Student age: " << s.age << endl;
    cout << "Student CGPA: " << s.cgpa << endl;
    cout << "Student address: " << s.address.city << endl;
    cout << "Student state: " << s.address.state << endl;
}
void displayStudent(Student s[])
{
    //Access and display data
    for (int i = 0; i < 2; i++)
    {
        cout << "Student " << i + 1 <<  " name: " << s[i].name << endl;
        cout << "Student " << i + 1 <<  " age: " << s[i].age << endl;
        cout << "Student " << i + 1 <<  " CGPA: " << s[i].cgpa << endl;
        cout << "Student " << i + 1 <<  " city: " << s[i].address.city << endl;
        cout << "Student " << i + 1 <<  " state: " << s[i].address.state << endl;
    }
}

