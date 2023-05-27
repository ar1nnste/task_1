#include "Stud.h"

int Student::getContactNumber()
{
	return contactNumber;
}

int Student::getDateOfBirth()
{
	return dateOfBirth;
}

int Student::getGroupNumber()
{
	return groupNumber;
}

void Student::setContactNumber(int value)
{
	if (value > 111111111 && value < 999999999)
	{
		contactNumber = value;
	}
}

void Student::setDateOfBirth(int value1, int value2, int value3)
{
	if (value1 > 0 && value1 <= 31)
	{
		dateOfBirth = value1;
	}
	else if (value2 > 0 && value2 <= 12)
	{
		dateOfBirth = value2;
	}
	else if (value3 > 1940 && value3 <= 2023)
	{
		dateOfBirth = value3;
	}
}

void Student::setGroupNumber(int value)
{
	if (value > 0 && value <= 20)
	{
		groupNumber = value;
	}
}

void Student::input(Student student)
{
	int value;
	int value2;
	int dd, mm, yy;
	std::cout << "Enter name: ";
	std::cin >> student.name;

	std::cout << "Enter surname: ";
	std::cin >> student.surname;

	std::cout << "Enter the city: ";
	std::cin >> student.city;

	std::cout << "Enter the country: ";
	std::cin >> student.country;

	std::cout << "Enter the name of the educational institution: ";
	std::cin >> student.theNameOfTheInstitution;

	std::cout << "Enter the location: ";
	std::cin >> student.location;

	std::cout << "Enter phone number: ";
	std::cin >> value;

	std::cout << "Enter group number: ";
	std::cin >> value2;

	std::cout << "Enter your date of birth: ";
	std::cin >> dd >> mm >> yy;

	student.setContactNumber(value);
	student.setGroupNumber(value2);
	std::cout << '\n';
	std::cout << "Name: " << student.name << '\n';
	std::cout << "Surname: " << student.surname << '\n';
	std::cout << "City: " << student.city << '\n';
	std::cout << "Country: " << student.country << '\n';
	std::cout << "Name of the educational institution: " << student.theNameOfTheInstitution << '\n';
	std::cout << "Location: " << student.location << '\n';
	std::cout << "Phone number: " << student.getContactNumber() << '\n';
	std::cout << "Group number: " << student.getGroupNumber() << '\n';
	student.setDateOfBirth(dd, dd, dd);
	std::cout << "Date birth: " << student.getDateOfBirth() << '.';
	student.setDateOfBirth(mm, mm, mm);
	std::cout << student.getDateOfBirth() << '.';
	student.setDateOfBirth(yy, yy, yy);
	std::cout << student.getDateOfBirth() << '\n';
	std::cout << '\n';
}
