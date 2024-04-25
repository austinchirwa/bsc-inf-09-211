#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    srand(time(0));
    int daysUntilExpiration = rand() % 11;
    
    switch (daysUntilExpiration)
    {
    case 0:
        cout << "Your subscription expired" << endl;
        break;
    case 1:
        cout << "Your subscription expires within a day!"<<endl << "Renew now and save 20%!"; 
        break;
    case 2: 
    case 3:
    case 4:
    case 5:
        cout << "Your subscription expires in " << daysUntilExpiration << " days "<<endl << "Renew now and save 10%";         
        break;
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
        cout << "Your subscripion will expire soon. Renew now!" << endl;
        break;    
    default: 
        cout << "You are subscribed " << endl;
        break;
    }
    return 0;
}
