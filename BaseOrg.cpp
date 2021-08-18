#include "BaseOrg.h"
#include <sstream>

std::ostream& operator<<(std::ostream& out, const BaseOrg& baseorg) {
    out << baseorg._name << " ";
    for (const auto& discipline : baseorg._disciplines) {
        out << discipline << " ";
    }
    return out;
}

std::istream& operator>>(std::istream& in, BaseOrg& baseorg) {
    in >> baseorg._name;
    std::string line;
    std::getline(in, line);
    std::stringstream s{line};
    Discipline discipine;
    while (s >> discipine) {
        baseorg._disciplines.push_back(discipine);
    }
    return in;
}