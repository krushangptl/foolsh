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
        if ("exit"){
            cout << "bye ..." << endl;
            break;
        }
    }
    return 0;
}
