#include<string>
#include<iostream>
#include"json.hpp"
#include<map>
#include<list>
#include<cstdlib>

using json = nlohmann::json;
using namespace std;

class person
{
    public:
        int card;
        string name;
        int sex;
        int sequence;
};

class student : public person
{
    public:
        int year;
        string college;

        student();
};

class teacher : public person
{
    public:
        string subject;
        string college;
        int age;

        teacher();
};

class staff : public person
{
    public:
        string department;
        float salary;

        staff();
};

void init(map<int, student>&, map<int, teacher>&, map<int, staff>&);