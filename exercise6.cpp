#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
 
using namespace std;
string reverse(string theFile);
string capitalizeSecondLetter(string x);

int main(){
    ifstream file("advancedprogramming.txt"); 

    if (!file.is_open()){
        cout << "Unable to open the file" << endl;
    } 
    string fileData;
    getline(file, fileData);
    file.close();

    // printing out the number of vowels inside the text file
    int numberOfVowels = 0;
    for(char c: fileData){
        if(tolower(c) == 'a' || tolower(c) == 'e'|| tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u'){
            numberOfVowels++;
        }
    }

    cout << "The number of vowels in the text file statement is: " << numberOfVowels << endl;


    // printing out number of words inside the text file
    stringstream split(fileData); 
    string word;
    int numberOfWords = 0;
    while(split >> word){
        numberOfWords++;
    }
    cout << "The number of words in the text file statement is: " << numberOfWords << endl;

    //displaying a reverse statement
    string reversedStatement = reverse(fileData);
    cout << "The reversed statement of the text file is: (" << reversedStatement <<")" << endl;
    
    // displaying a capitalized statement
    string capitalizedData = capitalizeSecondLetter(fileData);
    cout << "The statement of the text file with capitalized second letter of each word is : \n" << capitalizedData << endl;
    
    return 0;
}





// function the reverse functionality
string reverse(string theFile){
    int lengthOfString = theFile.length();
    for(int i = 0; i < lengthOfString/2; i++){
        swap(theFile[i] , theFile[lengthOfString - 1 - i]);
    }
    return theFile;     
}

// function of the capitalise functionality
string capitalizeSecondLetter(string x){
    bool capitalize = false;
    
    for(char &c : x){
        if(isalpha(c) && !capitalize){
            capitalize = true;
        }
        else if( isalpha(c) && capitalize){
            c = toupper(c);
            capitalize = false;
        }
        else if(isspace(c)){
            capitalize = false;
        }  
        
    }
        return x;
}


