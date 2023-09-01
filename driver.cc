#include <iostream>
#include "Wander.h"

using namespace std;

int main()
{
        cout << "I am Encryptocon, the lord of simple substitution ciphers.\n"
             << "My purpose is to help you with secret codes.\n"
             << "It will involve a cipher wheel, an encryption table, a decryption"
             << " table, an offset, and more.\n"
             << "But no matter.\nAlthough there are many keys to try, I too hold my own secrets!\n"
             << "To that end, user, let's start with some questions.\n"
             << "WHAT SHALL BE THE OFFSET OF THY ENCRYPTION WHEEL?\n"
             << "-> ";
        int user_offset;
        cin >> user_offset;
        // if good yada yada
        Wander user(user_offset);
        return 0;
}