#pragma once
#include <iostream>
class Student
{
private:
    int contactNumber{};
    int groupNumber{};
    int dateOfBirth;
    char name[50];
    char surname[50];
    char city[50];
    char country[50];
    char theNameOfTheInstitution[50];
    char location[50];
public:
    void input(Student student);
    void info(Student student);

    // Getter - accessor
    int getContactNumber();
    int getGroupNumber();
    int getDateOfBirth();


    // Setter - mutator
    void setContactNumber(int value);
    void setGroupNumber(int value);
    void setDateOfBirth(int value1, int value2, int value3);
};