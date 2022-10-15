#include <string>
#include "Vehicle.h"

using namespace std;

Car::Car(string m, string m2, int y, int p, string c) {
    make = m;
    model = m2;
    modelYear = y;
    plateNumber = p;
    color = c;
}

void Car::setMake(string m) {
    make = m;
}

void Car::setModel(string m2) {
    model = m2;
}

void Car::setModelYear(int y) {
    modelYear = y;
}

void Car::setPlateNumber(int p) {
    plateNumber = p;
}

void Car::setColor(string c) {
    color = c;
}

string Car::getMake() {
    return make;
}

string Car::getModel() {
    return model;
}

int Car::getModelYear() {
    return modelYear;
}

int Car::getPlateNumber() {
    return plateNumber;
}

string Car::getColor() {
    return color;
}

Motorcycle::Motorcycle(string m, string m2, int y, int e, int mt) {
    make = m;
    model = m2;
    modelYear = y;
    enginePower = e;
    motorcycleType = mt;
}

void Motorcycle::setMake(string m) {
    make = m;
}

void Motorcycle::setModel(string m2) {
    model = m2;
}

void Motorcycle::setModelYear(int y) {
    modelYear = y;
}

void Motorcycle::setEnginePower(int e) {
    enginePower = e;
}

void Motorcycle::setMotorcycleType(int mt) {

    if (mt == 1) {
        motorcycleType = "Motorcycle";
    }
    else if (mt == 2) {
        motorcycleType = "Moped";
    }
    else if (mt == 3) {
        motorcycleType = "Scooter";
    }
    else if (mt == 4) {
        motorcycleType = "Underbone";
    }
    else if (mt == 5) {
        motorcycleType = "Miniature";
    }
    else if (mt == 6) {
        motorcycleType = "Electric";
    }
    else if (mt == 7) {
        motorcycleType = "Pocket";
    }
    else if (mt == 8) {
        motorcycleType = "Three-wheeled";
    }
    else if (mt == 9) {
        motorcycleType = "Other";
    }
}

string Motorcycle::getMake() {
    return make;
}

string Motorcycle::getModel() {
    return model;
}

int Motorcycle::getModelYear() {
    return modelYear;
}

int Motorcycle::getEnginePower() {
    return enginePower;
}

string Motorcycle::getMotorcycleType() {
    return motorcycleType;
}

Truck::Truck(string m, string m2, int y, int sw, int wl) {
    make = m;
    model = m2;
    modelYear = y;
    standardWeight = sw;
    weightWithLoad = wl;
}

void Truck::setMake(string m) {
    make = m;
}

void Truck::setModel(string m2) {
    model = m2;
}

void Truck::setModelYear(int y) {
    modelYear = y;
}

void Truck::setStandardWeight(int sw) {
    standardWeight = sw;
}

void Truck::setWeightWithLoad(int wl) {
    weightWithLoad = wl;
}

string Truck::getMake() {
    return make;
}

string Truck::getModel() {
    return model;
}

int Truck::getModelYear() {
    return modelYear;
}

int Truck::getStandardWeight() {
    return standardWeight;
}

int Truck::getWeightWithLoad() {
    return weightWithLoad;
}