#include <iostream>
#include <stdio.h>
using namespace std;

// Base Class - basicInfo
class basicInfo
        getBasicInfo(); //calling of public member function
        cout << "Enter employee's department info: " << endl;
        //call getDeptInfo() of class deptInfo
        getDeptInfo(); //calling of public member function
    }
    void printEmployeeInfo(void)
    {
        cout << "Employee's Information is: " << endl;
        cout << "Basic Information...:" << endl;
        cout << "Name: " << name << endl; //accessing protected data
        cout << "Employee ID: " << empId << endl; //accessing protected data
        cout << "Gender: " << gender << endl
             << endl; //accessing protected data

        cout << "Department Information...:" << endl;
        cout << "Department Name: " << deptName << endl; //accessing protected data
        cout << "Assigned Work: " << assignedWork << endl; //accessing protected data
        cout << "Time to complete work: " << time2complete << endl; //accessing protected data
    }
};

int main()
{
    //create object of class employee
    employee emp;

    emp.getEmployeeInfo();
    emp.printEmployeeInfo();

    return 0;
}
