/*

A stream is an abstraction that either produces or consumes information.
A stream is linked to physical device by the C++ I/O system.
A file is a named collection of data stored permanently on the storage
The most common form, a stream is a logical interface to a file.

A stream is linked to a file through an open operation.
A stream is diassociated from a file through a close operation.

- There are two types of streams: text and binary.
Text stream is used with characters.
Binary stream can be used with any type of data.
C++ has several predefined streams i.e
    - cin for standard input
    - cout for standard output
    - cerr for standard error
    - clog for standard log
- The difference between cerr and clog stream is that clog is buffered
- This means that output  sent to cerr is  immediately output,but
output to clog is written only when a buffer is full.
*/