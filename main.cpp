#include <iostream>

using namespace std;

void EncodingString(string str){
    int strSize = str.length();
    int counEncoding;
         cout << "Encoded string: ";
         for(int i = 0; i < strSize; i++){
            counEncoding = 1;
            for(int j = i + 1; j < strSize; j++){
                if(str[i] == str[j]){
                    counEncoding++;
                }
                else if(str[i] != str[j]){
                    break;
                }
            }
            cout << str[i] << counEncoding;
            i += counEncoding - 1;
         }
}

int main()
{
    string str = "wwwwaaadexxxxxxywww";
    EncodingString(str);
    return 0;
}
