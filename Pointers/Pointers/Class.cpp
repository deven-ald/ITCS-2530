#include <iostream>

using namespace std;
struct student {
    string name;
    char courseGrade;
    double testGrade, GPA;

};
int main()
{
    student john;
    student* nhoj = &john;
    nhoj->courseGrade = 'A';
    nhoj->testGrade = 89.234;
    nhoj->GPA = 1.032;
    nhoj->name = "Johnny Boy";
    cout << john.courseGrade << endl;
    return 0;
}