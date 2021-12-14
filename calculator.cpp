#include <iostream>
using namespace std;


void mssg(){
	printf("OH SHIT HERE WE GO AGAIN!\n");
} 

int main () {

    double x;
    double y;
    int number;

    do {

    cout << "Introduce a number: ";
    cin >> x;
    cout << "Introduce a second number: ";
    cin >> y;
    cout << endl;

    cout << "If you press [0 or any number bigger than 4] you are going to exit the calculator, thank you!" << endl;
    cout << "Press '1' to [Addition]" << endl << "Press '2' to [Subtraction]" << endl << "Press '3' to [Multiplication]" << endl << "Press '4' to [Division]" << endl << "= ";
    cin >> number;
    cout << endl;
	
       switch (number){
        case 1:
            cout << "The Addition of " << x << " + " << y << " = " << x+y << endl << endl;
            break;
        case 2:
            cout << "The Subtraction of " << x << " - " << y << " = " << x-y << endl << endl;
            break;
        case 3:
            cout << "The Multiplication of " << x << " x " << y << " = " << x*y << endl << endl;
            break;
        case 4:
            cout << "The Division of " << x << " / " << y << " = " << x/y << endl << endl;
            break;
        default:
            exit(1);
    }
	mssg();
    }while (number < 4 || 1 < number);

    return 0;
}
