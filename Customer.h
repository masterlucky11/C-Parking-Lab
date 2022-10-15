#include <string>

using namespace std;

#ifndef CUSTOMER_H_
#define CUSTOMER_H_

class Employee {
    
    private:
        string name;
        string address;
        string email;
        string department;
        int idNumber;
    
    public:
        Employee() = default;
        Employee(string n, string a, string e, int d, int id);
        void setName(string n);
        void setAddress(string a);
        void setEmail(string e);
        void setDepartment(int d);
        void setidNumber(int id);
        string getName();
        string getAddress();
        string getEmail();
        string getDepartment();
        int getidNumber();
};

class Student {
    
    private:
        string name;
        string address;
        string email;
        int cuid;
        string year;
        
    public:
        Student() = default;
        Student(string n, string a, string e, int id, int y);
        void setName(string n);
        void setAddress(string a);
        void setEmail(string e);
        void setCUID(int id);
        void setYear(int y);
        string getName();
        string getAddress();
        string getEmail();
        int getCUID();
        string getYear();
};

class Vendor {
    
    private:
        string name;
        string address;
        string email;
        string goods;
        string company;

    public:
        Vendor() = default;
        Vendor(string n, string a, string e, string g, string c);
        void setName(string n);
        void setAddress(string a);
        void setEmail(string e);
        void setGoods(string g);
        void setCompany(string c);
        string getName();
        string getAddress();
        string getEmail();
        string getGoods();
        string getCompany();
}; 

#endif