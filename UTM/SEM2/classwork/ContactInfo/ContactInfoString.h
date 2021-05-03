#ifndef CONTACTINFOSTRING_H
#define CONTACTINFOSTRING_H
#include<string>

class ContactInfoString{
    private:
        std::string *name;
        std::string *phone;
    public:
        ContactInfoString(std::string *n, std::string *p){
            name = new std::string;
            phone = new std::string;

            name = n;
            phone = p;
        }

        ~ContactInfoString(){
            delete name;
            delete phone;
        }

        std::string *getName(){
            return name;
        }

        std::string *getPhoneNumber(){
            return phone;
        }        
};

#endif