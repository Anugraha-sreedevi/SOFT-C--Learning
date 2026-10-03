#include<iostream>
using namespace std;

class Student {
    public:
        string name;

        void introduce ()
        {
            cout << "Hi, I am " << name << endl;
        }
};

int main() {
    Student s1;
    s1.name = "ANUGRAHA";
    s1.introduce();
    return 0;
}
