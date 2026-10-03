#include<iostream>
using namespace std;

// class name declared
class Student {
    public:
        string name, age, place;

        // function name declared
        void intro ()
        {
            cout << "Hi, I am " << name << ", " << age << " years old " << "and I'm from " << place << endl;
        }
};

// the ,main function started
int main() {
    // inside this main() function it will holds the info of students
    Student s1, s2;

    s1.name = "Anugraha S";
    s1.age = "18";
    s1.place = "Ernakulam";

    s2.name = "Anaswara S";
    s2.age = "18";
    s2.place = "Ernakulam";

    s1.intro();
    s2.intro();

    return 0;
}
