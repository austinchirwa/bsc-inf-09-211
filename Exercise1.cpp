#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    srand(time(0));
    int daysUntilExpiration = rand() % 11;

    if (daysUntilExpiration == 0)
        cout << "Your subcription expired" << endl;
    else if (daysUntilExpiration == 1){
        cout << "Your subscription expires within a day \n" <<"Renew now and save 20 %!";
    }
    else if (daysUntilExpiration > 1 && daysUntilExpiration <= 5)
        cout << "Your subscription expires in " << daysUntilExpiration << " days \n" <<"Renew now and save 10%!";
    else if (daysUntilExpiration <= 10 && daysUntilExpiration >5)
        cout << "Your subscription will expire soon. Renew now!" << endl; 
    else 
        cout << "You have an active subscription";
    return 0;
}
