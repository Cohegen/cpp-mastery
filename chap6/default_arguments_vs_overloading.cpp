//A customized version of strcat()

#include <iostream>
#include <cstring>
using namespace std;

void mystrcat(char *s1,char *s2, int len=0);

int main()
{
    char str1[80] = "This is a test";
    char str2[80] = "0123456789";

    mystrcat(str1,str2,5); // concatenate 5 chars
    cout << str1 << "\n";

    strcpy(str1,"this is test"); // resets str1

    mystrcat(str1,str2); // concatenate entire string

    cout << str1 << '\n';

    return 0;
}

// a custom version of strcat()
void mystrcat(char *s1,char *s2,int len)
{
    // find end of s1
    while(*s1)
        s1++;

    if(len==0)
        len = strlen(s2);

    while(*s2 && len)
    {
        *s1 = *s2; // copy chars
        s1++;
        s2++;
        len--;
    }

    *s1 = '\0'; // null terminate string
}
