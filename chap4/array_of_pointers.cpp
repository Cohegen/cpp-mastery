/*
Pointers can be arrayed like any other data type.
For example, the declaration for an int pointer array of
size 10 is:
  int *pi[10];

Here, pi is an array of ten integer pointers.
To assign the address of an int variable called var to the third
element of the pointer array, we would write

int var;
pi[2] = &var

Remember, pi is an array of pointer.
The only thing that the array elements can hold are the addresses
of integer values, not the values themselves.
To find the value of var, we would write:
 *pi[2]

*/

/*
using 2-D array of pointers to create a dictionary.
*/
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char *dictionary[][2] =
    {
        "pencil","A writing instrument.",
        "keyboard","An input device",
        "rifle","A shoulder-fired firearm.",
        "airplane","A fixed-wing aircraft",
        "network","An interconnected group of computers.",
        "", ""
    };
    char word[80];
    int i;

    cout << "Enter word: ";
    cin >> word;

    for(i=0; *dictionary[i][0];i++)
    {
        if(!(strcmp(dictionary[i][0],word)))

        {
            cout << dictionary[i][1] << "\n";
            break;
        }
    }
    if (!*dictionary[i][0])
        cout << word << " not found.\n";

    return 0;
}
