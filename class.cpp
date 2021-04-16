#include"class.hpp"

using namespace std;

void init(map<int, student>&students, map<int, teacher>&teachers, map<int, staff>&staffs)
{
    student stu_temp[5];
    teacher tea_temp[5];
    staff sta_temp[5];
    string col[5];
    col[0] = "CS";
    col[1] = "CHEM";
    col[2] = "MATH";
    col[3] = "PHY";
    col[4] = "BIO";
    for (int i = 0; i <= 4;i++)
    {
        stu_temp[i].card = rand();
        stu_temp[i].sex = rand() % 2;
        stu_temp[i].year = rand();
        stu_temp[i].name = i;
        stu_temp[i].college = col[rand() % 5];
    }
}