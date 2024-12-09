#include <iostream>
#include <string>
using namespace std;
int parseHex(const char* hexString) 
{
    int num = 0;
    int l = 0;
    while (hexString[l] != '\0') 
    {
        l++;
    }
    int t = 0;
    for (int i = l - 1 , p = 0; i >= 0; i--, p++) 
    {
        char s = hexString[i];
        if (s >= '0' && s <= '9') 
        {
            t = s - '0';
        }
        else if (s >= 'a' && s <= 'f') {
            t = s - 'a' + 10;
        }
        else if (s >= 'A' && s <= 'F') {
            t = s - 'A' + 10;
        }
        num += t << (4 * p);
    }
    return num;
}
int main() 
{
    const char* hexStr = "A5";
    int x = parseHex(hexStr);  
    cout << "十六进制数 " << hexStr << " 转换为十进制数为： " << x << endl;
    return 0;
}