#include "Water.h"
#include <iostream>

std::ostream& operator<<(std::ostream& out, const WaterBody& w)
{
    out << "Name: " << w.name << std::endl;
    out << "Location: " << w.location << std::endl;
    out << "Depth: " << w.depth << " m" << std::endl;
    out << "Surface area: " << w.surface_area << " sq km" << std::endl;
    return out;
}

std::istream& operator>>(std::istream& in, WaterBody& w)
{
    std::cout << "Enter name: ";
    in >> w.name;
    std::cout << "Enter location: ";
    in >> w.location;
    std::cout << "Enter depth (m): ";
    in >> w.depth;
    std::cout << "Enter surface area (sq km): ";
    in >> w.surface_area;
    return in;
}

std::ostream& operator<<(std::ostream& out, const Bay& b)
{
    out << static_cast<const WaterBody&>(b);
    out << "Type: " << b.type << std::endl;
    out << "Has islands: " << b.has_islands << std::endl;
    out << "Country: " << b.country << std::endl;
    out << "Nearest city: " << b.nearest_city << std::endl;
    return out;
}

std::istream& operator>>(std::istream& in, Bay& b)
{
    in >> static_cast<const Ocean&>(b);
    std::cout << "Enter country: ";
    in >> b.country;
    std::cout << "Enter nearest city: ";
    in >> b.nearest_city;
    return in;
}
