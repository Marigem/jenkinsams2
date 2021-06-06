#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    string ams="ams";

    if (argv[1] == ams) {
        cout<<"Pass!"<<endl;
        return 0;
    }
    else {
        cout<<"Fail!"<<endl;
        return 1;
    }



}
