#include <iostream>

class DistanceMeterCm
{
private:
    double meters;
    double centimeters;

public:
    DistanceMeterCm(double m = 0, double cm = 0) : meters(m), centimeters(cm) {}

    void display()
    {
        std::cout << "Distance: " << meters << " meters, " << centimeters << " centimeters." << std::endl;
    }

    double toFeet()
    {
        double totalCm = (meters * 100) + centimeters;
        double totalInches = totalCm / 2.54;
        double feet = totalInches / 12;
        return feet;
    }
};

class DistanceFeetInch
{
private:
    double feet;
    double inches;

public:
    DistanceFeetInch(double ft = 0, double in = 0) : feet(ft), inches(in) {}

    void display()
    {
        std::cout << "Distance: " << feet << " feet, " << inches << " inches." << std::endl;
    }

    double toMeters()
    {
        double totalInches = (feet * 12) + inches;
        double totalCm = totalInches * 2.54;
        double meters = totalCm / 100;
        return meters;
    }
};

int main()
{
    // Example usage
    DistanceMeterCm dm(3, 50);
    dm.display();
    double feet = dm.toFeet();
    std::cout << "Converted to feet: " << feet << std::endl;

    DistanceFeetInch di(6, 8);
    di.display();
    double meters = di.toMeters();
    std::cout << "Converted to meters: " << meters << std::endl;
    return 0;
}
