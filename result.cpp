#include <iostream>

using namespace std;

struct result{
    char name[20];
    float cgpa;
    int rollno;
};

typedef struct result Result;

void printResult(Result std);

int main(){
    Result stud;

    cout << "enter roll no: "; cin >> stud.rollno;
    cout << "enter name of student:"; cin >> stud.name;
    cout << "enter cgpa:"; cin >> stud.cgpa;

    printResult(stud);

    cout << "size of stud var is: "<< sizeof(stud)<< endl;

    return 1;
}

void printResult(Result stud){
    cout << "roll no:" << stud.rollno<<endl;
    cout << "name of student:"<< stud.name<<endl;
    cout << "cgpa" << stud.cgpa<<endl;
}
