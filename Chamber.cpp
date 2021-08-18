#include "Chamber.h"
#include <sstream>

std::ostream& operator<<(std::ostream& out, const Chamber& chamber) {
    out << chamber._name << " ";
    for (const auto& discipline: chamber._disciplines) {
        out << discipline << " ";
    }
    return out;
}

std::istream& operator>>(std::istream& in, Chamber& chamber) {
    in >> chamber._name;
    std::string line;
    std::getline(in, line);
    std::stringstream s{line};
    Discipline discipine;
    while (s >> discipine) {
        chamber._disciplines.push_back(discipine);
    }
    return in;
}