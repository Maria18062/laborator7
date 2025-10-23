#include <iostream>
#include <stack>
using namespace std;

bool isVowel(char c) {
    // Функція перевіряє, чи є літера голосною
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y' ||
           c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y';
}

bool isLetter(char c) {
    // Функція перевіряє, чи символ є буквою
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

int main() {
    stack<char> s; // оголошуємо стек символів
    string str;
    int count = 0;

    cout << "Введіть рядок: ";
    getline(cin, str);

    for (char c : str) {
        s.push(c); // додаємо кожен символ рядка до стеку
    }

    while (!s.empty()) {
        char letter = s.top();
        s.pop(); // видаляємо символ зі стеку

        if (isLetter(letter) && !isVowel(letter)) { 
            count++; // якщо літера і не голосна — це приголосна
        }
    }

    cout << "Кількість приголосних літер у рядку: " << count << endl;

    return 0;
}


