

#include <iostream>
#include <vector>
#include <string>
#include "Person.cpp"
using namespace std;
class Patient:public Person {
public :
Patient();
Patient(string patient_name,string patients_healthcare,string patients_pain);
void setPname(const string&pname);
string getPname();
void setPhealthcare(const string&phealthcare);
string getphealthcare();
void setPatientsPain(const string& pPain);
string getPatientsPain();
string addPatientsinfo(string&new_entry);
private:
vector<string>Patients_info ; 
 string patient_name_;
string patients_healthcare_;
string  patients_pain_;
};
Patient::Patient(): patient_name_(""),patients_healthcare_(""),patients_pain_(""){

}
Patient::Patient(string patient_name,string patients_healthcare,string patients_pain){
    patient_name_=patient_name ;
    patients_healthcare_=patients_healthcare;
    patients_pain_=patients_pain;
}
void Patient::setPname(const string&pname){
    patient_name_=pname ;
}
string Patient::getPname(){
    return patient_name_ ;
}
void Patient::setPhealthcare(const string&phealthcare){
    patients_healthcare_=phealthcare;
}
string Patient::getphealthcare(){
    return patients_healthcare_ ;
}
void Patient::setPatientsPain(const string&pPain){
    patients_pain_=pPain;
}
string Patient::getPatientsPain(){
    return patients_pain_ ;
}
string Patient::addPatientsinfo(string &new_entry){
if (std::find(Patients_info.begin(), Patients_info.end(), new_entry) == Patients_info.end()) {
        Patients_info.push_back(new_entry);
        return "Entry added.";
    } else {
        return "Entry already exists.";
    }
}
