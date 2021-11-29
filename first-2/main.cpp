#include <iostream>
#include <fstream>

using namespace std;

struct person {
    string name;
    int id;
    char grade;

};


int main() {
    person p1;
    p1.name = "loay";
    p1.id = 20190396;
    p1.grade = 'A';

    fstream file;
    file.open("filename.txt",ios::out);
    file << p1.name << "|" << p1.id << "|" << p1.grade << endl;
    file.close();
}
    
