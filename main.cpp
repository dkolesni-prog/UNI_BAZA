#include <iostream>
#include <fstream>
#include "FacultiesDataBase.h"
#include "RegularFaculty.h"
#include "SectoralFaculty.h"
#include <string>



/*
 *
 * 1. Реализовать абстрактный класс, содержащий чистые виртуальные функции, +
функционал которых различается для наследников, заданных вариантом и отличающихся
организацией данных (группировкой).

2. Реализовать разбор текстовых команд, введённых с клавиатуры. +
3. Разработать формат сохранения БД в файл. +
4. Реализовать функции в соответствии с вариантом.
5. Реализовать управление базами данных через интерфейс СУБД:

5.1) Создание однотипных БД и гибридных БД.

5.2) Вывод на экран* списка существующих БД. +
5.3) Удаление* БД.
5.4) Переименование* БД.
5.5) Открытие** БД.
5.6) Сохранение** БД. dump
5.7) Добавление записей в БД.
5.8) Удаление записей в БД.
5.9) Вывод на экран записей БД.
5.10) Сортировка записей БД.
5.11) Выборка записей БД по правилу (подмножество записей).
5.12) Сохранение** выборки как новой БД (по желанию пользователя).
5.13) Редактирование записей в БД (для претендующих на 4 и 5).

 */

int UsingBDStrCase() {
    std::string str;
    std::cout << std::endl << "______________________________________" << std::endl;
    std::cout << "Выберите действиеs" << std::endl;
    std::cout << "1-Вывести список факультетоу" << std::endl;
    std::cout << "2-Вывести информацию о факультете" << std::endl;
    std::cout << "3-Сортировка факультетов по названию" << std::endl;
    std::cout << "4-сортировка факультетов по числу кафедр" << std::endl;
    std::cout << "5-Выборка факультетов относящихся к НУК (введённому с клавиатуры)" << std::endl;
    std::cout << "6-Выборка факультетов ведущих дисциплину (ввести её с клавиатуры)" << std::endl;
    std::cout << "7-Добавть факультет" << std::endl;
    std::cout << "8-Управление факультетом" << std::endl;
    std::cout << "9-Сохранить БД" << std::endl;
    std::cout << "0-Назад" << std::endl;
    std::cout << "______________________________________" << std::endl;
    getline(std::cin, str);
    getline(std::cin, str);
    transform(str.begin(), str.end(), str.begin(), ::tolower);//переводим в нижний текст
    if (str == "1" || str == "Вывести список факультетоу")
        return 1;
    if (str == "2" || str == "Вывести информацию о факультете")
        return 2;
    if (str == "3" || str == "Сортировка факультетов по названию")
        return 3;
    if (str == "4" || str == "сортировка факультетов по числу кафедр")
        return 4;
    if (str == "5" || str == "Выборка факультетов по НУК")
        return 5;
    if (str == "6" || str == " Выборка факультетов ведущих дисциплину ")
        return 6;
    if (str == "7" || str == "добавть факультет")
        return 7;
    if (str == "8" || str == "управление факультетом" || str == "управлять факультетом")
        return 8;
    if (str == "9" || str == "сохранить")
        return 9;
    if (str == "0" || str == "выход" || str == "назад")
        return 0;
    return -1;
}

void UsingDataBase(FacultiesDataBase &_DB) {
    std::string str;
    std::vector<std::string> Vec_of_faculty_names;
    int t = 0;
    Faculty *reg = new RegularFaculty();
    Faculty *sec = new SectoralFaculty();
    FacultiesDataBase newBD;

    while (true) {

        t = UsingBDStrCase();
        switch (t) {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:

                break;
            case 6:

                break;
            case 7:
                // Добавление факультета
                break;
            case 8:
                // Перейти к управлению факультетом

                break;
            case 9:
                //SaveBD(_bd);
                //cout << "БД сохранена" << std::endl;
                break;
            case 0:
                return;
                break;
            default:
                std::cout << "Неверный ввод" << std::endl;
                break;
        }
        //cout << "\n______________________________________\n";
    }
}





int MainStrCase() {
    std::string str;
    std::cout << std::endl << "--------------------------------------" << std::endl;
    std::cout << "Выберите действие " << std::endl;
    std::cout << "1-Вывести существующие БД " << std::endl;
    std::cout << "2-Открыть БД " << std::endl;
    std::cout << "3-Добавить БД " << std::endl;
    std::cout << "4-Переименовать БД " << std::endl;
    std::cout << "5-Удалить БД " << std::endl;
    std::cout << "0-Выход " << std::endl;
    std::cout << "-------------------------------------- " << std::endl;
    getline(std::cin, str);
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    if (str == "1")
        return 1;
    if (str == "2")
        return 2;
    if (str == "3")
        return 3;
    if (str == "4")
        return 4;
    if (str == "5")
        return 5;
    if (str == "0")
        return 0;
    return 7;
}

const FacultiesDataBase &CreateBD() {
    FacultiesDataBase *bd = new FacultiesDataBase();//создаем экз
    std::string name;
    std::cout << "Введте название БД" << std::endl;
    std::cin >> name;//ввод
    bd->SetName(name);//устанавливаем имя
    return *bd;
}

const std::string path = "/Users/daniilkolesnik/Downloads/Faculties-master/cmake-build-debug/Testing/Vault";

int main() {

//    FacultiesDataBase db;
//
//    std::ifstream in("in.txt", std::ios::in);
//
//    db.load(in);
//
//    in.close();
//
//    std::ofstream out("out.txt", std::ios::out);
//
//    db.dump(out);
//
//    out.close();

    std::string str, str1;//свободная переменная
    FacultiesDataBase bd;// БД
    size_t t = 0;
    while (true) {
        t = MainStrCase();
        switch (t) {
            case 1:
                // Вывод сущ. БД
                std::cout << "--------------------------------------" << std::endl;
                std::cout << "Существующие БД: " << std::endl;
                for (auto &p : std::__fs::filesystem::directory_iterator(path))//ещем файлы в дериктории
                {
                    str = p.path().filename().string();//берем название пути
                    std::cout << str.erase(str.length() - 4)
                              << std::endl;//выводим название, от которого отсекаем последние 4 символа(прасширение)
                }
            case 3:
                //Добавление БД
                bd = CreateBD();//создание бд


                break;


            default:
                std::cout << "Неверный ввод" << std::endl;
                break;

        }


    }


    return 0;
}