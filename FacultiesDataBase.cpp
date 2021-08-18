#include "FacultiesDataBase.h"
#include "RegularFaculty.h"
#include "SectoralFaculty.h"

void FacultiesDataBase::dumpItem(Faculty* faculty, std::ofstream& out) {
    auto isRegular = dynamic_cast<RegularFaculty*>(faculty);
    // проверка на тип факультета
    if (isRegular) {
        out << "Regular" << std::endl;
        faculty->dump(out); // запись в файл информации о факультете
    }
    else {
        out << "Sectoral" << std::endl;
        faculty->dump(out);
    }
}

int FacultiesDataBase::loadItem(Faculty** faculty, std::ifstream& in) {
    std::string type;
    in >> type;
    if (in.eof()) {
        return 1;
    }
    if (type == "Regular") {
        *faculty = new RegularFaculty();
    }
    else {
        *faculty = new SectoralFaculty();
    }
    (*faculty)->load(in); //
    return 0;
}

void FacultiesDataBase::dump(std::ofstream& out) { // запись в файл информации о каждом факультете в файл
    for (const auto faculty : _faculties) {
        dumpItem(faculty, out);
    }
}

void FacultiesDataBase::load(std::ifstream& in) {
    Faculty* faculty = nullptr;
    int result = 0;
    while ((result = loadItem(&faculty, in)) != 1) {
        _faculties.push_back(faculty);
    }
}

void FacultiesDataBase::SetName(std::string name) {
    DataBaseName = name;
}

std::string FacultiesDataBase::GetName() {
    return DataBaseName;
}

FacultiesDataBase FacultiesDataBase::CreateDataBase() {
    FacultiesDataBase *bd = new FacultiesDataBase();//создаем экз
    std::string str;
    std::cout << "Введте название БД" << std::endl;
    std::cin >> str;
    bd->SetName(str);
}

//std::vector<std::string> FacultiesDataBase::GetFacultyNames() {
//    std::vector<std::string> FacNames;
//    for (auto &item : _faculties)
//        if ()
//        FacNames.push_back(item->GetFacName() + " - склад одежды");
//
//    return FacNames;
//}







