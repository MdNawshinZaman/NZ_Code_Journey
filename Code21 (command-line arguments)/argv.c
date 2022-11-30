/*
1. argc (ARGument Count) is int and stores number of command-line arguments passed by the user including the name of the program.
So if we pass a value to a program, value of argc would be 2 (one for argument and one for program name).

2. The value of argc should be non negative.

3. argv(ARGument Vector) is array of character pointers listing all the arguments.

4. If argc is greater than zero,the array elements from argv[0] to argv[argc-1] will contain pointers to strings.

5. Argv[0] is the name of the program , After that till argv[argc-1] every element is command-line arguments.
*/

#include <cs50.h>
#include <stdio.h>

int main (int argc, string argv[]) //here argc = argument count  // string argv[] = argument vector, this is an array of strings not a single string.
{

}