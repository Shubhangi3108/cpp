#include <iostream>
#include <string>

using namespace std;

class Student {
    private:
    string name;

    public:
    Student(string name1="Unknown"):
    name(name1) {}

    void printStudentName() {

        cout << "Student Name is : "<< name << endl;
    }
};

int main() {
     Student default_student;
     default_student.printStudentName();
    Student first_student("first_name"); 
   
   first_student.printStudentName();
}
