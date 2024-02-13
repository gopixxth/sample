#include <iostream>
using namespace std;

class WelcomeProgram {
public:
    void displayWelcome() {
        cout << "WELCOME" << endl;
    }
};

int main() {
    WelcomeProgram program;
    program.displayWelcome();
    return 0;
}