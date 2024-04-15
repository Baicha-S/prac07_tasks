#include "database.h"
#include "Person.h"
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <sstream>
#include <vector>

void database::clear()
{
    m_persons.clear();
}

void database::outputAll(std::ostream& output) const
{
    for (const auto& person : m_persons) {
        person.output(output);
    }
}
