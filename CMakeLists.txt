cmake_minimum_required(VERSION 3.0)

project(faculties)

set(CMAKE_CXX_STANDARD 11)

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/in.txt
     DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

set(SOURCE_EXE main.cpp BaseOrg.cpp Chamber.cpp Discipline.cpp Faculty.cpp RegularFaculty.cpp SectoralFaculty.cpp FacultiesDataBase.cpp )

add_executable(main ${SOURCE_EXE})
