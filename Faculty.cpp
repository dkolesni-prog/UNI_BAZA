#include "Faculty.h"
#include "SectoralFaculty.h"
#include "RegularFaculty.h"

Faculty::~Faculty() {}

void Faculty::dump(std::ofstream& out) { // записать в файл
    out << _name << " " << _NUK << " " << _number_of_chambers << "\n";
    for (const auto& chamber : _chambers) {
        out << chamber << "\n";
    }
}

void Faculty::load(std::ifstream& in) { // считывание из файла
    in >> _name >> _NUK >> _number_of_chambers;
    for (int i = 0; i < _number_of_chambers; ++i) {
        Chamber chamber;
        in >> chamber;
        _chambers.push_back(chamber);
    }
}

std::string Faculty::GetFacName() {
    return _name;
}

bool Faculty::isRegular() {
   // if (REG) ?
}

