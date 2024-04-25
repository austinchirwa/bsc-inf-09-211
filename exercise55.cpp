#include <iostream>

using namespace std;

void areaOfSquare(double lenght);
void areaOfRectangle(double length, double width);
void areaOfTriangle(double height, double base);

int main(){
     char choice;
    cout << "Please enter the area of the shape to calculate";
    do{
        cout << endl;
        cout << "1. Square "<<endl;
        cout << "2. Rectangle "<<endl;
        cout << "3. Triangle "<<endl;
        cout << "4. Quit program \n" << endl;

        cout << "Enter selection : ";
        cin >> choice ;

        switch(choice){
            
            case '1':
                areaOfSquare(20);
                break;
            case '2':
                areaOfRectangle(20,20);
                break;
            case '3':
                areaOfTriangle(20,20);
                break;
            case '4':
                cout << "GOODBYE!!" << endl; 
                break;
            default: cout << " Your input was "<<choice<< " which is an invalid input \n" "Please enter a valid input!!! \n";            
        }
        
    } while (choice != '4');

    return 0;
}
void areaOfSquare(double lenght){
    cout << "Enter the length of the suare: ";
    cin >> lenght;
     double area = lenght * lenght;
    cout << "The area of a square length "<< lenght <<" is "<<area <<endl;
}
void areaOfRectangle(double length, double width){
    cout << "Enter the length of your rectangle: ";
    cin >> length;
    cout << "Enter the width of your rectangle: ";
    cin >> width;
    double area = length * width;
    cout << "The area of a rectangle length "<< length <<" and width "<< width <<" is "<<area<<endl;
}
void areaOfTriangle(double height, double base){
    cout << "Enter the height of your triangle: ";
    cin >> height;
    cout << "Enter the base of your triangle: ";
    cin >> base;
    double area = 0.5 * base * height;

    cout << "The area of a triangle base "<< base <<" and height "<< height <<" is "<<area<<endl;
}
