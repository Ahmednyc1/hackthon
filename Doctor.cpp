#include <iostream>
#include <string>
#include <vector>
#include "Patient.cpp"
using namespace std; 
class Doctor: public Person {

    public : 
     Doctor();
     Doctor(string d_name,string h_provider,string doctor_spec);
     void setname(const string&doc_name);
     string getname()const ;
     void sethealthcare(const string& healthcare);
     string gethealthcare()const ;
     void set_doctortype(const string& typ);
     string getdoctype()const ;
     string addDoctorsinfo(string&new_entry);
    private :
    vector<string> doctors; 
    string name_; 
    string healthcare_provided_;
    string type_of_doctor_;
};
Doctor::Doctor():name_(""),healthcare_provided_(""),type_of_doctor_(""){

}
Doctor:: Doctor(string d_name,string h_provider,string doctor_spec){
    name_=d_name ;
    healthcare_provided_=h_provider ;
    type_of_doctor_=doctor_spec ;
}
void Doctor::setname(const string&doc_name){
    name_=doc_name ;
}
string Doctor::getname() const{
    return name_;
}
void Doctor::sethealthcare(const string& healthcare){
    healthcare_provided_=healthcare ;
}
string Doctor::gethealthcare()const{
    return healthcare_provided_ ;
}
void Doctor::set_doctortype(const string &typ){
    type_of_doctor_=typ ;
}
string Doctor::getdoctype()const{
    return type_of_doctor_;
}
string Doctor::addDoctorsinfo(string& new_entry) {
    if (std::find(doctors.begin(), doctors.end(), new_entry) == doctors.end()) {
        doctors.push_back(new_entry);
        return "Entry added.";
    } else {
        return "Entry already exists.";
    }
}
