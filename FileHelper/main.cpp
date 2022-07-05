#include <iostream>
#include <fstream>

using namespace std;

ofstream createFile(string fileName) {
    ofstream file(fileName + ".txt");
    return file;
}

void writeFile(string str, ofstream &file) {
    file << str << endl;
    cout << "Writed the File" << endl;
}

void readFile(string fileName) {
    string str;
    ifstream file(fileName + ".txt");

    while (getline(file, str)) {
        cout << str << endl;
    }
}

int main() {
    ofstream file;
    file = createFile("myFile");
    for (int i = 0; i < 5; i++) {
        writeFile("This is a file", file);
    }
    readFile("myFile");
    file.close();
    return 0;
}
