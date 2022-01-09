/*********** the beginning of our program project:  ********/

#include <iostream>
using namespace std;

int number;

void option (){
        switch (number){
        case 5:
            cout << "\t******" << endl;
            cout << "\t*\n\t*\n";
            cout << "\t******" << endl;
            cout << "\t     *\n\t     *\n";
            cout << "\t******" << endl;
        break;
        case 4:

        break;
        }
}

int main (void){
    while (number <= 0 || number >= 10){
        cout << "Enter a number from 1 to 9: ";
        cin >> number;
    }
    option();
    cout << endl << "\tYour number is: " << number << endl;


}
