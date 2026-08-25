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

        if (line == "help"){
            cout << "Avalible built-in command:" << endl;
            cout << " exit - Exit the shell" << endl;
            cout << " tell - Get Message from The Fool Shell" << endl;
            cout << " help - Help" << endl;
            cout << "Everything else runs as external command!" << endl;
        }
    }
    return 0;
}
