#include"class.hpp"

using namespace std;

void make(map<int, student>&students, map<int, teacher>&teachers, map<int, staff>&staffs)
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
    string name[] = {"尼古拉斯赵四", "张三", "李四", "王二麻子", "郭达斯坦森"};
    for (int i = 0; i <= 4;i++)
    {
        stu_temp[i].card = rand();
        stu_temp[i].sex = rand() % 2;
        stu_temp[i].year = rand();
        stu_temp[i].name = name[i];
        stu_temp[i].college = col[rand() % 5];
    }
    for (int i = 0; i <= 4;i++)
    {
        tea_temp[i].card = rand();
        tea_temp[i].sex = rand() % 2;
        tea_temp[i].age = rand();
        tea_temp[i].name = i;
        tea_temp[i].subject = col[rand() % 5];
    }
    for (int i = 0; i <= 4;i++)
    {
        sta_temp[i].card = rand();
        sta_temp[i].sex = rand() % 2;
        sta_temp[i].salary = rand();
        sta_temp[i].name = i;
        sta_temp[i].department = col[rand() % 5];
    }
    for (int i = 0; i <= 4;i++)
    {
        students[i] = stu_temp[i];
        teachers[i + 5] = tea_temp[i];
        staffs[i + 10] = sta_temp[i];
    }
}