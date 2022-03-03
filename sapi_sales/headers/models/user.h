

#ifndef SAPISALES_USER_H
#define SAPISALES_USER_H

#include "stdlib.h"
#include "stdio.h"
#include "string.h"

enum UserType{
    STUDENT,
    TEACHER
};

enum Gender{
    FEMALE,
    MALE
};

enum Specialization{
    INFORMATICS,
    COMPUTER_SCIENCE,
    AUTOMATION,
    TELECOMMUNICATION,

    MATHEMATICS_INFORMATICS,
    ENGINEERING
};

typedef struct{
    unsigned int id;
    char name[50];
    enum UserType type;
    enum Gender gender;
    enum Specialization specialization;
    unsigned int birthYear;
}User;

char* getUserType(enum UserType type);
char* getGender(enum Gender type);
char* getSpecialization(enum Specialization type);

void createUser(User** user);

void setUserData(
        User* user,
        char* name,
        enum UserType type,
        enum Gender gender,
                enum Specialization specialization,
                        int birthYear);

/*User* createUser(
        char* name,
        enum UserType type,
        enum Gender gender,
        enum Specialization Specialization,
        unsigned int birthYear);
        */

void printUser(User* user);

void deleteUser(User **user);

#endif //SAPISALES_USER_H
