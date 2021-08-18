#ifndef REGULAR_FACULTY_H
#define REGULAR_FACULTY_H

#include "Faculty.h"

class RegularFaculty : public Faculty {
private:

public:
    const bool REG = 1;
    virtual void f();
    virtual ~RegularFaculty();
    virtual void dump(std::ofstream& out) override;
    virtual void load(std::ifstream& in) override;
};

#endif // REGULAR_FACULTY_H