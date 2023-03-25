#ifndef WATER_H
#define WATER_H

#include <string>
#include <iostream>
using namespace std;
class WaterBody {
protected:
    std::string name;
    std::string location;
    double depth;
    double surface_area;
public:
    WaterBody() {}
    WaterBody(std::string n, std::string l, double d, double a) : name(n), location(l), depth(d), surface_area(a) {}
    virtual ~WaterBody() {} // make sure to define a virtual destructor for polymorphic classes
    friend std::ostream& operator<<(std::ostream& out, const WaterBody& w);
    friend std::istream& operator>>(std::istream& in, WaterBody& w);
};

class Ocean : public WaterBody {
public:
    Ocean() {}
    Ocean(std::string n, std::string l, double d, double a) : WaterBody(n, l, d, a) {}
};
class Sea : public Ocean {
private:
    string type;
    bool is_saltwater;
public:
    Sea() {}
    Sea(string n, string l, double d, double a, string t, bool sw) : Ocean(n, l, d, a), type(t), is_saltwater(sw) {}
    friend ostream& operator<<(ostream& out, const Sea& s);
    friend istream& operator>>(istream& in, Sea& s);
};
class Bay : public WaterBody {
private:
    std::string type;
    bool has_islands;
    std::string country;
    std::string nearest_city;
public:
    Bay() {}
    Bay(std::string n, std::string l, double d, double a, std::string t, bool hi, std::string c, std::string nc) : WaterBody(n, l, d, a), type(t), has_islands(hi), country(c), nearest_city(nc) {}
    friend std::ostream& operator<<(std::ostream& out, const Bay& b);
    friend std::istream& operator>>(std::istream& in, Bay& b);
};

#endif /* WATER_H */

