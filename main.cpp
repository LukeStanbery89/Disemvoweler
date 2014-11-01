#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    // Declarations
    string inputText;
    string outputText1, outputText2;

    // Get input
    cout << "Please enter a phrase: ";
    getline(cin, inputText);
    cout << endl;

    //cout << "Input length: " << inputText.length() << endl;

    if (inputText != ""){
        for(unsigned int pos = 0; pos < inputText.length(); pos++){
            if(tolower(inputText[pos]) == 'a' || tolower(inputText[pos]) == 'e' || tolower(inputText[pos]) == 'i' ||
               tolower(inputText[pos]) == 'o' || tolower(inputText[pos]) == 'u'){
                outputText2 += inputText[pos];
            }else if(!isalpha(inputText[pos])){
                // Do nothing if character is not a letter
            }else{
                outputText1 += inputText[pos];
            }
        }

        // Output results
        cout << "Consonants: " << outputText1 << endl;
        cout << "Vowels:     " << outputText2 << endl;
    }

    return 0;
}
