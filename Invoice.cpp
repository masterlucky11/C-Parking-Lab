#include <string>
#include <iostream>
#include <iomanip>
#include "Customer.h"
#include "Vehicle.h"
#include "Invoice.h"

using namespace std;

Invoice::Invoice(int pt, int ct, double s) {
    permitPrice = pt;
    discount = ct;
    serviceCharge = s;
}

void Invoice::setPermitPrice(int pt) {

    if (pt == 1) {
        permitPrice = 12.00;
    }
    else if (pt == 2) {
        permitPrice = 54.06;
    }
    else if (pt == 3) {
        permitPrice = 165.00;
    }
}

void Invoice::setDiscount(int ct) {

    if (ct == 2) {
        discount = permitPrice * 0.20;
    }
    else {
        discount = 0.0;
    }
}

void Invoice::setServiceCharge(double s) {
    serviceCharge = 5.00;
}

double Invoice::getPermitPrice() {
    return permitPrice;
}

double Invoice::getDiscount() {
    return discount;
}

double Invoice::getServiceCharge() {
    return serviceCharge;
}

double Invoice::calcTotalPrice() {
    return permitPrice - discount + serviceCharge;
}


Employee employee;
Student student;
Vendor vendor;
Car car;
Motorcycle motorcycle;
Truck truck;
Invoice invoice;

void Invoice::printInvoice(Employee employee, Car car, Invoice invoice) {

    cout << "Complete Invoice" << endl << endl;
    cout << "Personal Information" << endl;
    cout << "   Name: " << employee.getName() << endl;
    cout << "   Address: " << employee.getAddress() << endl;
    cout << "   Email: " << employee.getEmail() << endl;
    cout << "   Department: " << employee.getDepartment() << endl;
    cout << "   ID Number: " << employee.getidNumber() << endl << endl;
    cout << "Vehicle Information" << endl;
    cout << "   Make: " << car.getMake() << endl;
    cout << "   Model: " << car.getModel() << endl;
    cout << "   Model Year: " << car.getModelYear() << endl;
    cout << "   Plate Number: " << car.getPlateNumber() << endl;
    cout << "   Color: " << car.getColor() << endl << endl;
    cout << "Permit Information" << endl;
    cout << "   Permit Price: $" << invoice.getPermitPrice() << endl;
    cout << "   Discount: $" << invoice.getDiscount() << endl;
    cout << "   Service Charge: $" << invoice.getServiceCharge() << endl << endl;
    cout << "Total: $" << calcTotalPrice() << endl;
}

void Invoice::printInvoice(Employee employee, Motorcycle motorcycle, Invoice invoice) {

    cout << "Complete Invoice" << endl << endl;
    cout << "Personal Information" << endl;
    cout << "   Name: " << employee.getName() << endl;
    cout << "   Address: " << employee.getAddress() << endl;
    cout << "   Email: " << employee.getEmail() << endl;
    cout << "   Department: " << employee.getDepartment() << endl;
    cout << "   ID Number: " << employee.getidNumber() << endl << endl;
    cout << "Vehicle Information" << endl;
    cout << "   Make: " << motorcycle.getMake() << endl;
    cout << "   Model: " << motorcycle.getModel() << endl;
    cout << "   Model Year: " << motorcycle.getModelYear() << endl;
    cout << "   Engine Power: " << motorcycle.getEnginePower() << endl;
    cout << "   Motorcycle Type: " << motorcycle.getMotorcycleType() << endl << endl;
    cout << "Permit Information" << endl;
    cout << "   Permit Price: $" << invoice.getPermitPrice() << endl;
    cout << "   Discount: $" << invoice.getDiscount() << endl;
    cout << "   Service Charge: $" << invoice.getServiceCharge() << endl << endl;
    cout << "Total: $" << calcTotalPrice() << endl;
}

void Invoice::printInvoice(Employee employee, Truck truck, Invoice invoice) {

    cout << "Complete Invoice" << endl << endl;
    cout << "Personal Information" << endl;
    cout << "   Name: " << employee.getName() << endl;
    cout << "   Address: " << employee.getAddress() << endl;
    cout << "   Email: " << employee.getEmail() << endl;
    cout << "   Department: " << employee.getDepartment() << endl;
    cout << "   ID Number: " << employee.getidNumber() << endl << endl;
    cout << "Vehicle Information" << endl;
    cout << "   Make: " << truck.getMake() << endl;
    cout << "   Model: " << truck.getModel() << endl;
    cout << "   Model Year: " << truck.getModelYear() << endl;
    cout << "   Truck Weight: " << truck.getStandardWeight() << endl;
    cout << "   Truck Weight With Load: " << truck.getWeightWithLoad() << endl << endl;
    cout << "Permit Information" << endl;
    cout << "   Permit Price: $" << invoice.getPermitPrice() << endl;
    cout << "   Discount: $" << invoice.getDiscount() << endl;
    cout << "   Service Charge: $" << invoice.getServiceCharge() << endl << endl;
    cout << "Total: $" << calcTotalPrice() << endl;
}

void Invoice::printInvoice(Student student, Car car, Invoice invoice) {

    cout << "Complete Invoice" << endl << endl;
    cout << "Personal Information" << endl;
    cout << "   Name: " << student.getName() << endl;
    cout << "   Address: " << student.getAddress() << endl;
    cout << "   Email: " << student.getEmail() << endl;
    cout << "   CUID: C" << student.getCUID() << endl;
    cout << "   Student Year: " << student.getYear() << endl << endl;
    cout << "Vehicle Information" << endl;
    cout << "   Make: " << car.getMake() << endl;
    cout << "   Model: " << car.getModel() << endl;
    cout << "   Model Year: " << car.getModelYear() << endl;
    cout << "   Plate Number: " << car.getPlateNumber() << endl;
    cout << "   Color: " << car.getColor() << endl << endl;
    cout << "Permit Information" << endl;
    cout << "   Permit Price: $" << invoice.getPermitPrice() << endl;
    cout << "   Discount: $" << invoice.getDiscount() << endl;
    cout << "   Service Charge: $" << invoice.getServiceCharge() << endl << endl;
    cout << "Total: $" << calcTotalPrice() << endl;
}

void Invoice::printInvoice(Student student, Motorcycle motorcycle, Invoice invoice) {

    cout << "Complete Invoice" << endl << endl;
    cout << "Personal Information" << endl;
    cout << "   Name: " << student.getName() << endl;
    cout << "   Address: " << student.getAddress() << endl;
    cout << "   Email: " << student.getEmail() << endl;
    cout << "   CUID: C" << student.getCUID() << endl;
    cout << "   Student Year: " << student.getYear() << endl << endl;
    cout << "Vehicle Information" << endl;
    cout << "   Make: " << motorcycle.getMake() << endl;
    cout << "   Model: " << motorcycle.getModel() << endl;
    cout << "   Model Year: " << motorcycle.getModelYear() << endl;
    cout << "   Engine Power: " << motorcycle.getEnginePower() << endl;
    cout << "   Motorcycle Type: " << motorcycle.getMotorcycleType() << endl << endl;
    cout << "Permit Information" << endl;
    cout << "   Permit Price: $" << invoice.getPermitPrice() << endl;
    cout << "   Discount: $" << invoice.getDiscount() << endl;
    cout << "   Service Charge: $" << invoice.getServiceCharge() << endl << endl;
    cout << "Total: $" << calcTotalPrice() << endl;
}

void Invoice::printInvoice(Student student, Truck truck, Invoice invoice) {

    cout << "Complete Invoice" << endl << endl;
    cout << "Personal Information" << endl;
    cout << "   Name: " << student.getName() << endl;
    cout << "   Address: " << student.getAddress() << endl;
    cout << "   Email: " << student.getEmail() << endl;
    cout << "   CUID: C" << student.getCUID() << endl;
    cout << "   Student Year: " << student.getYear() << endl << endl;
    cout << "Vehicle Information" << endl;
    cout << "   Make: " << truck.getMake() << endl;
    cout << "   Model: " << truck.getModel() << endl;
    cout << "   Model Year: " << truck.getModelYear() << endl;
    cout << "   Truck Weight: " << truck.getStandardWeight() << endl;
    cout << "   Truck Weight With Load: " << truck.getWeightWithLoad() << endl << endl;
    cout << "Permit Information" << endl;
    cout << "   Permit Price: $" << invoice.getPermitPrice() << endl;
    cout << "   Discount: $" << invoice.getDiscount() << endl;
    cout << "   Service Charge: $" << invoice.getServiceCharge() << endl << endl;
    cout << "Total: $" << calcTotalPrice() << endl;
}

void Invoice::printInvoice(Vendor vendor, Car car, Invoice invoice) {

    cout << "Complete Invoice" << endl << endl;
    cout << "Personal Information" << endl;
    cout << "   Name: " << vendor.getName() << endl;
    cout << "   Address: " << vendor.getAddress() << endl;
    cout << "   Email: " << vendor.getEmail() << endl;
    cout << "   Type of Goods: " << vendor.getGoods() << endl;
    cout << "   Company Name: " << vendor.getCompany() << endl << endl;
    cout << "Vehicle Information" << endl;
    cout << "   Make: " << car.getMake() << endl;
    cout << "   Model: " << car.getModel() << endl;
    cout << "   Model Year: " << car.getModelYear() << endl;
    cout << "   Plate Number: " << car.getPlateNumber() << endl;
    cout << "   Color: " << car.getColor() << endl << endl;
    cout << "Permit Information" << endl;
    cout << "   Permit Price: $" << invoice.getPermitPrice() << endl;
    cout << "   Discount: $" << invoice.getDiscount() << endl;
    cout << "   Service Charge: $" << invoice.getServiceCharge() << endl << endl;
    cout << "Total: $" << calcTotalPrice() << endl;
}

void Invoice::printInvoice(Vendor vendor, Motorcycle motorcycle, Invoice invoice) {

    cout << "Complete Invoice" << endl << endl;
    cout << "Personal Information" << endl;
    cout << "   Name: " << vendor.getName() << endl;
    cout << "   Address: " << vendor.getAddress() << endl;
    cout << "   Email: " << vendor.getEmail() << endl;
    cout << "   Type of Goods: " << vendor.getGoods() << endl;
    cout << "   Company Name: " << vendor.getCompany() << endl << endl;
    cout << "Vehicle Information" << endl;
    cout << "   Make: " << motorcycle.getMake() << endl;
    cout << "   Model: " << motorcycle.getModel() << endl;
    cout << "   Model Year: " << motorcycle.getModelYear() << endl;
    cout << "   Engine Power: " << motorcycle.getEnginePower() << endl;
    cout << "   Motorcycle Type: " << motorcycle.getMotorcycleType() << endl << endl;
    cout << "Permit Information" << endl;
    cout << "   Permit Price: $" << invoice.getPermitPrice() << endl;
    cout << "   Discount: $" << invoice.getDiscount() << endl;
    cout << "   Service Charge: $" << invoice.getServiceCharge() << endl << endl;
    cout << "Total: $" << calcTotalPrice() << endl;
}

void Invoice::printInvoice(Vendor vendor, Truck truck, Invoice invoice) {

    cout << "Complete Invoice" << endl << endl;
    cout << "Personal Information" << endl;
    cout << "   Name: " << vendor.getName() << endl;
    cout << "   Address: " << vendor.getAddress() << endl;
    cout << "   Email: " << vendor.getEmail() << endl;
    cout << "   Type of Goods: " << vendor.getGoods() << endl;
    cout << "   Company Name: " << vendor.getCompany() << endl << endl;
    cout << "Vehicle Information" << endl;
    cout << "   Make: " << truck.getMake() << endl;
    cout << "   Model: " << truck.getModel() << endl;
    cout << "   Model Year: " << truck.getModelYear() << endl;
    cout << "   Truck Weight: " << truck.getStandardWeight() << endl;
    cout << "   Truck Weight With Load: " << truck.getWeightWithLoad() << endl << endl;
    cout << "Permit Information" << endl;
    cout << "   Permit Price: $" << invoice.getPermitPrice() << endl;
    cout << "   Discount: $" << invoice.getDiscount() << endl;
    cout << "   Service Charge: $" << invoice.getServiceCharge() << endl << endl;
    cout << "Total: $" << calcTotalPrice() << endl;
}