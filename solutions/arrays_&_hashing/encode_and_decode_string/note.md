interesting problem

In the NeetCode solution, it uses a non-ASCII character like '#' as a delimiter to separate the length of a string and the string content itself. But I think this method is not that good in real life, because you cannot just assume that a user won't use any non-ASCII character.

My method is based on the range of the problem. In the problem description, the string length and the string vector length itself are both less than 200, so the size can be encoded as a two-digit hexadecimal character. I use a fixed-size character as the length mark for this problem.

An even better way is that we can use only one character: one byte can represent 256 numbers, so one character is enough.