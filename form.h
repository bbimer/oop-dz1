#pragma once


class Contact {
private:
    char phone[15];
    char location[25];
    char countryName[25];

public:
    Contact();

    void setPhoneNumber(const char* num);
    void setPlace(const char* place);
    void setCountry(const char* country);

    void print() const;
};
