#ifndef BASEORG_H
#define BASEORG_H

#include <vector>
#include "Discipline.h"

// Класс базовой организации
class BaseOrg {
private:
    std::string _name;
    std::vector<Discipline> _disciplines;
public:
    friend std::ostream& operator<<(std::ostream& out, const BaseOrg& baseorg);
    friend std::istream& operator>>(std::istream& in, BaseOrg& baseorg);
};

#endif // BASEORG_H