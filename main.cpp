#include"class.hpp"

using namespace std;

int main()
{
    int input;
    // map<string, int> name;
    // map<int, int> card;
    // map<int, int> seq;
    map<int, student> students;
    map<int, teacher> teachers;
    map<int, staff> staffs;
    init(students, teachers, staffs);
    cout << "��ӭʹ�ø�У��Ա��Ϣ����ϵͳ��" << endl
         << "��ѡ��Ҫʹ�õĹ��ܣ�" << endl
         << "Ҫ����һ���µĽ�ʦ�������롰1�� " << endl
         << "Ҫ���ݿ���ɾ����Ա�������롰2��" << endl
         << "Ҫ�����������Ų��ң������롰3��" << endl
         << "Ҫ���һ��ѧԺ�ڵ����н�ʦ��ѧ����Ϣ�������롰4��" << endl
         << "Ҫ�˳�ϵͳ�������롰6��" << endl;
    while(cin >> input)
    {
        
    }
}