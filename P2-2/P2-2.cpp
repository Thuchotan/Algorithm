#include<iostream>

struct SV{
    std::string Name;
    int age;
    std::string Class;
};

void deleteData(SV& sv) {
    sv.Name = "";
    sv.age = 0;
    sv.Class = "";
}

int main(){
    SV* sinhvien1 = new SV;
    sinhvien1->Name = "Nguyễn Văn A";
    sinhvien1->age = 6;
    sinhvien1->Class ="1A3";
    //print the output
    std::cout << "Name:" << sinhvien1->Name << " - Age:" << sinhvien1->age << " - Class:" << sinhvien1->Class << "\n";

    //take input for new Class 
    std::cout<<"Change class for sinhvien1: \n";
    std::cin >> sinhvien1->Class;
    //print after change
    std::cout<<"After changing the class:\n";
    std::cout << "Name:" << sinhvien1->Name << " - Age:" << sinhvien1->age << " - Class:" << sinhvien1->Class << "\n";
    //Delete data of sinhvien1
    deleteData(*sinhvien1);
    std::cout << "After deleting data:\n";
    std::cout << "Name:" << sinhvien1->Name << " - Age:" << sinhvien1->age << " - Class:" << sinhvien1->Class << "\n";

    std::cin.get();
    std::cin.get();
    return 0;
}