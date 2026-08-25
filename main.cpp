#include <iostream>
#include <string>

using namespace std;

int main () {
    string line;

    while(true){
        /*
         * print prompt
         * read input
         * do something with it
         */
        cout << "hi!  ";

        getline(cin, line);
        if (line.empty())
            continue;
        if (line == "exit"){
            cout << "bye ..." << endl;
            break;
        }
        if (line == "tell"){
            cout << "Hi! This is The Fool Shell for Wizards" << endl;
            continue;
        }
    }
    return 0;
}
