#include <iostream>
#include <fstream>
#include <string> 

using namespace std;

void write2file(const char *file, const char *message) {
        ofstream oFile(file);
        if(!oFile) {
                throw runtime_error("Failed open file fow write");
        }

        oFile << message << endl;

        oFile.close();

        cout << "Data successfully written to " << file << endl;
}       

void readFile(const char *file) {
        // just read and print data from file

        ifstream iFile(file);
        if(!iFile) {
                throw runtime_error("Failed open file for read");
        }

        string buffer;

        while(getline(iFile, buffer)) {
                cout << "[" << file << "] >> " << buffer << endl;
        }

        iFile.close();
}

int main() {    
        const char *message = "Hello world!";
        const char *file = "file.txt"; 

        write2file(file, message);
        readFile(file);

        return 0;
}