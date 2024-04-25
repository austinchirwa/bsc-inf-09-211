#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    string letters[8]  = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235","B179"}; 
    for(int i = 0; i < 8; i++){
        if(letters[i].at(0) == 'B'){
        cout << letters[i] << endl;
        }
    }

    return 0;
}
