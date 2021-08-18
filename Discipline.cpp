#include "Discipline.h"

std::ostream& operator<<(std::ostream& out, const Discipline& discipline) {
    out << discipline._name << " " << discipline._qpersonal;
    return out;
}

std::istream& operator>>(std::istream& in, Discipline& discipline) {
    in >> discipline._name >> discipline._qpersonal;
    return in;
}