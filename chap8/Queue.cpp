/*
A queue is a list in which elements can be accessed in first-in ,first-out (FIFO) order only.
Thus a stack is like a stack  of plates on a table; the first down is the last to be used.
A queue is like a line at a bank the first in line is the first to be served.
Queues support two basic operations that is put and get.
Each put operation places a new element on the end of the queue.
Each operation retrives the next element from the from the front of the queue.

There are two basic types of queues, circular and non-circular.
A circular queue reuses locations in the underlying array when elements are removed.
A non-circular queue does not eventually becomes exhausted.
For the sake of simplicity, this example creates a non-circular queue, but with a little though and
effort you can easily transform it into a circular queue.

*/

#include <iostream>
using namespace std;

const int maxQsize = 100;

class Queue
{
    char q[maxQsize]; //this array holds the queue;
    int size; // maximum number of elements a queue can store
    int putloc,getloc; //the put and get indices

public:
    //construct a queue of a specific length
    Queue(int len)
    {
        //queue must be less than max and positive
        if (len > maxQsize) len = maxQsize;
        else if (len <= 0) len = 1;

        size = len;
        putloc = getloc= 0;

    }

    //put a character into the queue
    void put(char ch)
    {
        if(putloc == size)
        {
            cout << " ---Queue is full.\n";
            return ;
        }

        putloc++;
        q[putloc] = ch;
    }

    //get a character from the queue
    char get()
    {
        if(getloc == putloc)
        {
            cout << "--Queue is empty.\n";
            return 0;
        }

        getloc++;
        return q[getloc];
    }

};

//demonstrates the queue class
int main()
{
    Queue bigQ(100);
    Queue smallQ(4);
    char ch;
    int i;

    cout << "Using bigQ to store the alphabet.\n";
    //put some numbers into bigQ
    for(i=0;i<26;i++)
        bigQ.put('A' + i);

    //retrieving and displaying elements from bigQ
    cout << "Contents of bigQ: ";
    for(i=0;i<26;i++)
    {
        ch = bigQ.get();
        if(ch != 0) cout << ch;
    }

    cout << "\n\n";
    cout << "Using smallQ to generate errors.\n";

    //now use smallQ to generate some errors
    for(i=0;i<5;i++)
    {
        cout << "Attempting to store " << (char) ('Z' - i);
        smallQ.put('Z'-i);

        cout << "\n";
    }
    cout << "\n";

    //more errors on smallQ
    cout << "Contents of smallQ: ";
    for(i=0;i<5;i++)
        ch = smallQ.get();

        if(ch !=0) cout << ch;

    cout << "\n";
}
