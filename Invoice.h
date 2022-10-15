#include <string>
#include <iostream>
#include "Customer.h"
#include "Vehicle.h"

using namespace std;

#ifndef INVOICE_H_
#define INVOICE_H_

class Invoice {

    private:
        double permitPrice;
        double discount;
        double serviceCharge;

    public:
        Invoice() = default;
        Invoice(int pt, int ct, double s);
        void setPermitPrice(int pt);
        void setDiscount(int ct);
        void setServiceCharge(double s);
        double getPermitPrice();
        double getDiscount();
        double getServiceCharge();
        double calcTotalPrice();
        void printInvoice(Employee employee, Car car, Invoice Invoice);
        void printInvoice(Employee employee, Motorcycle motorcycle, Invoice Invoice);
        void printInvoice(Employee employee, Truck truck, Invoice Invoice);
        void printInvoice(Student student, Car car, Invoice Invoice);
        void printInvoice(Student student, Motorcycle motorcycle, Invoice Invoice);
        void printInvoice(Student student, Truck truck, Invoice Invoice);
        void printInvoice(Vendor vendor, Car car, Invoice Invoice);
        void printInvoice(Vendor vendor, Motorcycle motorcycle, Invoice Invoice);
        void printInvoice(Vendor vendor, Truck truck, Invoice Invoice);
};

#endif