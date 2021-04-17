#include"class.hpp"
#include<fstream>
using namespace std;
using json = nlohmann::json;

static int cnt, pool[100000];

int main()
{
    fstream file;
    int input;
    map<string, int> name;//姓名到序号映射
    map<int, int> card;//学号到序号映射
    map<int, student> students;//
    map<int, teacher> teachers;//序号到对象映射
    map<int, staff> staffs;    //
    make(students, teachers, staffs);//自动生成三种对象各五个
    json student_js = students;
    json load_js;
    cout << "欢迎使用高校人员信息管理系统！" << endl
         << "请选择要使用的功能：" << endl
         << "要增加一个新的教师，请输入“1” " << endl
         << "要根据卡号删除成员，请输入“2”" << endl
         << "要根据姓名卡号查找，请输入“3”" << endl
         << "要输出一个学院内的所有教师和学生信息，请输入“4”" << endl
         << "要退出系统，请输入“6”" << endl;
    // auto js = json::parse(student_js);
    file.open("data.json", ios::out);
    cout << "file opened" << endl;
    file << student_js;
    cout << "file edited" << endl;
    file.close();
    file.open("data.json", ios::in);
    file >> load_js;
    map<int, student> recieve = load_js.get<map<int, student>>();
    int size = recieve.size();
    for (int i = 0; i < size; i++)
    {
        cout << recieve[i].name << endl;
    }
    file.close();
}