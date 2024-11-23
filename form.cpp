#include "form.h"
#include <iostream>
#include <cstring>
using namespace std;

Contact::Contact() {
	strcpy(phone, "");
	strcpy(location, "");
	strcpy(countryName, "");
}





void Contact::print() const {
	cout << "Phone number: " << phone << endl;
}
