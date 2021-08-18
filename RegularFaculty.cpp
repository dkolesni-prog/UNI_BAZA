#include "RegularFaculty.h"

void RegularFaculty::f() {}

RegularFaculty::~RegularFaculty() {}

void RegularFaculty::dump(std::ofstream& out) {
    Faculty::dump(out);
}

void RegularFaculty::load(std::ifstream& in) {
    Faculty::load(in);
}