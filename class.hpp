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

        friend void to_json(json&j, const student& s)
        {
            j = json{{"card", s.card}, {"name", s.name}, {"sex", s.sex}, {"sequence", s.sequence}, {"year", s.year}, {"college", s.college}};
        }

        friend void from_json(const json&j, student&s)
        {
            s.card = j.at("card").get<int>();
            s.name = j.at("name").get<string>();
            s.sex = j.at("sex").get<int>();
            s.sequence = j.at("sequence").get<int>();
            s.year = j.at("year").get<int>();
            s.college = j.at("college").get<string>();
        }
};

class teacher : public person
{
    public:
        string subject;
        string college;
        int age;

        friend void to_json(json&j, const teacher&t)
        {
            j = json{{"card", t.card}, {"name", t.name}, {"sex", t.sex}, {"sequence", t.sequence}, {"age", t.age}, {"subject", t.subject}};
        }

        friend void from_json(const json&j, teacher&t)
        {
            t.card = j.at("card").get<int>();
            t.name = j.at("name").get<string>();
            t.sex = j.at("sex").get<int>();
            t.sequence = j.at("sequence").get<int>();
            t.age = j.at("age").get<int>();
            t.subject = j.at("subject").get<string>();
        }
};

class staff : public person
{
    public:
        string department;
        float salary;

        friend void to_json(json&j, const staff& s)
        {
            j = json{{"card", s.card}, {"name", s.name}, {"sex", s.sex}, {"sequence", s.sequence}, {"slary", s.salary}, {"department", s.department}};
        }

        friend void from_json(const json&j, staff&s)
        {
            s.card = j.at("card").get<int>();
            s.name = j.at("name").get<string>();
            s.sex = j.at("sex").get<int>();
            s.sequence = j.at("sequence").get<int>();
            s.salary = j.at("salary").get<int>();
            s.department = j.at("department").get<string>();
        }
};

void make(map<int, student>&, map<int, teacher>&, map<int, staff>&);