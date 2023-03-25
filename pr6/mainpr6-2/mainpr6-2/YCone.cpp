#include "YCone.h"

void Cone::input()
{
    std::cout << "Enter the center coordinates (x, y, z) of the base: ";
    std::cin >> x >> y >> z;
    std::cout << "Enter the radius and height of the cone: ";
    std::cin >> radius >> height;
}

void Cone::output() const
{
    std::cout << "Cone parameters:\n";
    std::cout << "Center coordinates: (" << x << ", " << y << ", " << z << ")\n";
    std::cout << "Radius: " << radius << "\n";
    std::cout << "Height: " << height << "\n";
}

double Cone::surfaceArea() const
{
    double l = sqrt(pow(height, 2) + pow(radius, 2));
    return PI * radius * (radius + l);
}

double Cone::volume() const
{
    return PI * pow(radius, 2) * height / 3;
}

double Cone::getRadius() const
{
    return radius;
}

double Cone::getHeight() const
{
    return height;
}

std::istream& operator>>(std::istream& input, Cone& c)
{
    c.input();
    return input;
}

std::ostream& operator<<(std::ostream& output, const Cone& c)
{
    c.output();
    return output;
}

void TruncatedCone::input()
{
    Cone::input();
    std::cout << "Enter the top radius of the truncated cone: ";
    std::cin >> topRadius;
}

void TruncatedCone::output() const
{
    Cone::output();
    std::cout << "Top radius: " << topRadius << "\n";
}

double TruncatedCone::volume()const
{
    return PI * getHeight() * (pow(getRadius(), 2) + getRadius() * topRadius + pow(topRadius, 2)) / 3;
}

