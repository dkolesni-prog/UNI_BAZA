#ifndef DISCIPLINE_H
#define DISCIPLINE_H

#include <iostream>
#include <string>

// Класс дисциплина
class Discipline {
private:
    std::string _name;   // Название дисциплины
    int _qpersonal;      // Количество персонала для дисциплины
public:
    friend std::ostream& operator<<(std::ostream& out, const Discipline& discipline);
    friend std::istream& operator>>(std::istream& in, Discipline& discipline);
};

#endif // DISCIPLINE_H