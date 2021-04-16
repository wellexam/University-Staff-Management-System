#include"class.hpp"

using namespace std;
using json = nlohmann::json;

int main()
{
    int input;
    // map<string, int> name;
    // map<int, int> card;
    // map<int, int> seq;
    map<int, student> students;
    map<int, teacher> teachers;
    map<int, staff> staffs;
    make(students, teachers, staffs);
    json student_js = students;
    // cout << "欢迎使用高校人员信息管理系统！" << endl
    //      << "请选择要使用的功能：" << endl
    //      << "要增加一个新的教师，请输入“1” " << endl
    //      << "要根据卡号删除成员，请输入“2”" << endl
    //      << "要根据姓名卡号查找，请输入“3”" << endl
    //      << "要输出一个学院内的所有教师和学生信息，请输入“4”" << endl
    //      << "要退出系统，请输入“6”" << endl;
    // auto js = json::parse(student_js);
    cout << student_js << endl;
}