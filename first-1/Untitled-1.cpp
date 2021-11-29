#include <iostream>
#include <fstream>

using namespace std;


int main(){
    fstream outputfile;
    outputfile.open("data.txt",ios::out);
    outputfile<<"hellow world !";
    outputfile.close();
    return 0;

    
    
    }