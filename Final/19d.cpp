//write a c++ program to declare a base class to have department ID as private and rate per hour of an employee as protected. declare a derived class to include data as private. the purpose of this program is to illustrate that an object of a derived class cannot access private data. also, an object of base class cannot access rate that is protected. the object of base class can only access the rate through a member function of the base class

#include <iostream>
#include <string>

class Department {
private:
    int departmentID;

protected:
    double ratePerHour;

public:
    Department(int departmentID, double ratePerHour)
        : departmentID(departmentID), ratePerHour(ratePerHour) {}

    int getDepartmentID() const {
        return departmentID;
    }

    double getRatePerHour() const {
        return ratePerHour;
    }
};

class Employee : public Department {
private:
    std::string employeeName;

public:
    Employee(int departmentID, double ratePerHour, const std::string& employeeName)
        : Department(departmentID, ratePerHour), employeeName(employeeName) {}

    std::string getEmployeeName() const {
        return employeeName;
    }

    // This function can access ratePerHour because it's protected in base class
    double getEmployeeRate() const {
        return getRatePerHour();
    }
};

int main() {
    Employee emp(1, 20.0, "John Doe");

    //emp.departmentID;   // Error: 'int Department::departmentID' is private within this context
    std::cout << "Employee Name: " << emp.getEmployeeName() << std::endl;
    std::cout << "Employee Rate: " << emp.getEmployeeRate() << std::endl;

    Department dep(2, 30.0);
    //dep.ratePerHour;    // Error: 'double Department::ratePerHour' is protected within this context
    std::cout << "Department ID: " << dep.getDepartmentID() << std::endl;
    std::cout << "Department Rate: " << dep.getRatePerHour() << std::endl;

    return 0;
}
