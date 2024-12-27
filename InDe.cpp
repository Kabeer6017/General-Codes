#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

// Function to generate a random special character
char getRandomSpecialChar() {
    const string specialChars = "!@#$%^&*()-_=+[]{};:,.<>?/";
    return specialChars[rand() % specialChars.size()];
}

// Function to encrypt the input text
string encrypt(string text, int key) {
    string encrypted = "";
    for (char c : text) {
        if (isalnum(c)) { // Check if it's alphanumeric
            if (isalpha(c)) { // For alphabets
                char base = islower(c) ? 'a' : 'A';
                encrypted += char((c - base + key) % 26 + base);
            } else if (isdigit(c)) { // For digits
                encrypted += char((c - '0' + key) % 10 + '0');
            }
            // Add a random special character after each valid character
            encrypted += getRandomSpecialChar();
        } else {
            encrypted += getRandomSpecialChar(); // Replace non-alphanumerics with random special characters
        }
    }
    return encrypted;
}

// Function to decrypt the input text
string decrypt(string text, int key) {
    string decrypted = "";
    for (size_t i = 0; i < text.size(); i++) {
        if (isalnum(text[i])) { // Check if it's alphanumeric
            if (isalpha(text[i])) { // For alphabets
                char base = islower(text[i]) ? 'a' : 'A';
                decrypted += char((text[i] - base - key + 26) % 26 + base);
            } else if (isdigit(text[i])) { // For digits
                decrypted += char((text[i] - '0' - key + 10) % 10 + '0');
            }
        }
        // Skip the random special characters
        i++;
    }
    return decrypted;
}

int main() {
    srand(time(0)); // Seed the random number generator
    int choice, key;
    string text;

    cout << "Welcome to the Encryption/Decryption Program!" << endl;
    cout << "Enter 1 to Encrypt or 2 to Decrypt: ";
    cin >> choice;

    cin.ignore(); // To ignore the newline character left by cin
    cout << "Enter the text: ";
    getline(cin, text);

    cout << "Enter the key (shift value): ";
    cin >> key;

    if (choice == 1) {
        string encryptedText = encrypt(text, key);
        cout << "Encrypted Text: " << encryptedText << endl;
    } else if (choice == 2) {
        string decryptedText = decrypt(text, key);
        cout << "Decrypted Text: " << decryptedText << endl;
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
