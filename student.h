#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
using namespace std;


class Student {
private:
    string fullName;
    string dateOfBirth;
    string contactNumber;
    string city;
    string country;
    string institutionName;
    string institutionCity;
    string institutionCountry;
    int groupNumber;

public:
    Student(const string& name, const string& dob, const string& contact, const string& cit, const string& coun, const string& instName, const string& instCity, const string& instCountry, int group);

    const string& getName() const;
    const string& getDateOfBirth() const;
    const string& getContactNumber() const;
    const string& getCity() const;
    const string& getCountry() const;
    const string& getInstitutionName() const;
    const string& getInstitutionCity() const;
    const string& getInstitutionCountry() const;
    int getGroupNumber() const;

    void inputDetails();
    void displayDetails() const;
};

#endif