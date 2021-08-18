#ifndef CHAMBER_H
#define CHAMBER_H

#include <string>
#include <vector>
#include "Discipline.h"
#include <iostream>


class Chamber {
private:
    std::string _name;
    std::vector<Discipline> _disciplines;
public:
    friend std::ostream& operator<<(std::ostream& out, const Chamber& chamber);
    friend std::istream& operator>>(std::istream& in, Chamber& chamber);
};

#endif // CHAMBER_H