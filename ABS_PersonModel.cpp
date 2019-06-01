// AndrewTest2.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
Author: Andrew Schwartz
Date: 5/31/19

Takes in a first name, last name, and postal code and checks if you have the same name, initals, and general area as the default name, default is Tim Corey
Based off a project by YouTube user IAmTimCorey

https://www.youtube.com/watch?v=66kgrXN-sqE

*/


//

#include <string>
#include <iostream>
using namespace std;

//assign default values to avoid "Magic Numbers"
string default_first_name = "Tim";
string default_last_name = "Corey";
int default_postal_code = 18337;

string default_first_initial = default_first_name.substr(0, 1);
string default_last_initial = default_last_name.substr(0, 1);
string default_pc_digits = to_string(default_postal_code).substr(0, 2);



class PersonModel {
public:
	string firstname;
	string lastname;
	int postalcode;
};


void ApplyRules(PersonModel myPerson)
{
	//checks if any empty fields entered
	if (myPerson.firstname == "")
		cout << "no first name entered \n";
	if (myPerson.lastname == "")
		cout << "no last name entered \n";
	if (myPerson.postalcode == 0)
		cout << "no postal code entered \n";

	if (myPerson.firstname == default_first_name && myPerson.lastname == default_last_name)
		cout << "you are " << default_first_name << " " << default_last_name << " \n";

	else if (myPerson.firstname != default_first_name && myPerson.lastname == default_last_name)
		cout << "You may be related to " << default_first_name << " " << default_last_name << " \n";

	string fn_first_initial = myPerson.firstname.substr(0, 1);
	string ln_first_initial = myPerson.lastname.substr(0, 1);
	string pc_first_digits = to_string(myPerson.postalcode).substr(0, 2);

	if (fn_first_initial == default_first_initial && ln_first_initial == default_last_initial)
		cout << "Same initials as " << default_first_name << " " << default_last_name << " \n";

	if (pc_first_digits == default_pc_digits)
		cout << "Same general area as " << default_first_name << " " << default_last_name << " \n";

}

int main()
{
	string myString = "";
	int myInt = 0;
	PersonModel testPerson;
	//string firstname = "";
	//string lastname = "";
	//int postalcode = 0;


	cout << "How Similar are you to Tim Corey? \nEnter your first name: ";
	cin >> myString;
	testPerson.firstname = myString;

	cout << "\nEnter your last name: ";
	cin >> myString;
	testPerson.lastname = myString;

	cout << "\nEnter your Postal Code: ";
	cin >> myInt;
	testPerson.postalcode = myInt;

	ApplyRules(testPerson);

	//cout << "\nProgram finished!";
}

