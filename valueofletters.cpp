#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;

int main(){

    int r = 0; //RUN
    int value = 0;
    char text[50];

    cout << "Enter a text: ";
    cin.getline(text, 50);

    while (r < strlen(text)){

        switch (text[r]){
            case 'a':
            case 'e':
                value += 1;
                break;
            case 'o':
            case 's':
                value += 2;
                break;
            case 'd':
            case 'i':
            case 'n':
            case 'r':
                value += 3;
                break;
            case 'c':
            case 'l':
            case 't':
            case 'u':
                value += 4;
                break;
            case 'm':
            case 'p':
                value += 5;
                break;
            case 'b':
            case 'f':
            case 'g':
            case 'h':
            case 'j':
            case 'q':
            case 'v':
            case 'x':
            case 'y':
            case 'z':
                value += 6;
                break;
            case 'k':
            case 'w':
                value += 7;
                break;
        }

        cout << text[r];
        r++;
    }

    cout << endl << value;
    return 0;
}
