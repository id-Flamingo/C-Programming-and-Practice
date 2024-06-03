- Every C++ program must have a function MAIN to tell it where to start executing. Contains 4 parts:
    1) A return type
    2) A name
    3) A parameter list enclosed in parentheses
    4) A function body enclosed in a set of "curly braces"

- C++ is a compiled language, must be translated from human-readable form to something a machine can "understand.

- This translation is done by a compiler.

- C++ Source Code ----> C++ compiler ------> Object Code

- When a larger program requires multiple parts to be integrated, they are linked together to form and executable program using another program called... A Linker (Shocker).

![alt text](https://www.tutorialspoint.com/compiler_design/images/language_processing_system.jpg)

- A library is simply some code usually ritten by others that we access using declarations found in an #included file.

- A declaration  is a program statement how a piece of code can be used.

- Errors found by the compile-time errors.

- Errors found by the linker are called link-time errors

- Errors not found until the program is run are called run-time errors OR logic errors.


### Review Questions

1) What is the purpose of the "Hello, World!" program?
Its purpose is to demonstrate fundamental aspects of a C++ program in a simple format.

2) Name the four parts of a function.
    i) A return type.
    ii) A name.
    iii) A parameter list enclosed in parentheses
    iv) A function body enclosed in a set of "curly braces"

3) Name a function that must appear in every C++ program.
main();

4) In the "Hello, World!" program, what is the purpose of the line return 0;?
Specifies what kind of result, if nay, the function will return to whoever askit for it to be eecuted.

5) What is the purpose of the compiler?
It translates the source code into something the computer can interpret.

6) What is the purpose of the #include directive?
To access prewritten source code that the user can use.

7) What does a .h suffix at the end of a file name signify in C++?
It signifies a header file for C/C++ files which will include the declaration of variables, constants, and functions.

8) What does the liner do for you program?
It integrates multiple programs into a file that the computer can interprete.

9) What is the difference between a source file and an object file?
Source code is code readable and written by humans. Object file is the compiled code which the computer will exececute.

10) What is an IDE and what does it do for you?
Integrated Development Environment, allows an environment for you to produce code with a host of features designed to streamline the programming process.

11) If you understand everything in the textbook, why is it nevessary to practice?
Solidify concepts, repetition helps with retention.

# Terms
[!USEFUL]

"//" Comment out slashes

"executable" Object code which computer executes

"main()" The function that must be run in every C++ program

"<<" output operator

"function" block of code which computer will execute

"object code" source code that has been compiled

"C++" Programming language

"header" header file, includes declaration of variables, constants, and functions

"output" what is produced by the executed code

"compiler" program which translates source code to object code

"#include" a library of code

"source code" human readable code. The code you are learning to write

"compile-time error" An error caught by the debugger during the compilation

"library" some code to be accessed by the main program

"statement" a part of a C++ program that specifies an action and isn't an '#include' directive

"cout" a term to display text to an output

"linker" program which combines object code from multiple sources into one executable file