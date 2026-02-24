/*
A special form of a two-dimensional array is an array of
strings.
To create an array of strings, a two-dimensional character array is sued,
with the size of the left index determining the number of strings and the
size of the right specifying the maximum length of each string including the
null-terminator.
For example,the following declares an array of 30 strings,each having a maximum
length of 79 characters plus the null terminator.
char str_array[30][80];
Accessing an individual string is quite easy, we simply specify only the left index.
For example, the following statement calls the gets() with the third in str_array:
get(str_arr[2]);
To access an individual character within the string,we use a statement like this:
cout << str_arr[2][3];

This displays the fourth character of the third string;
*/

/*
A program that demonstrates a string array by implementing a very simple computerized
telephone directory.
The two-dimensional array numbers holds pairs of names and numbers.
To find a number, we will enter the name and the name will be displayed.
*/
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    int i;
    char str[80];
    char numbers[10][80] =
    {
        "Tom","555-3322",
        "Mary","555-8976",
        "John","555-1037",
        "Rachel","555-1400",
        "Sherry","555-8893"
    };

    cout << "Enter name: ";
    cin >> str;

    for(i=0;i<10;i+=2)
        if(!strcmp(str,numbers[i]))
    {
        cout << "Number is " << numbers[i+1] << "\n";
        break;
    }
    if (i==10) cout << "Not found.\n";

    return 0;
}
