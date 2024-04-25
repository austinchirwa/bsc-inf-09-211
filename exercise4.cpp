#include <iostream>
#include <limits>
 
using namespace std;

int main(){
    int num;
    bool valid_input = false;

    cout << "Enter an integer value between 5 and 10." << endl;

    while(!valid_input) {

        cin >> num;
        
        if (cin.fail()) {
            cout << "Sorry, you entered an invalid number, please try again." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else if (num < 5 || num > 10) {
            cout << "You entered " << num << ". Please enter a number between 5 and 10." << endl;
        }
        else{
            valid_input = true;
        }

    }

    cout << "Your input value(" << num << ") has been accepted." << endl;

    return 0;
}