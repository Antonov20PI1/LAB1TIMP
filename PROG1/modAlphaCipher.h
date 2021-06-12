#pragma once
#include <vector>
#include <map>
#include <locale>
#include <cctype>
using namespace std;
class modAlphaCipher
{
private:
    wstring numAlpha = L"АБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ";
    map <char,int> alphaNum;
    vector <int> key;
    vector<int> convert(const wstring& s); 
    wstring convert(const vector<int>& v);

public:
    modAlphaCipher()=delete; 
    modAlphaCipher(const wstring& skey); //конструктор для установки ключа
    wstring encrypt(const wstring& open_text); //зашифрование
    wstring decrypt(const wstring& cipher_text);//расшифрование
};