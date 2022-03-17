#include "user.h"
#include "errors.h"

int numberOfUsers = 0;

char* getUserType(enum UserType type){
    switch (type) {
        case STUDENT:
            return "Student";
        case TEACHER:
            return "Teacher";
        default:
            return "Undefined";
    }
}

char* getGender(enum Gender type){
    switch (type) {
        case MALE:
            return "Male";
        case FEMALE:
            return "Female";
        default:
            return "Undefined";
    }
}

char* getSpecialization(enum Specialization type){
    switch (type) {
        case INFORMATICS:
            return "Informatics";
        case COMPUTER_SCIENCE:
            return "Computer science";
        case AUTOMATION:
            return "Automation";
        case TELECOMMUNICATION:
            return "Telecommunication";
        case MATHEMATICS_INFORMATICS:
            return "Mathematics and Informatics";
        case ENGINEERING:
            return "Engineering";
        default:
            return "Undefined";
    }
}

void createUser(User **user) {
    *user = (User*)malloc(sizeof (User));
    if (!(*user)){
        printErrorMessage(MEMORY_ALLOCATION);
    }
}


/*
User* createUser(char* name, enum UserType type, enum Gender gender, enum Specialization specialization, unsigned int birthYear){
    User* newUser = malloc(sizeof(User));
    newUser->id = ++numberOfUsers;
    newUser->specialization = specialization;
    newUser->birthYear = birthYear;
    newUser->gender = gender;
    newUser->type = type;
    strcpy(newUser->name, name);
    return newUser;
}*/

void printUser(User *user){
    printf("%s details:\n"
           "\t - ID: %i\n"
           "\t - TYPE: %s\n"
           "\t - GENDER: %s\n"
           "\t - SPECIALIZATION: %s\n"
           "\t - BIRTH DATE: %i/%i/%i\n\n",
           user->name,
           user->id,
           getUserType(user->type),
           getGender(user->gender),
           getSpecialization(user->specialization),
           user->birthDate.birthYear,
           user->birthDate.birthMonth,
           user->birthDate.birthDay);
}

void setUserData(User *user, char *name, enum UserType type, enum Gender gender, enum Specialization specialization,
                 unsigned int birthYear, unsigned int birthMonth, unsigned int birthDay) {
    user->id = ++numberOfUsers*10 + 1000;
    user->specialization = specialization;
    user->birthDate.birthYear = birthYear;
    user->birthDate.birthMonth = birthMonth;
    user->birthDate.birthDay = birthDay;
    user->gender = gender;
    user->type = type;
    strcpy(user->name, name);
}

void deleteUser(User **user){
    free(*user);
    printDeleteMessage(USER_DELETED);
}