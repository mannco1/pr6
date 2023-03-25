

#include <iostream>
#include <cmath>

const double PI = 3.14159;

class Cone {
private:
    double x;
    double y;
    double z;
    double radius;
    double height;

public:
    Cone() : x(0), y(0), z(0), radius(0), height(0) {}
    Cone(double r, double h) : x(0), y(0), z(0), radius(r), height(h) {}
    Cone(double X, double Y, double Z, double r, double h) : x(X), y(Y), z(Z), radius(r), height(h) {}

    void input();
    void output() const;
    double surfaceArea() const;
    double volume() const;
    double getRadius() const;
    double getHeight() const;
    friend std::istream& operator>>(std::istream& input, Cone& c);
    friend std::ostream& operator<<(std::ostream& output, const Cone& c);
};

class TruncatedCone : public Cone {
private:
    double topRadius;

public:
    TruncatedCone() : topRadius(0) {}
    TruncatedCone(double tr) : topRadius(tr) {}
    TruncatedCone(double X, double Y, double Z, double r, double h, double tr) : Cone(X, Y, Z, r, h), topRadius(tr) {}

    void input();
    void output() const;
    double surfaceArea() const;
    double volume() const;
    friend std::istream& operator>>(std::istream& input, TruncatedCone& tc);
    friend std::ostream& operator<<(std::ostream& output, const TruncatedCone& tc);
};


