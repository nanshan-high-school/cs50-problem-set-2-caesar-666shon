#include <iostream>
using namespace std;

int secret (int, int);

int main() {
 string str;
 int key = 0;
 cout << "輸入要加密的訊息:";
 cin >> str;
 cout << "請輸入密鑰:";
 cin >> key;
 for (int i = 0;(int)str [i] != '\0';i++) {
   cout << (char)secret((int) str [i], key);
 }
}

int secret(int word, int key) {
 if (word >= 'A' && word <= 'Z') {
   if (word + key <= 'Z') {
     word = word + key;
   } else if (word + key % 26 > 'Z') {
     word = word + key % 26 - 26;
   } else  {
     word = word + key % 26;
   }
 } else if (word >= 'a' && word <= 'z') {
   if (word + key <= 'z') {
     word = word + key;
   } else if (word + key % 26 > 'z') {
     word = word + key % 26 - 26;
   } else {
     word = word + key % 26;
   }
 }
 return word;
}
