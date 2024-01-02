#include "student.h"

Student::Student(const string& name, const string& dob, const string& contact, const string& cit, const string& coun, const string& instName, const string& instCity, const string& instCountry, int group)
    : fullName(name), dateOfBirth(dob), contactNumber(contact), city(cit), country(coun), institutionName(instName), institutionCity(instCity), institutionCountry(instCountry), groupNumber(group) {}

const string& Student::getName() const {
    return fullName;
}

const string& Student::getDateOfBirth() const {
    return dateOfBirth;
}

const string& Student::getContactNumber() const {
    return contactNumber;
}

const string& Student::getCity() const {
    return city;
}

const string& Student::getCountry() const {
    return country;
}

const string& Student::getInstitutionName() const {
    return institutionName;
}

const string& Student::getInstitutionCity() const {
    return institutionCity;
}

const string& Student::getInstitutionCountry() const {
    return institutionCountry;
}

int Student::getGroupNumber() const {
    return groupNumber;
}

void Student::inputDetails() {
    cout << "Enter name: ";
    cin >> fullName;

    cout << "Enter date of birth (dd-mm-yyyy): ";
    cin >> dateOfBirth;

    cout << "Enter contact number: ";
    cin >> contactNumber;

    
    
    cout << "Enter city: ";
    cin >> city;

    cout << "Enter country: ";
    cin >> country;

    cout << "Enter institution name: ";
    cin >> institutionName;

    cout << "Enter institution city: ";
    cin >> institutionCity;

    cout << "Enter institution country: ";
    cin >> institutionCountry;

    cout << "Enter group number: ";
    cin >> groupNumber;
}

void Student::displayDetails() const {
    cout << "Name: " << fullName << std::endl;
    cout << "Date of Birth: " << dateOfBirth << std::endl;
    cout << "Contact Number: " << contactNumber << std::endl;

    // Додайте логіку для виведення решти даних
    // Наприклад:
    cout << "City: " << city << std::endl;
    cout << "Country: " << country << std::endl;
    cout << "Institution Name: " << institutionName << std::endl;
    cout << "Institution City: " << institutionCity << std::endl;
    cout << "Institution Country: " << institutionCountry << std::endl;
    cout << "Group Number: " << groupNumber << std::endl;
}