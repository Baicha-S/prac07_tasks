#ifndef DATABASE_H
#define DATABASE_H

#include "Person.h"
#include <vector>
#include <ostream>
#include <string_view>

class Database
{
public:
    void add(Person person)
    {
        m_persons.push_back(std::move(person));
    }

    void clear()
    {
        m_persons.clear();
    }

    void outputAll(std::ostream& output) const
    {
        for (const auto& person : m_persons) {
            person.output(output);
        }
    }

private:
    std::vector<Person> m_persons;
};

#endif 
