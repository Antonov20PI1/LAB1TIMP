#pragma once
#include <string>
using namespace std;
class TableCipher
{
private:
    int key;
public:
    TableCipher() = delete;
    TableCipher(const int key);
    wstring encryptTableCipher(TableCipher key, wstring & str);
    wstring decryptTableCipher(TableCipher key, wstring & str);
};