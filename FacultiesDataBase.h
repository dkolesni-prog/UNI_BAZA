#ifndef FACULTIES_DATA_BASE_H
#define FACULTIES_DATA_BASE_H

#include "Faculty.h"
#include <vector>
#include <fstream>



class FacultiesDataBase {
private:
    std::string DataBaseName;
    std::vector<Faculty*> _faculties;

    static void dumpItem(Faculty* faculty, std::ofstream& out);
    static int loadItem(Faculty** faculty, std::ifstream& in);  
public:
    void dump(std::ofstream& out);
    void load(std::ifstream& in);

    void SetName(std::string);
    std::string GetName();
    FacultiesDataBase CreateDataBase();

    std::vector<std::string> GetFacultyNames();

    };




#endif // FACULTIES_DATA_BASE_H