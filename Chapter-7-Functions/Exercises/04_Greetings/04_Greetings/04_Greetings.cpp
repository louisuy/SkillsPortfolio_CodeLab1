#include <iostream>
#include <string>
using namespace std;

void greeter(string name, string greeting) {
    cout << greeting << ", " << name << "!" << endl;
}

int main()
{
    string name, greeting;
    cout << "What is your name: ";
    getline (cin, name);
    cout << "Greeting (e.g. Good morning): ";
    getline (cin, greeting);

    greeter(name, greeting);

    system("pause>0");
    return 0;
}
