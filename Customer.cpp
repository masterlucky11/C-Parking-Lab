#include <string>
#include "Customer.h"

using namespace std;

Employee::Employee(string n, string a, string e, int d, int id) {
    name = n;
    address = a;
    email = e;
    department = d;
    idNumber = id;
}

void Employee::setName(string n) {
    name = n;
}

void Employee::setAddress(string a) {
    address = a;
}

void Employee::setEmail(string e) {
    email = e;
}

void Employee::setDepartment(int d) {
    
    if (d == 1) {
        department = "Education";
    }
    else if (d == 2) {
        department = "Management";
    }
    else if (d == 3) {
        department = "Classified";
    }
}

void Employee::setidNumber(int id) {
    idNumber = id;
}

string Employee::getName() {
    return name;
}

string Employee::getAddress() {
    return address;
}

string Employee::getEmail() {
    return email;
}

string Employee::getDepartment() {
    return department;
}

int Employee::getidNumber() {
    return idNumber;
}

Student::Student(string n, string a, string e, int id, int y) {
    name = n;
    address = a;
    email = e;
    cuid = id;
    year = y;
}

void Student::setName(string n) {
    name = n;
}

void Student::setAddress(string a) {
    address = a;
}

void Student::setEmail(string e) {
    email = e;
}

void Student::setCUID(int id) {
    cuid = id;
}

void Student::setYear(int y) {

    if (y == 1) {
        year = "Freshman";
    }
    else if (y == 2) {
        year = "Sophomore";
    }
    else if (y == 3) {
        year = "Junior";
    }
    else if (y == 4) {
        year = "Senior";
    }
}

string Student::getName() {
    return name;
}

string Student::getAddress() {
    return address;
}

string Student::getEmail() {
    return email;
}

int Student::getCUID() {
    return cuid;
}

string Student::getYear(){
    return year;
}

Vendor::Vendor(string n, string a, string e, string g, string c) {
    name = n;
    address = a;
    email = e;
    goods = g;
    company = c;
}

void Vendor::setName(string n) {
    name = n;
}

void Vendor::setAddress(string a) {
    address = a;
}

void Vendor::setEmail(string e) {
    email = e;
}

void Vendor::setGoods(string g) {
    goods = g;
}

void Vendor::setCompany(string c) {
    company = c;
}

string Vendor::getName() {
    return name;
}

string Vendor::getAddress() {
    return address;
}

string Vendor::getEmail() {
    return email;
}

string Vendor::getGoods() {
    return goods;
}

string Vendor::getCompany() {
    return company;
}