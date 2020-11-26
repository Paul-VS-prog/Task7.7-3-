/*#include <iostream>
#include <string>
#include <string.h>
#include <cstring>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
const int f = 256;
bool pal(char t[f]) {
    int c = strlen(t);
    for (int i = 0; i < c / 2; i++) {
        if (t[i] != t[c - i - 1]) {
            return false;
        }
    }
    return true;
}
int main() {
    string t;
    char h[f];
    cout << "Vvedite predlozenie: ";
    getline(cin, t);
    int k = 0;
    // for óáèðàåò ïðîáåëû
    for (int i = 0; i < strlen(t); i++) {
        if (t[i] != ' ') {
            h[k] = t[i];
            k++;
        }
    }
    if (pal(h)) {
        cout << "Palindrom";
    }
    else {
        cout << "Ne palindrom";
    }
}*/
#include <iostream>
#include <string>
#include <string.h>
#include <cstring>
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <blberr.h>
using namespace std;
const int f = 256;
bool pal(char t[f]) {
    int c = strlen(t);
    for (int i = 0; i < c / 2; i++) {
        if (t[i] != t[c - i - 2]) {
            return false;
        }
    }
    return true;
}
int main() {
    char t, h[f];
    int k = 0;
    do {
        t = getchar();
        if (t != ' ') {
            h[k] = t;
            k++;
        }
    } while (t != '\n');
    h[k] = '\0';
    cout << h;
    if (pal(h)) {
        cout << "Palindrom";
    }
    else {
        cout << "Ne palindrom";
    }
    return 0;
}
