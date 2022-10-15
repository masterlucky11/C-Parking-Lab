#include <iostream>
#include <iomanip>
#include <string>
#include "Customer.h"
#include "Vehicle.h"
#include "Invoice.h"

using namespace std;

int main() {
    
    string name, address, email;
    int customerType;
    bool validate = true;

    cout << fixed << setprecision(2);
    
    cout << "Welcome to Parking Permit Services!" << endl << endl;
    
    cout << "Enter whether you are an employee, student, or vendor" << endl << endl;
    cout << "EMPLOYEE: ENTER '1'" << endl;
    cout << "STUDENT: ENTER '2'" << endl;
    cout << "VENDOR: ENTER '3'" << endl;
    cin >> customerType;

    while (customerType != 1 && customerType != 2 && customerType != 3) {
        cout << endl << "Invalid choice! Please follow the following directions." << endl << endl;
        cout << "EMPLOYEE: ENTER '1'" << endl;
        cout << "STUDENT: ENTER '2'" << endl;
        cout << "VENDOR: ENTER '3'" << endl;
        cin >> customerType;
    }
    
    Employee employee;
    Student student;
    Vendor vendor;

    if (customerType == 1) {

        int department, idNumber;

        cout << "Please enter your name: ";
        cin.ignore(200, '\n');
        getline(cin, name);
        cout << "Please enter your address: ";
        getline(cin, address);
        cout << "Please enter your email: ";
        getline(cin, email);
        cout << "Please enter your department by referring to the following directions." << endl << endl;

        cout << "EDUCATION: ENTER '1'" << endl;
        cout << "MANAGEMENT: ENTER '2'" << endl;
        cout << "CLASSIFIED: ENTER '3'" << endl;
        cin >> department;

        while (department != 1 && department != 2 && department != 3) {
            cout << endl << "Invalid choice! Please follow the following directions." << endl << endl;
            cout << "EDUCATION: ENTER '1'" << endl;
            cout << "MANAGEMENT: ENTER '2'" << endl;
            cout << "CLASSIFIED: ENTER '3'" << endl;
            cin >> department;
        }

        cout << "Please enter your ID #: ";
        cin >> idNumber;

        employee.setName(name);
        employee.setAddress(address);
        employee.setEmail(email);
        employee.setDepartment(department);
        employee.setidNumber(idNumber);
    }
    else if (customerType == 2) {

        int cuid, studentYear;

        cout << "Please enter your name: ";
        cin.ignore(200, '\n');
        getline(cin, name);
        cout << "Please enter your address: ";
        getline(cin, address);
        cout << "Please enter your email: ";
        getline(cin, email);
        cout << "Please enter your CUID: C";
        cin >> cuid;
        cout << "Please enter your educational year by referring to the following directions." << endl << endl;

        cout << "FRESHMAN: ENTER '1'" << endl;
        cout << "SOPHOMORE: ENTER '2'" << endl;
        cout << "JUNIOR: ENTER '3'" << endl;
        cout << "SENIOR: ENTER '4'" << endl;
        cin >> studentYear;

        while (studentYear!= 1 && studentYear != 2 && studentYear != 3 && studentYear != 4) {
            cout << endl << "Invalid choice! Please follow the following directions." << endl << endl;
            cout << "FRESHMAN: ENTER '1'" << endl;
            cout << "SOPHOMORE: ENTER '2'" << endl;
            cout << "JUNIOR: ENTER '3'" << endl;
            cout << "SENIOR: ENTER '4'" << endl;
            cin >> studentYear;
        }

        student.setName(name);
        student.setAddress(address);
        student.setEmail(email);
        student.setCUID(cuid);
        student.setYear(studentYear);
    }
    else if (customerType == 3) {

        string goods, company;

        cout << "Please enter your name: ";
        cin.ignore(200, '\n');
        getline(cin, name);
        cout << "Please enter your address: ";
        getline(cin, address);
        cout << "Please enter your email: ";
        getline(cin, email);
        cout << "Please enter the types of goods being delivered: ";
        getline(cin, goods);
        cout << "Please enter your company's name: ";
        getline(cin, company);

        vendor.setName(name);
        vendor.setAddress(address);
        vendor.setEmail(email);
        vendor.setGoods(goods);
        vendor.setCompany(company);
    }

    string make, model;
    int modelYear, vehicleType;

    cout << "Enter whether this permit is for a car, motorcycle, or truck" << endl << endl;
    cout << "CAR: ENTER '1'" << endl;
    cout << "MOTORCYCLE: ENTER '2'" << endl;
    cout << "TRUCK: ENTER '3'" << endl;
    cin >> vehicleType;

    while (vehicleType != 1 && vehicleType != 2 && vehicleType != 3) {
        cout << endl << "Invalid choice! Please follow the following directions." << endl << endl;
        cout << "CAR: ENTER '1'" << endl;
        cout << "MOTORCYCLE: ENTER '2'" << endl;
        cout << "TRUCK: ENTER '3'" << endl;
        cin >> vehicleType;
    }

    Car car;
    Motorcycle motorcycle;
    Truck truck;

    if (vehicleType == 1) {
        
        int plateNumber;
        string color;

        cout << "Please enter your car's manufacturer: ";
        cin.ignore(200, '\n');
        getline(cin, make);
        cout << "Please enter your car model: ";
        getline(cin, model);
        cout << "Please enter your car's model year: ";
        cin >> modelYear;
        cout << "Please enter your plate number: ";
        cin >> plateNumber;
        cout << "Please enter your car's color: ";
        cin.ignore(200, '\n');
        getline(cin, color);

        car.setMake(make);
        car.setModel(model);
        car.setModelYear(modelYear);
        car.setPlateNumber(plateNumber);
        car.setColor(color);
    }
    else if (vehicleType == 2) {

        int enginePower, motorcycleType;

        cout << "Please enter your bike's manufacturer: ";
        cin.ignore(200, '\n');
        getline(cin, make);
        cout << "Please enter your bike model: ";
        getline(cin, model);
        cout << "Please enter your bike's model year: ";
        cin >> modelYear;
        cout << "Please enter your bike's estimated engine power in HP: ";
        cin >> enginePower;
        cout << "Please enter the type of bike it is by referring to the following directions." << endl << endl;

        cout << "MOTORCYCLE: ENTER '1'" << endl;
        cout << "MOPED: ENTER '2'" << endl;
        cout << "SCOOTER: ENTER '3'" << endl;
        cout << "UNDERBONE: ENTER '4'" << endl;
        cout << "MINIATURE: ENTER '5'" << endl;
        cout << "ELECTRIC: ENTER '6'" << endl;
        cout << "POCKET: ENTER '7'" << endl;
        cout << "THREE-WHEELED: ENTER '8'" << endl;
        cout << "OTHER: ENTER '9'" << endl;
        cin >> motorcycleType;

        while (motorcycleType!= 1 && motorcycleType != 2 && motorcycleType != 3 && motorcycleType != 4 && motorcycleType != 5 && motorcycleType != 6 && motorcycleType != 7 && motorcycleType != 8 && motorcycleType != 9) {
            cout << endl << "Invalid choice! Please follow the following directions." << endl << endl;
            cout << "MOTORCYCLE: ENTER '1'" << endl;
            cout << "MOPED: ENTER '2'" << endl;
            cout << "SCOOTER: ENTER '3'" << endl;
            cout << "UNDERBONE: ENTER '4'" << endl;
            cout << "MINIATURE: ENTER '5'" << endl;
            cout << "ELECTRIC: ENTER '6'" << endl;
            cout << "POCKET: ENTER '7'" << endl;
            cout << "THREE-WHEELED: ENTER '8'" << endl;
            cout << "OTHER: ENTER '9'" << endl;
            cin >> motorcycleType;
        }

        motorcycle.setMake(make);
        motorcycle.setModel(model);
        motorcycle.setModelYear(modelYear);
        motorcycle.setEnginePower(enginePower);
        motorcycle.setMotorcycleType(motorcycleType);
    }
    else if (vehicleType == 3) {

        int weight, weightWithLoad;

        cout << "Please enter your truck's manufacturer: ";
        cin.ignore(200, '\n');
        getline(cin, make);
        cout << "Please enter your truck model: ";
        getline(cin, model);
        cout << "Please enter your truck's model year: ";
        cin >> modelYear;
        cout << "Please enter the estimated weight of the truck: ";
        cin >> weight;
        cout << "Please enter the estimated weight including the load: ";
        cin >> weightWithLoad;

        truck.setMake(make);
        truck.setModel(model);
        truck.setModelYear(modelYear);
        truck.setStandardWeight(weight);
        truck.setWeightWithLoad(weightWithLoad);
    }

    int permitType;
    Invoice invoice;

    cout << "Please enter the type of permit you want by referring to the following directions." << endl << endl;

    cout << "MONTHLY: ENTER '1'" << endl;
    cout << "SEMESTERLY: ENTER '2'" << endl;
    cout << "ANNUALLY: ENTER '3'" << endl;
    cin >> permitType;

    while (permitType != 1 && permitType != 2 && permitType != 3) {
        cout << endl << "Invalid choice! Please follow the following directions." << endl << endl;
        cout << "MONTHLY: ENTER '1'" << endl;
        cout << "SEMESTERLY: ENTER '2'" << endl;
        cout << "ANNUALLY: ENTER '3'" << endl;
        cin >> permitType;
    }

    invoice.setPermitPrice(permitType);
    invoice.setDiscount(customerType);
    invoice.setServiceCharge(5.00);

    if (customerType == 1 && vehicleType == 1) {
        invoice.printInvoice(employee, car, invoice);
    }
    else if (customerType == 1 && vehicleType == 2) {
        invoice.printInvoice(employee, motorcycle, invoice);
    }
    else if (customerType == 1 && vehicleType == 3) {
        invoice.printInvoice(employee, truck, invoice);
    }
    else if (customerType == 2 && vehicleType == 1) {
        invoice.printInvoice(student, car, invoice);
    }
    else if (customerType == 2 && vehicleType == 2) {
        invoice.printInvoice(student, motorcycle, invoice);
    }
    else if (customerType == 2 && vehicleType == 3) {
        invoice.printInvoice(student, truck, invoice);
    }
    else if (customerType == 3 && vehicleType == 1) {
        invoice.printInvoice(vendor, car, invoice);
    }
    else if (customerType == 3 && vehicleType == 2) {
        invoice.printInvoice(vendor, motorcycle, invoice);
    }
    else if (customerType == 3 && vehicleType == 3) {
        invoice.printInvoice(vendor, truck, invoice);
    }

    return 0;
}