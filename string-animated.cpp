#include <iostream>
using namespace std;
const auto a_time = 50000000;

void a_print(string str) {
    int j = 0;
    string show = "";
    for(int i = 0 ; str[j] != '\0' ; i++) {
        if(i % a_time == 0) {
            show += str[j];
            system("clear");
            // system("cls"); if you running in cmd
            cout << show << endl;
            j++;
            if(i == a_time) i = 0;
        }
    }
    cout << endl;
}

int main() {
    string str = "Hello World";
    a_print(str);
}
