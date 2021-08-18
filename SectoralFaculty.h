#ifndef SECTORAL_FACULTY_H
#define SECTORAL_FACULTY_H

#include "Faculty.h"
#include "BaseOrg.h"
#include <vector>

class SectoralFaculty : public Faculty {
private:
    std::vector<BaseOrg> _baseorgs;
public:
    const bool REG = 0;
    virtual void f();
    virtual ~SectoralFaculty();
    virtual void dump(std::ofstream& out) override;
    virtual void load(std::ifstream& in) override;

};

#endif // SECTORAL_FACULTY_H