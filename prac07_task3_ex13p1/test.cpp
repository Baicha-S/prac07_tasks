#include "Person.h"
#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    Person person { "John", "Doe" };
    ostringstream oss;
    oss << "The initials of " << person.getFirstName() << " " << person.getLastName() << " are " << person.getInitials() << ".";
    cout << oss.str() << endl;

    Person person2 { "Marc", "Gregoire", "Mg" };
    ostringstream oss2;
    oss2 << "The initials of " << person2.getFirstName() << " " << person2.getLastName() << " are " << person2.getInitials() << ".";
    cout << oss2.str() << endl;

    Person persons[3];

    // Test copy constructor.
    Person copy { person };

    // Test assignment operator.
    Person otherPerson { "Jane", "Doe" };
    copy = otherPerson;

    // Test comparison operators.
    if (person < person2) { cout << "person < person2" << endl; }
    if (person > person2) { cout << "person > person2" << endl; }
    if (person <= person2) { cout << "person <= person2" << endl; }
    if (person >= person2) { cout << "person >= person2" << endl; }
    if (person == person2) { cout << "person == person2" << endl; }
    if (person != person2) { cout << "person != person2" << endl; }

    return 0;
}
