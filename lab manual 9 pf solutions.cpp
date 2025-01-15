//Write c++ program function ReverseString() which takes string as user input and finds the reverse
//of that string word by word.Note: Implement through 1D character arrays.

#include <iostream>
#include <cstring>
using namespace std;

void ReverseString(char str[]) {
    int length = strlen(str);
    char reversed[100];
    int j = 0;

    for (int i = length - 1; i >= 0; i--) {
        if (str[i] == ' ' || i == 0) {
            int start = (i == 0) ? i : i + 1;
            for (int k = start; k < length && str[k] != ' '; k++) {
                reversed[j++] = str[k];
            }
            if (i != 0) {
                reversed[j++] = ' ';
            }
        }
    }
    reversed[j] = '\0';
    cout << "Reversed string word by word: " << reversed << endl;
}

int main() {
    char input[100];
    cout << "Enter a string: ";
    cin.getline(input, 100);
    ReverseString(input);
    return 0;
}

//Write a C++ function which will take static array as input and then return true if the string is
//palindrome otherwise return false and also display the suitable message.The function prototype
//shall be :
//bool PalindromeString(char arr[], int size)

#include <iostream>
#include <cstring>
using namespace std;

bool PalindromeString(char arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        if (arr[i] != arr[size - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    int length = strlen(str);
    if (PalindromeString(str, length)) {
        cout << "The string is a palindrome." << endl;
    }
    else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}


//Question No 3
//Create a C++ function that takes a string as input and converts all lowercase
//letters to uppercase and vice versa.The function should use a character array to
//achieve this.The prototype of the function should be : void SwapCase(char str[],
//    int size);

#include <iostream>
#include <cstring>
using namespace std;

void SwapCase(char str[], int size) {
    for (int i = 0; i < size; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32; // Convert to uppercase
        }
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32; // Convert to lowercase
        }
    }
}

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    int length = strlen(str);
    SwapCase(str, length);

    cout << "String after swapping case: " << str << endl;

    return 0;
}


//Question No 4
//Develop a C++ function to count the number of vowels and consonants in a given
//string.The function should take a character array as input and return the count of
//vowels and consonants.The prototype should be : void
//CountVowelsConsonants(char arr[], int size, int& amp; vowelCount, int
//    & amp; consonantCount);

#include <iostream>
#include <cstring>
using namespace std;

void CountVowelsConsonants(char arr[], int size, int& vowelCount, int& consonantCount) {
    vowelCount = 0;
    consonantCount = 0;
    for (int i = 0; i < size; i++) {
        char ch = tolower(arr[i]);
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowelCount++;
            }
            else {
                consonantCount++;
            }
        }
    }
}

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    int vowelCount, consonantCount;
    int length = strlen(str);

    CountVowelsConsonants(str, length, vowelCount, consonantCount);

    cout << "Number of vowels: " << vowelCount << endl;
    cout << "Number of consonants: " << consonantCount << endl;

    return 0;
}

//Write a C++ program to implement a function that checks if a string contains any
//digit.The function should return true if the string contains at least one digit and
//false otherwise.Use a character array to process the string.The function
//prototype should be : bool ContainsDigit(char arr[], int size);

#include <iostream>
#include <cstring>
using namespace std;

bool ContainsDigit(char arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] >= '0' && arr[i] <= '9') {
            return true;
        }
    }
    return false;
}

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    int length = strlen(str);

    if (ContainsDigit(str, length)) {
        cout << "The string contains at least one digit." << endl;
    }
    else {
        cout << "The string does not contain any digits." << endl;
    }

    return 0;
}



//Design a C++ function to find the longest word in a given string.The string
//should be passed as a character array, and the function should return the length of
//the longest word.The function prototype should be : int LongestWordLength(char
//    str[], int size);

#include <iostream>
#include <cstring>
using namespace std;

int LongestWordLength(char str[], int size) {
    int maxLength = 0, currentLength = 0;

    for (int i = 0; i < size; i++) {
        if (str[i] != ' ' && str[i] != '\0') {
            currentLength++;
        }
        else {
            if (currentLength > maxLength) {
                maxLength = currentLength;
            }
            currentLength = 0;
        }
    }

    if (currentLength > maxLength) {
        maxLength = currentLength;
    }

    return maxLength;
}

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    int length = strlen(str);
    int longestWord = LongestWordLength(str, length);

    cout << "The length of the longest word is: " << longestWord << endl;

    return 0;
}
