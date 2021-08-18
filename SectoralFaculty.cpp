#include "SectoralFaculty.h"

void SectoralFaculty::f() {}

SectoralFaculty::~SectoralFaculty() {}

void SectoralFaculty::dump(std::ofstream& out) {
    Faculty::dump(out);
    out << "BaseOrgs: " << _baseorgs.size() << "\n";
    for (const auto& baseorg: _baseorgs) {
        out << baseorg << "\n";
    }
}

void SectoralFaculty::load(std::ifstream& in) {
    Faculty::load(in);
    std::string label;
    int size;
    in >> label;
    in >> size;
    for (int i = 0; i < size; ++i) {
        BaseOrg bo;
        in >> bo;
        _baseorgs.push_back(bo);
    }
}