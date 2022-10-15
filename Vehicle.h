#include <string>

using namespace std;

#ifndef VEHICLE_H_
#define VEHICLE_H_

class Car {

    private:
        string make;
        string model;
        int modelYear;
        int plateNumber;
        string color;

    public:
        Car() = default;
        Car(string m, string m2, int y, int p, string c);
        void setMake(string m);
        void setModel(string m2);
        void setModelYear(int y);
        void setPlateNumber(int p);
        void setColor(string c);
        string getMake();
        string getModel();
        int getModelYear();
        int getPlateNumber();
        string getColor();
};

class Motorcycle {

    private:
        string make;
        string model;
        int modelYear;
        int enginePower;
        string motorcycleType;

    public:
        Motorcycle() = default;
        Motorcycle(string m, string m2, int y, int e, int mt);
        void setMake(string m);
        void setModel(string m2);
        void setModelYear(int y);
        void setEnginePower(int e);
        void setMotorcycleType(int mt);
        string getMake();
        string getModel();
        int getModelYear();
        int getEnginePower();
        string getMotorcycleType();
};

class Truck {

    private:
        string make;
        string model;
        int modelYear;  
        int standardWeight;
        int weightWithLoad;
    
    public:
        Truck() = default;
        Truck(string m, string m2, int y, int sw, int wl);
        void setMake(string m);
        void setModel(string m2);
        void setModelYear(int y);
        void setStandardWeight(int sw);
        void setWeightWithLoad(int wl);
        string getMake();
        string getModel();
        int getModelYear();
        int getStandardWeight();
        int getWeightWithLoad();
};

#endif