#include<iostream>
#include<string>
#include <cctype>
using namespace std;

int userScore[10];

void cBasic() {
    string cBasicQuestions[10][1] = {
        {"What is the correct way to declare a variable in C?"},
        {"Which of the following is not a data type in C?"},
        {"What is the output of the following code: printf(\"%d\", 10 + 20);?"},
        {"How do you create a comment in C?"},
        {"Which function is used to read input from the user in C?"},
        {"What does the `return` statement do in a function?"},
        {"What is the correct syntax for an if statement in C?"},
        {"What symbol is used to denote a string in C?"},
        {"Which of the following is a valid identifier in C?"},
        {"What is the purpose of the `#include` directive?"}
    };

    string cBasicOptions[10][1] = {
        {"a) int number;\nb) number int;\nc) var number;\nd) integer number;"},
        {"a) int\nb) float\nc) character\nd) string"},
        {"a) 30\nb) 10\nc) 20\nd) Compilation error"},
        {"a) // This is a comment\nb) -- This is a comment\nc) /* This is a comment */\nd) # This is a comment"},
        {"a) input()\nb) scanf()\nc) read()\nd) get()"},
        {"a) It exits the program\nb) It returns a value to the caller\nc) It terminates the loop\nd) None of the above"},
        {"a) if x = 10\nb) if (x == 10)\nc) if x == 10\nd) if (x = 10)"},
        {"a) 'string'\nb) \"string\"\nc) (string)\nd) `string`"},
        {"a) 1valid\nb) valid_1\nc) valid#1\nd) 1valid!"},
        {"a) To include standard libraries\nb) To define macros\nc) To declare variables\nd) None of the above"}
    };

    char cBasicAnswers[10] = {'a', 'c', 'a', 'a', 'b', 'b', 'b', 'b', 'b', 'a'};

    string cBasicExplanations[10][1] = {
        {"In C, a variable is declared by specifying its data type followed by the variable name, like `int number;`. This indicates that `number` can hold integer values."},
        {"`character` is not a data type in C. The primary data types in C are `int`, `float`, and `double`, among others."},
        {"The output of `printf(\"%d\", 10 + 20);` is `30`, as it sums the two integers."},
        {"Comments in C can be created using `//` for single-line comments or `/* ... */` for multi-line comments."},
        {"The `scanf()` function is used to take input from the user, allowing dynamic data entry."},
        {"The `return` statement exits a function and can return a value to the function's caller, enabling feedback from functions."},
        {"The correct syntax for an if statement in C is `if (condition)`. This checks the condition and executes the block of code if true."},
        {"Strings in C are denoted using double quotes, e.g., \"string\". Single quotes are used for single characters."},
        {"`valid_1` is a valid identifier. Identifiers must start with a letter or underscore and cannot contain special characters."},
        {"The `#include` directive is used to include standard libraries or headers, enabling access to pre-defined functions."}
    };

    char userAnswers[10];
    int userScore[10] = {0};

    for(int i = 0; i < 10; i++) {
        cout << i + 1 << ". " << cBasicQuestions[i][0] << endl;
        cout << cBasicOptions[i][0] << endl;
        cout << "Answer: "; 
        cin >> userAnswers[i];
        userAnswers[i] = tolower(userAnswers[i]);
        cout << endl;

        if (userAnswers[i] == cBasicAnswers[i]) {
            userScore[i] = 4;
            cout << "Correct answer..." << endl;
        } 
        else if (userAnswers[i] == 'p'){
            userScore[i] = 0 ;
            cout << "The correct answer is " << cBasicAnswers[i] << "." << endl;
            cout << endl;
            cout << "Explanation: " << cBasicExplanations[i][0] << endl;
        }
        else {
            userScore[i] = -1;
            cout << "Wrong answer..." << endl;
            cout << "The correct answer is " << cBasicAnswers[i] << "." << endl;
            cout << endl;
            cout << "Explanation: " << cBasicExplanations[i][0] << endl;
        }
        cout << endl; 
    }
}


void cIntermediateQuiz() {
    string cIntermediateQuestions[10][1] = {
        {"What is a pointer in C?"},
        {"How do you allocate memory dynamically in C?"},
        {"What is the output of the following code: printf(\"%d\", sizeof(int));?"},
        {"What is the purpose of the `void` keyword in a function signature?"},
        {"How do you define a macro in C?"},
        {"What is a segmentation fault?"},
        {"What is the difference between `==` and `=` in C?"},
        {"How do you declare a structure in C?"},
        {"What is the purpose of the `break` statement?"},
        {"What is a function pointer?"}
    };

    string cIntermediateOptions[10][1] = {
        {"a) A variable that stores a memory address\nb) A special data type\nc) Both a and b\nd) None of the above"},
        {"a) malloc()\nb) calloc()\nc) realloc()\nd) All of the above"},
        {"a) 2\nb) 4\nc) 8\nd) Compiler error"},
        {"a) It indicates a function does not return a value\nb) It is used for pointers\nc) Both a and b\nd) None of the above"},
        {"a) #define MACRO_NAME\nb) define MACRO_NAME\nc) macro MACRO_NAME\nd) #define(MACRO_NAME)"},
        {"a) An error caused by accessing invalid memory\nb) A warning during compilation\nc) Both a and b\nd) None of the above"},
        {"a) `==` is used for assignment, `=` is used for comparison\nb) `==` is used for comparison, `=` is used for assignment\nc) Both a and b\nd) None of the above"},
        {"a) struct myStruct {}\nb) struct myStruct = {}\nc) struct myStruct[]\nd) struct = myStruct"},
        {"a) To exit loops\nb) To stop program execution\nc) Both a and b\nd) None of the above"},
        {"a) A pointer that points to a function\nb) A function that returns a pointer\nc) Both a and b\nd) None of the above"}
    };

    char cIntermediateAnswers[10] = {'c', 'd', 'b', 'a', 'a', 'a', 'b', 'a', 'a', 'a'};

    string cIntermediateExplanations[10][1] = {
        {"A pointer in C is a variable that stores the memory address of another variable, allowing for dynamic memory management."},
        {"Memory in C can be allocated dynamically using `malloc()`, `calloc()`, or `realloc()` functions."},
        {"The output of `printf(\"%d\", sizeof(int));` is typically `4`, as most systems use 4 bytes for an integer."},
        {"The `void` keyword in a function signature indicates that the function does not return a value."},
        {"A macro can be defined in C using `#define MACRO_NAME`, allowing for code substitution during preprocessing."},
        {"A segmentation fault is an error that occurs when a program attempts to access an invalid memory location."},
        {"`==` is used for comparison (equality), while `=` is used for assignment (setting values)."},
        {"A structure in C is declared using `struct myStruct { ... };`, which groups related variables."},
        {"The `break` statement is used to exit loops or switch cases prematurely."},
        {"A function pointer is a pointer that points to a function, allowing dynamic function calls."}
    };

    char userAnswers[10];
    int userScore[10] = {0};

    for (int i = 0; i < 10; i++) {
        cout << i + 1 << ". " << cIntermediateQuestions[i][0] << endl;
        cout << cIntermediateOptions[i][0] << endl;
        cout << "Answer: ";
        cin >> userAnswers[i];
        userAnswers[i] = tolower(userAnswers[i]);

        if (userAnswers[i] == cIntermediateAnswers[i]) {
            userScore[i] = 4;
            cout << "Correct answer..." << endl;
        } else if (userAnswers[i] == 'p') {
            userScore[i] = 0;
            cout << "The correct answer is " << cIntermediateAnswers[i] << "." << endl;
            cout << endl;
            cout << "Explanation: " << cIntermediateExplanations[i][0] << endl;
        } else {
            userScore[i] = -1;
            cout << "Wrong answer..." << endl;
            cout << "The correct answer is " << cIntermediateAnswers[i] << "." << endl;
            cout << endl;
            cout << "Explanation: " << cIntermediateExplanations[i][0] << endl;
        }
        cout << endl;
    }
}

void cAdvancedQuiz() {
    string cAdvancedQuestions[10][1] = {
        {"What is the difference between `malloc()` and `calloc()`?"},
        {"What is a union in C?"},
        {"What is the output of the following code: printf(\"%d\", sizeof(*p)); where int *p;?"},
        {"What is the purpose of the `const` keyword in C?"},
        {"What is a linked list?"},
        {"How do you handle errors in C?"},
        {"What is the significance of `static` storage class in C?"},
        {"What are function prototypes in C?"},
        {"What is the difference between `strncpy()` and `strcpy()`?"},
        {"What is the purpose of the `volatile` keyword in C?"}
    };

    string cAdvancedOptions[10][1] = {
        {"a) `malloc()` initializes memory to zero\nb) `calloc()` initializes memory to zero\nc) Both do the same thing\nd) None of the above"},
        {"a) A data type that can hold multiple values\nb) A special type of array\nc) A structure that can hold different data types\nd) None of the above"},
        {"a) Size of the pointer\nb) Size of the data type\nc) Size of the variable\nd) Compiler error"},
        {"a) To make a variable read-only\nb) To indicate a constant pointer\nc) Both a and b\nd) None of the above"},
        {"a) A data structure that stores elements sequentially\nb) A data structure that stores elements non-sequentially\nc) A linear data structure\nd) None of the above"},
        {"a) Using return codes\nb) Using assertions\nc) Both a and b\nd) None of the above"},
        {"a) It retains its value between function calls\nb) It initializes variables to zero\nc) It makes a variable accessible globally\nd) None of the above"},
        {"a) They declare the function's name and parameters\nb) They define the function's behavior\nc) Both a and b\nd) None of the above"},
        {"a) `strncpy()` is safer than `strcpy()`\nb) `strncpy()` does not null-terminate the string if the length exceeds\nc) Both a and b\nd) None of the above"},
        {"a) It tells the compiler to optimize the variable\nb) It prevents the compiler from caching the variable\nc) Both a and b\nd) None of the above"}
    };

    char cAdvancedAnswers[10] = {'b', 'c', 'b', 'a', 'c', 'c', 'a', 'a', 'c', 'b'};

    string cAdvancedExplanations[10][1] = {
        {"`malloc()` allocates uninitialized memory, while `calloc()` allocates memory and initializes it to zero. This can affect program behavior if uninitialized values are used."},
        {"A union in C is a special data type that allows storing different data types in the same memory location. Only one member can contain a value at any given time."},
        {"The output of `printf(\"%d\", sizeof(*p));` would be the size of the integer type (typically 4 bytes on many systems), as `p` is a pointer to an integer."},
        {"The `const` keyword in C is used to define variables whose value cannot be modified after initialization, enhancing code safety and clarity."},
        {"A linked list is a data structure consisting of nodes, where each node contains data and a pointer to the next node, allowing dynamic memory allocation."},
        {"Errors in C can be handled using return codes or specific functions like `perror()` to print error messages related to system calls."},
        {"The `static` storage class means the variable retains its value between function calls and is limited to the scope in which it is defined."},
        {"Function prototypes declare the function's name, return type, and parameters, enabling type checking before the actual function definition."},
        {"`strncpy()` copies a specified number of characters from one string to another and does not null-terminate if the length exceeds, making it safer than `strcpy()`."},
        {"The `volatile` keyword informs the compiler that the variable may change at any time, preventing optimization that might assume the value doesn't change."}
    };

    char userAnswers[10];
    int userScore[10] = {0};

    for (int i = 0; i < 10; i++) {
        cout << i + 1 << ". " << cAdvancedQuestions[i][0] << endl;
        cout << cAdvancedOptions[i][0] << endl;
        cout << "Answer: ";
        cin >> userAnswers[i];
        userAnswers[i] = tolower(userAnswers[i]);

        if (userAnswers[i] == cAdvancedAnswers[i]) {
            userScore[i] = 4;
            cout << "Correct answer..." << endl;
        } else if (userAnswers[i] == 'p') {
            userScore[i] = 0;
            cout << "The correct answer is " << cAdvancedAnswers[i] << "." << endl;
            cout << "Explanation: " << cAdvancedExplanations[i][0] << endl;
        } else {
            userScore[i] = -1;
            cout << "Wrong answer..." << endl;
            cout << "The correct answer is " << cAdvancedAnswers[i] << "." << endl;
            cout << "Explanation: " << cAdvancedExplanations[i][0] << endl;
        }
        cout << endl;
    }
}


void cppBasic(){
    string cppBasicQuestions[10][1]={
        
        {"What is the correct way to declare a variable in C++?",},
        
        {"What does the std namespace stand for?"},
        
        {"Which symbol is used to end a statement in C++?"},
        
        {"Which of the following is not a keyword in C++?"},
        
        {"How do you create a single-line comment in C++?"},
        
        {"Which function is used to print output to the console in C++?"},
        
        {"What will the following code output: cout << \"Hello World\" ;?"},
        
        {"Which operator is used for assignment in C++?"},
        
        {"How do you start a for loop in C++?"},
        
        {"What is the correct way to include a header file in C++?"}
    };

    string cppBasicOptions[10][1]={
    
        {"a) int number;\nb) number int;\nc) var number;\nd)integer number;"},
    
        {"a) Standard\nb) Study\nc) Standalone\nd) Static"},
    
        {"a) .\nb) ;\nc) ,\nd) :"},
    
        {"a) int\nb) float\nc) number\nd) double"},
    
        {"a) # This is a comment\nb) -- This is a comment\nc) // This is a comment\nd) /* This is a comment */"},
    
        {"a) print()\nb) cout\nc) echo\nd) output()"},
    
        {"a) Hello\nb) World\nc) Hello World\nd) cout << \"Hello World\";"},
    
        {"a) =\nb) ==\nc) !=\nd) ++"},
    
        {"a) for(int i = 0; i < 10; i++)\nb) for i = 1 to 1\nc) foreach(int i in 10)\nd) loop from i = 1 to 10"},
    
        {"a) #include <iostream>\nb) include iostream\nc) #include \"iostream\"\nd) #import <iostream>"}
};

    char cppBasicAnswers[10] = {'a', 'a', 'b', 'c', 'c', 'b', 'c', 'a', 'a', 'a'};


    string cppBasicExplanations[10][1] = {

        {"In C++, a variable is declared by specifying its data type followed by the variable name, like `int number;`. Here, `int` defines the type of data that the variable will store, which in this case is an integer. Proper declaration is crucial because it reserves memory space and allows the compiler to manage the data type correctly."},
    
        {"`std` stands for 'Standard' and is a namespace in C++. A namespace is used to organize code and prevent name conflicts. The `std` namespace contains the standard library's functionality, such as input and output functions like `cout` (for displaying output) and `cin` (for receiving input). Using `std` helps avoid conflicts with user-defined names."},
    
        {"A semicolon (`;`) is used to terminate statements in C++. It marks the end of a logical instruction. Missing semicolons lead to compilation errors because the compiler expects each command to be concluded with this symbol."},
    
        {"`number` is not a keyword in C++. Keywords like `int`, `float`, and `double` are reserved words that have specific meanings in C++ and cannot be used as variable names. Choosing non-keyword names for variables avoids conflicts and allows the code to function correctly."},
    
        {"In C++, `//` is used to create a single-line comment, making the compiler ignore the remainder of the line. Comments are crucial for code readability, helping developers understand the purpose of specific code blocks without affecting execution."},
    
        {"`cout` is a standard output stream in C++, used to print data to the console. It's part of the `iostream` library, which requires `#include <iostream>`. `cout` works with the insertion operator (`<<`) to display strings or variables."},
    
        {"The statement `cout << \"Hello World\";` outputs the text 'Hello World' to the console. Without `endl` or `\\n`, it doesn't move to a new line after printing. Proper output formatting enhances user interaction."},
    
        {"The `=` operator in C++ assigns a value from the right-hand side to a variable on the left-hand side. This basic operator is fundamental for setting and updating variable values in programs."},
    
        {"In C++, a typical for loop starts with `for(int i = 0; i < 10; i++)`. It includes initialization (`int i = 0`), a condition (`i < 10`), and an increment (`i++`). This loop is essential for iterating a set number of times."},
    
        {"To include standard libraries in C++, use the `#include <iostream>` directive. This allows access to functions like `cout` and `cin` by linking the necessary libraries during compilation. Proper inclusion of headers is vital for utilizing C++ functionalities."}
    };


    char userAnswers[10];

    
    for(int i=0; i<10; i++){
        cout << i + 1 << ". " << cppBasicQuestions[i][0] << endl;
        cout << cppBasicOptions[i][0] << endl;
        cout << "Answer : "; cin >> userAnswers[i];
        
        userAnswers[i] = tolower(userAnswers[i]);
    
        if(userAnswers[i] == cppBasicAnswers[i]){
            userScore[i] = 4;
            cout << "Correct answer..." << endl;
        }
        else if (userAnswers[i] == 'p'){
            userScore[i] = 0;
            cout << "The correct answer is " << cppBasicAnswers[i] << "." << endl;
            cout << "Explaination : " << cppBasicExplanations[i][0] << endl;
        }
        else{
            userScore[i] = -1 ;
            cout << "Wrong answer..." << endl;
            cout << "The correct answer is " << cppBasicAnswers[i] << "." << endl;
            cout << "Explaination : " << cppBasicExplanations[i][0] << endl;
        }
        cout << endl;
    }

    
}

void cppIntermediate(){
    string cppIntermediateQuestions[10][1] = {
        
        {"What does the following code snippet output?\nint a = 5, b = 10;\ncout << a + b << endl;"},
        
        {"Which keyword is used to define a constant variable in C++?"},
        
        {"How do you access the third element in an array named `numbers` in C++?"},
        
        {"What is the output of the following code?\nint x = 3;\nx *= 2;\ncout << x;"},
        
        {"Which of the following is used to create an object in C++?"},
        
        {"What is the scope resolution operator in C++?"},
        
        {"Which of the following is a valid C++ string declaration?"},
        
        {"What does the following code do?\nint *ptr = new int;"},
        
        {"What is the result of `5 % 2` in C++?"},
        
        {"How do you define a destructor in a C++ class?"}
    };

    string cppIntermediateOptions[10][1] = {
        
        {"a) 5\nb) 10\nc) 15\nd) 50"},
        
        {"a) constant\nb) final\nc) const\nd) let"},
        
        {"a) numbers[3]\nb) numbers(3)\nc) numbers[2]\nd) numbers(2)"},
        
        {"a) 3\nb) 6\nc) 9\nd) 12"},
        
        {"a) class\nb) struct\nc) object\nd) new"},
        
        {"a) ::\nb) ..\nc) =>\nd) **"},
        
        {"a) string s = \"Hello\";\nb) char s[6] = \"Hello\";\nc) str s = 'Hello';\nd) String s = Hello;"},
        
        {"a) Allocates memory for an integer pointer\nb) Allocates memory for an integer\nc) Creates a null pointer\nd) Deallocates memory"},
        
        {"a) 2.5\nb) 1\nc) 0\nd) 2"},
        
        {"a) ~ClassName()\nb) destructor ClassName()\nc) delete ClassName()\nd) ~ClassName[]"}
    };

    char cppIntermediateAnswers[10] = {'c', 'c', 'c', 'b', 'd', 'a', 'a', 'b', 'b', 'a'};


    string cppIntermediateExplanations[10][1] = {

        {"The code snippet `int a = 5, b = 10; cout << a + b << endl;` outputs `15`. This is because the addition operation `a + b` results in `5 + 10`, which equals 15. The `endl` moves the cursor to the next line."},
    
        {"The keyword `const` is used to define a constant variable in C++. It prevents the variable's value from being modified after its initial assignment. This is helpful in maintaining consistency, especially when values should remain unchanged."},
    
        {"To access the third element in an array `numbers` in C++, you use `numbers[2]`. In C++, array indexing starts from 0, so `numbers[2]` gives you the third element."},
    
        {"The code `int x = 3; x *= 2; cout << x;` will output `6`. The `x *= 2` statement is equivalent to `x = x * 2`, multiplying the original value of `x` by 2."},
    
        {"To create an object in C++, you use the `new` operator, which allocates memory dynamically. This is essential for creating instances of classes and handling memory management manually when necessary."},
    
        {"The scope resolution operator `::` in C++ is used to specify the context for identifiers. It allows access to global variables or specific class members, especially when there are naming conflicts."},
    
        {"In C++, `string s = \"Hello\";` is the correct way to declare a string variable using the `std::string` class. This is part of the standard library for handling sequences of characters."},
    
        {"The code `int *ptr = new int;` dynamically allocates memory for an integer. The `new` operator returns a pointer to the allocated memory. It's crucial to manage memory properly to avoid leaks."},
    
        {"The expression `5 % 2` returns `1`. The `%` operator is the modulo operator, which provides the remainder of the division. In this case, `5 divided by 2` leaves a remainder of 1."},
    
        {"To define a destructor in C++, you use `~ClassName()`. A destructor is a special member function that is automatically called when an object goes out of scope, cleaning up resources."}
    };


    char userAnswers[10];

    

    for(int i=0; i<10; i++){
        cout << i + 1 << ". " << cppIntermediateQuestions[i][0] << endl;
        cout << cppIntermediateOptions[i][0] << endl;
        cout << "Answer : "; cin >> userAnswers[i];
        userAnswers[i = tolower(userAnswers[i])];
        if(userAnswers[i] == cppIntermediateAnswers[i]){
            userScore[i] = 4;
            cout << "Correct answer..." << endl;
        }
        else if (userAnswers[i] == 'p'){
            userScore[i] = 0;
            cout << "The correct answer is " << cppIntermediateAnswers[i] << "." << endl;
            cout << "Explaination : " << cppIntermediateExplanations[i][0] << endl;
        }
        
        else{
            userScore[i] = -1 ;
            cout << "Wrong answer..." << endl;
            cout << "The correct answer is " << cppIntermediateAnswers[i] << "." << endl;
            cout << "Explaination : " << cppIntermediateExplanations[i][0] << endl;
        }
        cout << endl;
    }

    
}

void cppAdvanced(){

    string cppAdvancedQuestions[10][1] = {
        
        {"What is a virtual function in C++?"},
        
        {"Which of the following is used for dynamic method resolution in C++?"},
        
        {"What is the main purpose of the `friend` keyword in C++?"},
        
        {"What does RAII stand for in C++ programming?"},
        
        {"Which of the following types cannot be thrown as an exception in C++?"},
        
        {"What will the following code output if a segmentation fault does not occur?\nint* ptr = nullptr;\ncout << *ptr;"},
        
        {"What is the use of the `mutable` keyword in C++?"},
        
        {"Which of the following concepts is achieved by using templates in C++?"},
        
        {"Which C++ feature helps in preventing memory leaks when using dynamic memory allocation?"},
        
        {"What is the difference between `delete` and `delete[]` in C++?"}
    };

    string cppAdvancedOptions[10][1] = {
        
        {"a) A function that can be overridden in a derived class\nb) A function that cannot be overridden\nc) A function that must return an integer\nd) A function with no parameters"},
        
        {"a) Pointers\nb) Virtual functions\nc) Static variables\nd) Templates"},
        
        {"a) To create global variables\nb) To allow access to private members of a class\nc) To define constants\nd) To create pointers"},
        
        {"a) Resource Allocation Is Initialization\nb) Resource Allocation Is Invalid\nc) Random Access Initialization Interface\nd) Run-time Allocation and Initialization"},
        
        {"a) Classes\nb) Integers\nc) Objects\nd) Functions"},
        
        {"a) 0\nb) An error\nc) Undefined behavior\nd) The value stored in memory at the address 0"},
        
        {"a) To make a variable modifiable even if it's part of a const object\nb) To create mutable objects\nc) To allocate memory dynamically\nd) To define constant expressions"},
        
        {"a) Overloading\nb) Data abstraction\nc) Inheritance\nd) Code reusability"},
        
        {"a) Virtual functions\nb) Smart pointers\nc) Global variables\nd) Static memory allocation"},
        
        {"a) `delete` is used for pointers, `delete[]` is for arrays\nb) `delete[]` is used for classes, `delete` is for integers\nc) Both are identical\nd) `delete` is faster than `delete[]`"}
    };

    char cppAdvancedAnswers[10] = {'a', 'b', 'b', 'a', 'b', 'c', 'a', 'd', 'b', 'a'};

    string cppAdvancedExplanations[10][1] = {

        {"A virtual function in C++ is a member function that can be overridden in derived classes. It's defined with the `virtual` keyword in the base class. This enables dynamic binding, allowing the correct function to be called based on the object type during runtime."},
    
        {"Dynamic method resolution in C++ is achieved using virtual functions. They allow derived classes to override base class functions, ensuring that the appropriate function is called based on the actual object type at runtime."},
    
        {"The `friend` keyword in C++ grants a non-member function or another class access to the private and protected members of the class. This is useful when external functions need access to a class's internal details without violating encapsulation principles."},
    
        {"RAII stands for 'Resource Acquisition Is Initialization'. It's a programming concept in C++ that ties resource management to object lifetime. When an object is created, resources are acquired, and they are released when the object is destroyed, helping prevent resource leaks."},
    
        {"In C++, types that cannot be thrown as exceptions include primitive data types like `int`, `float`, and `double`. Instead, exceptions should be objects of classes that can convey detailed error information."},
    
        {"If `int* ptr = nullptr; cout << *ptr;` is executed without a segmentation fault, it results in undefined behavior. Attempting to dereference a `nullptr` is unsafe, and it typically causes a runtime error or a crash."},
    
        {"The `mutable` keyword in C++ allows a member variable of a `const` object to be modified. This is helpful when you need to change some internal state without affecting the object's external interface."},
    
        {"Templates in C++ provide code reusability and type safety by allowing functions and classes to operate with generic types. They enable compile-time polymorphism, facilitating operations with various data types without rewriting code."},
    
        {"Smart pointers in C++ manage dynamic memory to prevent memory leaks. They automatically deallocate memory when it's no longer needed, reducing the risk of resource leaks and improving memory management."},
    
        {"The difference between `delete` and `delete[]` in C++ is that `delete` is used to free memory allocated for a single object, while `delete[]` is for memory allocated for an array of objects, ensuring proper deallocation."}
    };


    char userAnswers[10];

    for(int i=0; i<10; i++){
        cout << i + 1 << ". " << cppAdvancedQuestions[i][0] << endl;
        cout << cppAdvancedOptions[i][0] << endl;
        cout << "Answer : "; cin >> userAnswers[i];

        userAnswers[i] = tolower(userAnswers[i]);

        if(userAnswers[i] == cppAdvancedAnswers[i]){
            userScore[i] = 4;
            cout << "Correct answer..." << endl;
        }
        else if (userAnswers[i] == 'p'){
            userScore[i] = 0;
            cout << "The correct answer is " << cppAdvancedAnswers[i] << "." << endl;
            cout << "Explaination : " << cppAdvancedExplanations[i][0] << endl;
        }
        else{
            userScore[i] = -1 ;
            cout << "Wrong answer..." << endl;
            cout << "The correct answer is " << cppAdvancedAnswers[i] << "." << endl;
            cout << "Explaination : " << cppAdvancedExplanations[i][0] << endl;
        }

    }


}

void pythonBasic(){
    string pythonBasicQuestions[10][1]={
        
        {"What is the correct syntax to output the text 'Hello, World!' in Python?"},
        
        {"How do you create a variable with the numeric value 5 in Python?"},
        
        {"Which operator is used to multiply numbers in Python?"},
        
        {"What data type is the result of this expression: 5 / 2?"},
        
        {"Which function is used to get the length of a list in Python?"},
        
        {"How do you insert a comment in a Python code?"},
        
        {"Which method is used to convert a string to lowercase in Python?"},
        
        {"How do you create a list in Python?"},
        
        {"What keyword is used to define a function in Python?"},
        
        {"How do you add a single line comment in Python?"}
    };
    
    string pythonBasicOptions[10][1] = {
        
        {"a) echo 'Hello, World!'\nb) print('Hello, World!')\nc) p('Hello, World!')\nd) echo.print('Hello, World!')"},
        
        {"a) x = 5\nb) int x = 5\nc) num = int(5)\nd) var x = 5"},
        
        {"a) +\nb) -\nc) *\nd) /"},
        
        {"a) int\nb) float\nc) str\nd) bool"},
        
        {"a) size()\nb) count()\nc) length()\nd) len()"},
        
        {"a) # This is a comment\nb) // This is a comment\nc) <!-- This is a comment -->\nd) /* This is a comment */"},
        
        {"a) lower()\nb) downcase()\nc) lowercase()\nd) convert()"},
        
        {"a) myList = (1, 2, 3)\nb) myList = {1, 2, 3}\nc) myList = [1, 2, 3]\nd) myList = <1, 2, 3>"},
        
        {"a) func\nb) define\nc) def\nd) function"},
        
        {"a) //\nb) /*\nc) #\nd) <!--"}
    };
    
    string pythonBasicAnswers[10] = {"b", "a", "c", "b", "d", "a", "a", "c", "c", "c"};

    string pythonBasicExplanations[10][1] = {

        {"In Python, the correct syntax to output text is using the print() function, as in print('Hello, World!'). This function sends the specified text to the console, allowing for easy debugging and interaction."},
        
        {"To create a variable with a numeric value in Python, you simply write x = 5. Unlike some languages, Python does not require explicit data type declarations, making it straightforward to define variables."},
        
        {"The multiplication operator in Python is the asterisk (*). It's used to multiply two numbers, just as in mathematics, and is a fundamental operator in arithmetic operations."},
        
        {"The expression 5 / 2 evaluates to a float data type in Python (2.5), because Python automatically converts the result to a floating-point number when dividing integers."},
        
        {"To get the length of a list in Python, the len() function is used. This built-in function returns the number of elements in a list, making it essential for list manipulations."},
        
        {"In Python, comments are inserted using the '#' symbol. Anything following this symbol on the same line is ignored by the interpreter, making it easier for developers to annotate code."},
        
        {"The method lower() is used to convert a string to lowercase in Python. This is useful for case-insensitive comparisons or data normalization."},
        
        {"To create a list in Python, you can use square brackets, as in myList = [1, 2, 3]. This syntax is straightforward and flexible for storing multiple items."},
        
        {"The keyword def is used to define a function in Python. It precedes the function name and allows the programmer to encapsulate code for reuse."},
        
        {"In Python, a single line comment can be added with the '#' symbol. This practice is important for code clarity, helping others (and yourself) understand the logic later."}
    };


    string userAnswers[10];

    for(int i=0; i<10; i++){
        cout << i + 1 << ". " << pythonBasicQuestions[i][0] << endl;
        cout << pythonBasicOptions[i][0] << endl;
        cout << "Answer : "; cin >> userAnswers[i];
        for (char &c : userAnswers[i] ){
            c = tolower(c);
        }
        if(userAnswers[i] == pythonBasicAnswers[i]){
            userScore[i] = 1;
            cout << "Correct answer..." << endl;
        }
        else if (userAnswers[i] == "pass"){
            userScore[i] = 0;
            continue;
        }
        else{
            userScore[i] = 0 ;
            cout << "Wrong answer..." << endl;
            cout << "The correct answer is " << pythonBasicAnswers[i] << "." << endl;
            cout << "Explaination : " << pythonBasicExplanations[i][0] << endl;
        }
    }

}
void pythonIntermediate(){
    
    string pythonIntermediateQuestions[10][1] = {
        
        {"Which of the following data types is not mutable in Python?"},
        
        {"What is the output of the following code? print('Hello' + 'World')"},
        
        {"Which keyword is used for error handling in Python?"},
        
        {"What does the following code output? print(type(10))"},
        
        {"How do you access the last element of a list named myList?"},
        
        {"What is the correct way to open a file in read mode in Python?"},
        
        {"Which of the following is used to define a block of code in Python?"},
        
        {"What is the output of the following code: print(2 ** 3)?"},
        
        {"Which built-in function can be used to sort a list in ascending order?"},
        
        {"Which of the following statements creates a dictionary?"}
    };
    
    string pythonIntermediateOptions[10][1] = {
        
        {"a) list\nb) tuple\nc) dictionary\nd) set"},
        
        {"a) HelloWorld\nb) Hello World\nc) Hello+World\nd) Error"},
        
        {"a) catch\nb) try\nc) except\nd) error"},
        
        {"a) float\nb) int\nc) str\nd) list"},
        
        {"a) myList[-1]\nb) myList[1]\nc) myList[0]\nd) myList[myList.length]"},
        
        {"a) open('file.txt', 'r')\nb) open('file.txt', 'read')\nc) open('file.txt')\nd) open.read('file.txt')"},
        
        {"a) {}\nb) []\nc) ()\nd) Indentation"},
        
        {"a) 6\nb) 8\nc) 9\nd) None of the above"},
        
        {"a) order()\nb) sorted()\nc) sortList()\nd) arrange()"},
        
        {"a) myDict = {}\nb) myDict = {1, 2, 3}\nc) myDict = {'name': 'John', 'age': 25}\nd) myDict = [1, 2, 3]"}
    };
    
    string pythonIntermediateAnswers[10] = {"b", "a", "b", "b", "a", "a", "d", "b", "b", "c"};

    #include <string>

    string pythonIntermediateExplanations[10][1] = {

        {"A tuple in Python is an immutable sequence type, defined by placing values inside parentheses (e.g., my_tuple = (1, 2, 3)). Once created, its elements cannot be changed, making it useful for fixed collections of items."},
        
        {"The output of the code print('Hello' + 'World') will be HelloWorld. The plus operator concatenates the two strings, joining them without spaces."},
        
        {"The keyword used for exception handling in Python is try, followed by an except clause to catch exceptions. This structure allows for error management and graceful handling of unexpected events."},
        
        {"The output of type(10) is <class 'int'>, indicating that the value is of integer type. Python dynamically determines the type based on the assigned value."},
        
        {"To access the last item of a list, you can use negative indexing, such as myList[-1]. This feature allows for easy retrieval of elements from the end of a list."},
        
        {"To open a file in Python, the open() function is used. This function can read or write files, and it's crucial for file operations in Python."},
        
        {"Indentation in Python is significant as it defines the blocks of code. Unlike other languages that use braces, Python uses spaces or tabs to group statements, affecting the program's structure."},
        
        {"The expression 2 ** 3 evaluates to 8. The double asterisk operator is used for exponentiation in Python, raising the left operand to the power of the right operand."},
        
        {"To sort a list in Python, the sort() method is called on the list. This method rearranges the elements in ascending order by default."},
        
        {"A dictionary in Python is defined using curly braces with key-value pairs, such as myDict = {'key': 'value'}. This data structure allows for efficient data retrieval based on unique keys."}
    };

    
    string userAnswers[10];

    for(int i=0; i<10; i++){
        cout << i + 1 << ". " << pythonIntermediateQuestions[i][0] << endl;
        cout << pythonIntermediateOptions[i][0] << endl;
        cout << "Answer : "; cin >> userAnswers[i];
        for (char &c : userAnswers[i] ){
            c = tolower(c);
        }
        if(userAnswers[i] == pythonIntermediateAnswers[i]){
            userScore[i] = 1;
            cout << "Correct answer..." << endl;
        }
        else if (userAnswers[i] == "pass"){
            userScore[i] = 0;
            continue;
        }
        else{
            userScore[i] = 0 ;
            cout << "Wrong answer..." << endl;
            cout << "The correct answer is " << pythonIntermediateAnswers[i] << "." << endl;
            cout << "Explaination : " << pythonIntermediateExplanations[i][0] << endl;
        }
    }
}

void pythonAdvanced(){

    string pythonAdvancedQuestions[10][1] = {
        
        {"What is a decorator in Python?"},
        
        {"Which of the following is not a valid way to create a set in Python?"},
        
        {"What is the purpose of the `self` keyword in Python?"},
        
        {"What will be the output of this code: print([x for x in range(5) if x % 2 == 0])?"},
        
        {"Which of the following statements about Python is true?"},
        
        {"What does the `with` statement do in Python?"},
        
        {"What is the difference between `__str__` and `__repr__`?"},
        
        {"How can you remove duplicates from a list in Python?"},
        
        {"What is the main advantage of using `asyncio` in Python?"},
        
        {"Which method is used to combine two lists in Python?"}
    };
    
    string pythonAdvancedOptions[10][1] = {
        
        {"a) A function that modifies another function\nb) A type of class\nc) A built-in function\nd) A module"},
        
        {"a) set()\nb) {}  \nc) []\nd) set([1, 2, 3])"},
        
        {"a) It refers to the class itself\nb) It refers to the current instance of the class\nc) It is optional\nd) None of the above"},
        
        {"a) [0, 2, 4]\nb) [1, 3]\nc) [0, 1, 2, 3, 4]\nd) None of the above"},
        
        {"a) Python is statically typed\nb) Python supports multiple inheritance\nc) Python uses braces to define blocks\nd) None of the above"},
        
        {"a) It creates a context for resource management\nb) It defines a new function\nc) It handles exceptions\nd) It is used for importing modules"},
        
        {"a) They serve the same purpose\nb) `__str__` is for user-friendly output, `__repr__` is for unambiguous output\nc) `__str__` is called by `print`, `__repr__` is not\nd) Both are the same"},
        
        {"a) Use a set\nb) Use a loop\nc) Use the list method\n d) All of the above"},
        
        {"a) It allows asynchronous programming\nb) It is faster than threading\nc) It simplifies code\n d) None of the above"},
        
        {"a) concat()\nb) combine()\nc) append()\nd) extend()"}
    };
    
    string pythonAdvancedAnswers[10] = {"a", "c", "b", "a", "b", "a", "b", "d", "a", "d"};

    #include <string>

    string pythonAdvancedExplanations[10][1] = {

        {"In Python, a decorator is a function that modifies another function or method, allowing you to wrap additional behavior around the original function, enhancing its capabilities."},
        
        {"A list in Python is correctly created using square brackets. For example, myList = [1, 2, 3] initializes a list containing three elements."},
        
        {"In a class, 'self' refers to the instance of the class itself. It allows access to the attributes and methods associated with that instance, making it fundamental in object-oriented programming."},
        
        {"The output of the list comprehension [x for x in range(5) if x % 2 == 0] will be [0, 2, 4]. This creates a new list containing only the even numbers from the specified range."},
        
        {"Multiple inheritance in Python allows a class to inherit attributes and methods from more than one parent class. This feature provides greater flexibility but can lead to complexity in method resolution."},
        
        {"The 'with' statement in Python simplifies exception handling by wrapping the execution of a block of code within methods defined by a context manager, ensuring proper resource management."},
        
        {"The __str__ and __repr__ methods in Python serve different purposes; __str__ is meant to provide a readable string representation for end-users, while __repr__ aims to provide an unambiguous representation for developers."},
        
        {"To remove duplicates from a list, you can convert it to a set and back to a list, e.g., list(set(myList)). This method leverages the set's unique properties."},
        
        {"Asyncio in Python allows for asynchronous programming, enabling concurrent execution of tasks without blocking, which is essential for I/O-bound applications."},
        
        {"The extend() method in a list appends elements from an iterable to the end of the list, effectively merging lists, unlike append(), which adds a single element."}
    };


    string userAnswers[10];

    for(int i=0; i<10; i++){
        cout << i + 1 << ". " << pythonAdvancedQuestions[i][0] << endl;
        cout << pythonAdvancedOptions[i][0] << endl;
        cout << "Answer : "; cin >> userAnswers[i];
        for (char &c : userAnswers[i] ){
            c = tolower(c);
        }
        if(userAnswers[i] == pythonAdvancedAnswers[i]){
            userScore[i] = 1;
            cout << "Correct answer..." << endl;
        }
        else if (userAnswers[i] == "pass"){
            userScore[i] = 0;
            continue;
        }
        else{
            userScore[i] = 0 ;
            cout << "Wrong answer..." << endl;
            cout << "The correct answer is " << pythonAdvancedAnswers[i] << "." << endl;
        }
    }

}

void sqlBasicQuiz() {
    string sqlBasicQuestions[10][1] = {
        {"What does SQL stand for?"},
        {"Which of the following is a valid SQL statement?"},
        {"What is the purpose of the `SELECT` statement?"},
        {"Which SQL clause is used to filter records?"},
        {"What is the default sorting order of the `ORDER BY` clause?"},
        {"What is the purpose of the `WHERE` clause?"},
        {"Which SQL statement is used to update data in a table?"},
        {"What is a primary key?"},
        {"Which SQL function is used to count the number of rows?"},
        {"What is the purpose of the `JOIN` clause?"}
    };

    string sqlBasicOptions[10][1] = {
        {"a) Structured Query Language\nb) Sequential Query Language\nc) Simple Query Language\nd) None of the above"},
        {"a) SELECT * FROM table;\nb) SELECT table *;\nc) TABLE SELECT *;\nd) None of the above"},
        {"a) To insert data into a table\nb) To retrieve data from a database\nc) To update data in a table\nd) To delete data from a table"},
        {"a) WHERE\nb) FILTER\nc) SELECT\nd) SORT"},
        {"a) Ascending\nb) Descending\nc) Random\nd) None of the above"},
        {"a) To delete records\nb) To update records\nc) To filter records based on a condition\nd) To select records"},
        {"a) UPDATE statement\nb) CHANGE statement\nc) MODIFY statement\nd) None of the above"},
        {"a) A unique identifier for each record in a table\nb) A field that can hold null values\nc) A foreign key reference\nd) None of the above"},
        {"a) COUNT()\nb) SUM()\nc) AVERAGE()\nd) TOTAL()"},
        {"a) To combine rows from two or more tables\nb) To delete data from multiple tables\nc) To update data in a table\nd) To select records"}
    };

    string sqlBasicAnswers[10] = {"a", "a", "b", "a", "a", "c", "a", "a", "a", "a"};

    string sqlBasicExplanations[10][1] = {
        {"SQL stands for Structured Query Language, which is used for managing and manipulating databases."},
        {"`SELECT * FROM table;` is a valid SQL statement that retrieves all records from the specified table."},
        {"The purpose of the `SELECT` statement is to retrieve data from a database."},
        {"The `WHERE` clause is used to filter records based on specified conditions."},
        {"The default sorting order of the `ORDER BY` clause is ascending."},
        {"The `WHERE` clause filters records based on a specified condition, allowing more control over the results."},
        {"The `UPDATE` statement is used to modify existing records in a table."},
        {"A primary key is a unique identifier for each record in a table, ensuring that no two records have the same value."},
        {"The `COUNT()` function counts the number of rows in a result set."},
        {"The `JOIN` clause combines rows from two or more tables based on a related column."}
    };

    string userAnswers[10];
    int userScore[10] = {0};

    for(int i = 0; i < 10; i++) {
        cout << i + 1 << ". " << sqlBasicQuestions[i][0] << endl;
        cout << sqlBasicOptions[i][0] << endl;
        cout << "Answer: "; 
        cin >> userAnswers[i];

        // Convert user answer to lowercase
        for (char &c : userAnswers[i]) {
            c = tolower(c);
        }

        // Check the answer and provide feedback
        if (userAnswers[i] == sqlBasicAnswers[i]) {
            userScore[i] = 1;
            cout << "Correct answer..." << endl;
        } else {
            userScore[i] = 0;
            cout << "Wrong answer..." << endl;
            cout << "The correct answer is " << sqlBasicAnswers[i] << "." << endl;
            cout << "Explanation: " << sqlBasicExplanations[i][0] << endl;
        }
        cout << endl; // Print a newline for better readability
    }

    // Optionally, print the total score
    int totalScore = 0;
    for (int score : userScore) {
        totalScore += score;
    }
    cout << "Your total score is: " << totalScore << " out of 10." << endl;
}

void sqlIntermediateQuiz() {
    string sqlIntermediateQuestions[10][1] = {
        {"What is a foreign key?"},
        {"What is the purpose of the `GROUP BY` clause?"},
        {"How do you remove duplicate records in SQL?"},
        {"What is the output of the following SQL query: SELECT COUNT(*) FROM users;?"},
        {"What is an aggregate function?"},
        {"What does `HAVING` do in SQL?"},
        {"What is the difference between `INNER JOIN` and `OUTER JOIN`?"},
        {"What SQL statement is used to create a new table?"},
        {"How do you change a column's data type in SQL?"},
        {"What is normalization in databases?"}
    };

    string sqlIntermediateOptions[10][1] = {
        {"a) A key that refers to another table's primary key\nb) A unique identifier\nc) A key that can have null values\nd) None of the above"},
        {"a) To sort records\nb) To group records with similar values\nc) To filter records\nd) To join tables"},
        {"a) Using the DISTINCT keyword\nb) Using the UNIQUE keyword\nc) Using the GROUP BY clause\nd) None of the above"},
        {"a) Returns the total number of users\nb) Returns the first user\nc) Returns an error\nd) Returns all user records"},
        {"a) A function that operates on multiple rows\nb) A function that returns a single value\nc) Both a and b\nd) None of the above"},
        {"a) To filter groups based on a condition\nb) To sort records\nc) To join tables\nd) None of the above"},
        {"a) `INNER JOIN` returns only matching rows, `OUTER JOIN` returns all rows\nb) `INNER JOIN` returns all rows, `OUTER JOIN` returns only matching rows\nc) Both are the same\nd) None of the above"},
        {"a) CREATE TABLE statement\nb) ALTER TABLE statement\nc) DROP TABLE statement\nd) INSERT INTO statement"},
        {"a) Using ALTER TABLE command\nb) Using UPDATE command\nc) Using CREATE TABLE command\nd) None of the above"},
        {"a) The process of organizing data to reduce redundancy\nb) The process of duplicating data\nc) The process of removing data\nd) None of the above"}
    };

    string sqlIntermediateAnswers[10] = {"a", "b", "a", "a", "c", "a", "a", "a", "a", "a"};

    string sqlIntermediateExplanations[10][1] = {
        {"A foreign key is a field in a table that uniquely identifies a row of another table, establishing a relationship between the two."},
        {"The `GROUP BY` clause groups rows that have the same values in specified columns, allowing aggregate functions to be applied to each group."},
        {"To remove duplicate records in SQL, the `DISTINCT` keyword is used in the `SELECT` statement."},
        {"The output of `SELECT COUNT(*) FROM users;` returns the total number of records in the `users` table."},
        {"An aggregate function performs a calculation on a set of values and returns a single value, such as `SUM()`, `AVG()`, or `COUNT()`."},
        {"The `HAVING` clause filters records after aggregation, allowing conditions to be applied to groups."},
        {"`INNER JOIN` returns only rows that have matching values in both tables, while `OUTER JOIN` returns all rows from one table and matched rows from the other."},
        {"The SQL statement used to create a new table is `CREATE TABLE`."},
        {"To change a column's data type, you can use the `ALTER TABLE` command with `ALTER COLUMN`."},
        {"Normalization is the process of organizing data in a database to reduce redundancy and improve data integrity."}
    };

    string userAnswers[10];
    int userScore[10] = {0};

    for(int i = 0; i < 10; i++) {
        cout << i + 1 << ". " << sqlIntermediateQuestions[i][0] << endl;
        cout << sqlIntermediateOptions[i][0] << endl;
        cout << "Answer: "; 
        cin >> userAnswers[i];

        // Convert user answer to lowercase
        for (char &c : userAnswers[i]) {
            c = tolower(c);
        }

        // Check the answer and provide feedback
        if (userAnswers[i] == sqlIntermediateAnswers[i]) {
            userScore[i] = 1;
            cout << "Correct answer..." << endl;
        } else {
            userScore[i] = 0;
            cout << "Wrong answer..." << endl;
            cout << "The correct answer is " << sqlIntermediateAnswers[i] << "." << endl;
            cout << "Explanation: " << sqlIntermediateExplanations[i][0] << endl;
        }
        cout << endl; // Print a newline for better readability
    }

    // Optionally, print the total score
    int totalScore = 0;
    for (int score : userScore) {
        totalScore += score;
    }
    cout << "Your total score is: " << totalScore << " out of 10." << endl;
}

void sqlAdvancedQuiz() {
    string sqlAdvancedQuestions[10][1] = {
        {"What is a subquery?"}, 
        {"What is the purpose of indexes in SQL?"}, 
        {"What is a stored procedure?"}, 
        {"What is a trigger?"}, 
        {"How do you implement transactions in SQL?"}, 
        {"What is the difference between `UNION` and `UNION ALL`?"}, 
        {"What is the purpose of the `EXPLAIN` statement?"}, 
        {"What is a view in SQL?"}, 
        {"What are CTEs in SQL?"}, 
        {"What is a window function?"}
    };

    string sqlAdvancedOptions[10][1] = {
        {"a) A query nested inside another query\nb) A query that cannot return data\nc) A query that updates records\nd) None of the above"},
        {"a) To speed up data retrieval\nb) To encrypt data\nc) To join tables\nd) None of the above"},
        {"a) A function that performs complex calculations\nb) A stored SQL command that can be executed\nc) Both a and b\nd) None of the above"},
        {"a) A function that automatically updates records\nb) A database object that executes automatically on certain events\nc) A type of index\nd) None of the above"},
        {"a) Using BEGIN and END statements\nb) Using COMMIT and ROLLBACK statements\nc) Both a and b\nd) None of the above"},
        {"a) `UNION` removes duplicate records, `UNION ALL` includes them\nb) Both return the same results\nc) `UNION` includes all records, `UNION ALL` excludes duplicates\nd) None of the above"},
        {"a) To show the execution plan of a query\nb) To optimize queries\nc) Both a and b\nd) None of the above"},
        {"a) A virtual table based on a SELECT query\nb) A physical table in the database\nc) A temporary table\nd) None of the above"},
        {"a) Common Table Expressions, used for simplifying complex queries\nb) Temporary tables\nc) Views\nd) None of the above"},
        {"a) A function that performs calculations across a set of rows\nb) A type of aggregate function\nc) Both a and b\nd) None of the above"}
    };

    string sqlAdvancedAnswers[10] = {"a", "a", "b", "b", "c", "a", "c", "a", "a", "a"};

    string sqlAdvancedExplanations[10][1] = {
        {"A subquery is a query nested inside another query, often used to provide data to the main query."},
        {"Indexes speed up data retrieval operations on a database table by providing quick access to rows."},
        {"A stored procedure is a stored SQL command that can be executed on demand, allowing for code reuse."},
        {"A trigger is a database object that automatically executes a specified action when certain events occur in a table."},
        {"Transactions in SQL can be implemented using `BEGIN`, `COMMIT`, and `ROLLBACK` statements to ensure data integrity."},
        {"`UNION` combines results from two or more SELECT statements and removes duplicates, while `UNION ALL` includes duplicates."},
        {"The `EXPLAIN` statement shows the execution plan of a query, helping to optimize performance."},
        {"A view is a virtual table based on the result of a SELECT query, which can be used to simplify complex queries."},
        {"CTEs (Common Table Expressions) are used to simplify complex queries by defining temporary result sets."},
        {"A window function performs calculations across a set of rows related to the current row, allowing for advanced analytics."}
    };

    string userAnswers[10];
    int userScore[10] = {0};

    for(int i = 0; i < 10; i++) {
        cout << i + 1 << ". " << sqlAdvancedQuestions[i][0] << endl;
        cout << sqlAdvancedOptions[i][0] << endl;
        cout << "Answer: "; 
        cin >> userAnswers[i];

        // Convert user answer to lowercase
        for (char &c : userAnswers[i]) {
            c = tolower(c);
        }

        // Check the answer and provide feedback
        if (userAnswers[i] == sqlAdvancedAnswers[i]) {
            userScore[i] = 1;
            cout << "Correct answer..." << endl;
        } else {
            userScore[i] = 0;
            cout << "Wrong answer..." << endl;
            cout << "The correct answer is " << sqlAdvancedAnswers[i] << "." << endl;
            cout << "Explanation: " << sqlAdvancedExplanations[i][0] << endl;
        }
        cout << endl; // Print a newline for better readability
    }

    // Optionally, print the total score
    int totalScore = 0;
    for (int score : userScore) {
        totalScore += score;
    }
    cout << "Your total score is: " << totalScore << " out of 10." << endl;
}



void htmlBasic() {
    string htmlBasicQuestions[10][1] = {
        {"What does HTML stand for?"},
        {"Which HTML tag is used to define an internal style sheet?"},
        {"What is the correct HTML element for inserting a line break?"},
        {"Which attribute is used to define the inline styles?"},
        {"Which tag is used to create a hyperlink?"},
        {"Which of the following is the correct way to create a comment in HTML?"},
        {"Which tag is used to define an unordered list?"},
        {"What is the purpose of the <head> tag in HTML?"},
        {"What is the correct HTML element for defining important text?"},
        {"Which HTML tag is used to define an image?"}
    };

    string htmlBasicOptions[10][1] = {
        {"a) Hypertext Markup Language\nb) Hyperlink and Text Markup Language\nc) High-Level Text Markup Language\nd) None of the above"},
        {"a) <style>\nb) <script>\nc) <css>\nd) <styles>"},
        {"a) <br />\nb) <break>\nc) <linebreak>\nd) <lb>"},
        {"a) class\nb) id\nc) style\nd) type"},
        {"a) <link>\nb) <a>\nc) <href>\nd) <hyperlink>"},
        {"a) <!-- This is a comment -->\nb) // This is a comment\nc) # This is a comment\nd) /* This is a comment */"},
        {"a) <ul>\nb) <ol>\nc) <li>\nd) <list>"},
        {"a) To define the body content\nb) To define the title and meta information\nc) To include scripts\nd) To link CSS styles"},
        {"a) <strong>\nb) <important>\nc) <b>\nd) <em>"},
        {"a) <image>\nb) <src>\nc) <img>\nd) <picture>"}
    };

    string htmlBasicAnswers[10] = {"a", "a", "a", "c", "b", "a", "a", "b", "a", "c"};

    string htmlBasicExplanations[10][1] = {
        {"HTML stands for 'Hypertext Markup Language'. It is the standard markup language used to create web pages."},
        {"The <style> tag is used within the <head> section to define internal CSS styles for the HTML document."},
        {"The <br> tag is used to insert a line break in HTML, allowing content to continue on a new line."},
        {"The style attribute is used to define inline styles directly within HTML elements."},
        {"The <a> tag is used to create hyperlinks that allow users to navigate to other web pages."},
        {"Comments in HTML are created using <!-- comment -->, allowing you to include notes in the code."},
        {"The <ul> tag defines an unordered list, typically rendered with bullet points."},
        {"The <head> tag contains metadata about the HTML document, such as the title and links to styles."},
        {"The <strong> tag is used to define important text, typically rendered in bold."},
        {"The <img> tag is used to embed images in an HTML document."}
    };

    string userAnswers[10];
    int userScore[10] = {0};

    for(int i = 0; i < 10; i++) {
        cout << i + 1 << ". " << htmlBasicQuestions[i][0] << endl;
        cout << htmlBasicOptions[i][0] << endl;
        cout << "Answer: "; 
        cin >> userAnswers[i];

        for (char &c : userAnswers[i]) {
            c = tolower(c);
        }

        if (userAnswers[i] == htmlBasicAnswers[i]) {
            userScore[i] = 1;
            cout << "Correct answer..." << endl;
        } 
        else if (userAnswers[i] == "pass"){
            continue;
        }
        
        else {
            userScore[i] = 0;
            cout << "Wrong answer..." << endl;
            cout << "The correct answer is " << htmlBasicAnswers[i] << "." << endl;
            cout << "Explanation: " << htmlBasicExplanations[i][0] << endl;
        }
    }
}



void htmlIntermediateQuiz() {
    string htmlIntermediateQuestions[10][1] = {
        {"What does the `<div>` tag represent in HTML?"},
        {"Which HTML element is used to specify a footer for a document or section?"},
        {"What is the purpose of the `<link>` element in HTML?"},
        {"Which tag is used to define a table row in HTML?"},
        {"What is the correct way to embed a video in HTML5?"},
        {"Which attribute is used to specify the character encoding in HTML?"},
        {"What does the `<meta>` tag provide in an HTML document?"},
        {"Which attribute is used to define the size of an input element?"},
        {"What does the `<iframe>` tag allow you to do in HTML?"},
        {"Which HTML5 tag is used to define a container for navigation links?"}
    };

    string htmlIntermediateOptions[10][1] = {
        {"a) A block-level element for grouping content\nb) A style element\nc) A hyperlink element\nd) An inline element"},
        {"a) `<footer>`\nb) `<bottom>`\nc) `<sectionfooter>`\nd) `<end>`"},
        {"a) To link CSS stylesheets\nb) To embed JavaScript files\nc) To define a favicon\nd) To add meta descriptions"},
        {"a) `<tr>`\nb) `<td>`\nc) `<table>`\nd) `<th>`"},
        {"a) `<video src=\"video.mp4\"></video>`\nb) `<embed src=\"video.mp4\"></embed>`\nc) `<media src=\"video.mp4\"></media>`\nd) `<video file=\"video.mp4\"></video>`"},
        {"a) charset\nb) encoding\nc) content-type\nd) http-equiv"},
        {"a) To include external CSS styles\nb) To define a script location\nc) To add metadata about the document\nd) To link images"},
        {"a) size\nb) length\nc) width\nd) height"},
        {"a) To embed another HTML page\nb) To create a hyperlink\nc) To include stylesheets\nd) To define a section"},
        {"a) `<nav>`\nb) `<menu>`\nc) `<link>`\nd) `<section>`"}
    };

    string htmlIntermediateAnswers[10] = {"a", "a", "a", "a", "a", "a", "c", "a", "a", "a"};

    string htmlIntermediateExplanations[10][1] = {
        {"The `<div>` tag is a block-level element used for grouping content and applying CSS styles. It helps in organizing the layout of a webpage."},
        {"The `<footer>` tag is used to define a footer for a document or section, typically containing copyright information, links, or other relevant information."},
        {"The `<link>` element is used to link external CSS stylesheets to an HTML document, allowing for styling of the HTML content."},
        {"The `<tr>` tag defines a table row in an HTML table. It is used to group one or more `<td>` (table data) elements."},
        {"The correct way to embed a video in HTML5 is using the `<video>` tag with a `src` attribute, allowing browsers to play video files."},
        {"The `charset` attribute in the `<meta>` tag specifies the character encoding for the HTML document, ensuring that text is displayed correctly."},
        {"The `<meta>` tag provides metadata about the HTML document, such as character set, page description, and keywords for search engines."},
        {"The `size` attribute specifies the width of an input element in characters, controlling its visual size on the page."},
        {"The `<iframe>` tag allows you to embed another HTML page within the current page, creating a nested browsing context."},
        {"The `<nav>` tag is used to define a container for navigation links, improving the semantic structure of the document."}
    };

    string userAnswers[10];
    int userScore[10] = {0};
    

    for(int i = 0; i < 10; i++) {
        cout << i + 1 << ". " << htmlIntermediateQuestions[i][0] << endl;
        cout << htmlIntermediateOptions[i][0] << endl;
        cout << "Answer: "; 
        cin >> userAnswers[i];

        // Convert user answer to lowercase
        for (char &c : userAnswers[i]) {
            c = tolower(c);
        }

        // Check the answer and provide feedback
        if (userAnswers[i] == htmlIntermediateAnswers[i]) {
            userScore[i] = 1;
            cout << "Correct answer..." << endl;
        } else {
            userScore[i] = 0;
            cout << "Wrong answer..." << endl;
            cout << "The correct answer is " << htmlIntermediateAnswers[i] << "." << endl;
            cout << "Explanation: " << htmlIntermediateExplanations[i][0] << endl;
        }
    }
}

void htmlAdvancedQuiz() {
    string htmlAdvancedQuestions[10][1] = {
        {"What does the `<canvas>` element do in HTML5?"},
        {"Which HTML tag is used to specify a standard way to define a web page's metadata?"},
        {"What is the purpose of the `<data>` tag in HTML5?"}, 
        {"Which HTML attribute is used to specify the URL of a linked document?"},
        {"What does the `download` attribute do in `<a>` tags?"},
        {"How do you define a template in HTML?"},
        {"Which HTML tag is used to include an external script file?"},
        {"What is the difference between `<section>` and `<article>` tags in HTML5?"},
        {"How can you define a custom data attribute in HTML?"}, 
        {"What is the purpose of the `<noscript>` tag in HTML?"}
    };

    string htmlAdvancedOptions[10][1] = {
        {"a) It draws graphics\nb) It creates text\nc) It displays images\nd) It embeds videos"},
        {"a) `<meta>`\nb) `<header>`\nc) `<title>`\nd) `<footer>`"},
        {"a) To define a block of data\nb) To represent a date and time\nc) To display a media resource\nd) To embed scripts"},
        {"a) href\nb) src\nc) link\nd) url"},
        {"a) It specifies the file type\nb) It prompts a download dialog\nc) It restricts access\nd) It creates a link"},
        {"a) `<template>`\nb) `<define>`\nc) `<script>`\nd) `<custom>`"},
        {"a) `<script src=\"file.js\"></script>`\nb) `<link src=\"file.js\">\n`<b>script src=\"file.js\"></b>\nc) `<js src=\"file.js\">`\nd) `<code src=\"file.js\">`"},
        {"a) `<section>` is for general content, `<article>` is for standalone content\nb) `<section>` is for navigation, `<article>` is for articles\nc) No difference\nd) `<article>` can only contain text."},
        {"a) By using the `data-*` attribute\nb) By creating a custom tag\nc) By using the `custom` keyword\nd) By prefixing with `x-`"},
        {"a) To provide alternative content for users without JavaScript\nb) To create a script\nc) To define meta information\nd) To link external scripts"}
    };

    string htmlAdvancedAnswers[10] = {"a", "a", "a", "a", "b", "a", "a", "a", "a", "a"};

    string htmlAdvancedExplanations[10][1] = {
        {"The `<canvas>` element in HTML5 is used to draw graphics on the fly via JavaScript, allowing developers to create dynamic images, animations, and interactive content."},
        {"The `<meta>` tag is used to specify metadata about an HTML document, such as character set, author, and viewport settings, which are crucial for SEO and proper rendering."},
        {"The `<data>` tag is used to link content with a machine-readable format, allowing browsers and scripts to understand the value of data embedded in the HTML."},
        {"The `href` attribute specifies the URL of the linked document in `<a>` (anchor) tags, defining where the link points to."},
        {"The `download` attribute in an `<a>` tag prompts users to download a linked file instead of navigating to it. It can suggest a filename for the downloaded file."},
        {"The `<template>` tag is used to define template content that can be cloned and inserted into the document using JavaScript, allowing for dynamic content generation."},
        {"The `<script>` tag is used to include external JavaScript files into an HTML document by specifying the `src` attribute with the file's URL."},
        {"The `<section>` tag is intended for thematic grouping of content, while the `<article>` tag is used for self-contained content that can be independently distributed or reused."},
        {"You can define a custom data attribute by using the `data-*` attribute syntax, such as `data-custom-name`, allowing you to store extra information on any HTML element."},
        {"The `<noscript>` tag is used to provide alternative content for users who have disabled JavaScript in their browsers, ensuring they receive essential information."}
    };

    string userAnswers[10];
    int userScore[10] = {0};

    for(int i = 0; i < 10; i++) {
        cout << i + 1 << ". " << htmlAdvancedQuestions[i][0] << endl;
        cout << htmlAdvancedOptions[i][0] << endl;
        cout << "Answer: "; 
        cin >> userAnswers[i];

        // Convert user answer to lowercase
        for (char &c : userAnswers[i]) {
            c = tolower(c);
        }

        // Check the answer and provide feedback
        if (userAnswers[i] == htmlAdvancedAnswers[i]) {
            userScore[i] = 1;
            cout << "Correct answer..." << endl;
        } 
        else {
            userScore[i] = 0;
            cout << "Wrong answer..." << endl;
            cout << "The correct answer is " << htmlAdvancedAnswers[i] << "." << endl;
            cout << "Explanation: " << htmlAdvancedExplanations[i][0] << endl;
        }
    }
}

#include <iostream>
#include <string>
#include <cctype> // for tolower
using namespace std;

void cssBasicQuiz() {
    string cssBasicQuestions[10][1] = {
        {"What does CSS stand for?"},
        {"Which property is used to change the text color in CSS?"},
        {"What is the correct way to apply a style to an HTML element in CSS?"},
        {"Which CSS property controls the text size?"},
        {"How do you select an element with the id 'header' in CSS?"},
        {"Which of the following is a valid CSS selector?"},
        {"What is the default value of the position property in CSS?"},
        {"Which property is used to add space between elements?"},
        {"What is the purpose of the `float` property in CSS?"},
        {"Which CSS property is used to change the font of an element?"}
    };

    string cssBasicOptions[10][1] = {
        {"a) Cascading Style Sheets\nb) Colorful Style Sheets\nc) Creative Style Sheets\nd) Computer Style Sheets"},
        {"a) color\nb) text-color\nc) font-color\nd) background-color"},
        {"a) style='color:red;'\nb) {color:red;}\nc) p {color:red;}\nd) #p {color:red;}"},
        {"a) font-size\nb) text-size\nc) size\nd) text-font"},
        {"a) #header\nb) .header\nc) header\nd) *header"},
        {"a) .class\nb) #id\nc) element\nd) All of the above"},
        {"a) relative\nb) absolute\nc) static\nd) fixed"},
        {"a) padding\nb) margin\nc) border\nd) spacing"},
        {"a) To align elements horizontally\nb) To create a new layout\nc) To float elements to the left or right\nd) To hide elements"},
        {"a) font-family\nb) font-style\nc) text-font\nd) font-weight"}
    };

    string cssBasicAnswers[10] = {"a", "a", "c", "a", "a", "d", "c", "b", "c", "a"};

    string cssBasicExplanations[10][1] = {
        {"CSS stands for Cascading Style Sheets, which is a style sheet language used for describing the presentation of a document written in HTML or XML."},
        {"The `color` property is used to change the text color in CSS, allowing designers to control the appearance of text in web pages."},
        {"In CSS, styles are applied using selectors. The correct way to apply a style to an HTML element is by using a selector followed by the style declaration inside curly braces."},
        {"The `font-size` property controls the size of the text in CSS, allowing for adjustments to make text larger or smaller."},
        {"To select an element with the id 'header', use the `#` symbol followed by the id name, like `#header`."},
        {"All options listed are valid CSS selectors: class selectors (.), id selectors (#), and element selectors."},
        {"The default value of the position property is `static`, meaning elements are positioned according to the normal flow of the document."},
        {"The `margin` property is used to create space outside of an element, while `padding` creates space inside the element."},
        {"The `float` property is used to position elements to the left or right of their containing element, allowing for text and inline elements to wrap around."},
        {"The `font-family` property is used to change the font of an element, specifying the typeface to be used."}
    };

    string userAnswers[10];
    int userScore[10] = {0};

    for(int i = 0; i < 10; i++) {
        cout << i + 1 << ". " << cssBasicQuestions[i][0] << endl;
        cout << cssBasicOptions[i][0] << endl;
        cout << "Answer: "; 
        cin >> userAnswers[i];

        // Convert user answer to lowercase
        for (char &c : userAnswers[i]) {
            c = tolower(c);
        }

        // Check the answer and provide feedback
        if (userAnswers[i] == cssBasicAnswers[i]) {
            userScore[i] = 1;
            cout << "Correct answer..." << endl;
        } else {
            userScore[i] = 0;
            cout << "Wrong answer..." << endl;
            cout << "The correct answer is " << cssBasicAnswers[i] << "." << endl;
            cout << "Explanation: " << cssBasicExplanations[i][0] << endl;
        }
        cout << endl; // Print a newline for better readability
    }

    // Optionally, print the total score
    int totalScore = 0;
    for (int score : userScore) {
        totalScore += score;
    }
    cout << "Your total score is: " << totalScore << " out of 10." << endl;
}

void cssIntermediateQuiz() {
    string cssIntermediateQuestions[10][1] = {
        {"What does the `z-index` property do in CSS?"},
        {"Which CSS property is used to create rounded corners?"},
        {"What is the purpose of the `@media` rule in CSS?"},
        {"How do you center an element horizontally using margin?"},
        {"Which property is used to change the spacing between lines of text?"},
        {"What is the correct syntax for a CSS comment?"},
        {"Which pseudo-class is used to style an element when a user mouses over it?"},
        {"What does the `flex` property do in CSS Flexbox?"}, 
        {"Which CSS property is used to control the visibility of an element?"}, 
        {"How do you apply a CSS reset?"}
    };

    string cssIntermediateOptions[10][1] = {
        {"a) Changes the order of elements\nb) Controls element opacity\nc) Changes background color\nd) None of the above"},
        {"a) border-radius\nb) corner-radius\nc) shape-radius\nd) round-corners"},
        {"a) For defining media types\nb) To create media queries\nc) To include media files\nd) To apply styles only for print"},
        {"a) margin: auto;\nb) center: true;\nc) margin-left: auto;\nd) margin-center: auto;"},
        {"a) line-height\nb) spacing\nc) text-spacing\nd) text-height"},
        {"a) // This is a comment\nb) /* This is a comment */\nc) <!-- This is a comment -->\nd) # This is a comment"},
        {"a) :hover\nb) :active\nc) :focus\nd) :visited"},
        {"a) Defines a flex container\nb) Aligns items in a container\nc) Adjusts item size\nd) All of the above"},
        {"a) visibility\nb) display\nc) opacity\nd) hidden"},
        {"a) By using @import\nb) By applying a specific stylesheet\nc) By defining styles to reset all properties\nd) All of the above"}
    };

    string cssIntermediateAnswers[10] = {"a", "a", "b", "a", "a", "b", "a", "a", "b", "d"};

    string cssIntermediateExplanations[10][1] = {
        {"The `z-index` property controls the stacking order of elements on the z-axis, allowing you to specify which elements should appear on top when they overlap."},
        {"The `border-radius` property is used to create rounded corners for elements, enhancing the visual appeal of boxes and buttons."},
        {"The `@media` rule is used to apply styles based on the viewport size or media type, allowing responsive design."},
        {"To center an element horizontally using margins, set `margin: auto;` on the element, provided it has a defined width."},
        {"The `line-height` property controls the vertical spacing between lines of text, improving readability."},
        {"CSS comments are defined using `/* comment */`, allowing you to add notes in your stylesheet without affecting the output."},
        {"The `:hover` pseudo-class applies styles when the user hovers over an element, commonly used for buttons and links."},
        {"The `flex` property in CSS Flexbox defines how a flex item will grow or shrink to fit the space in its flex container."},
        {"The `visibility` property controls whether an element is visible or hidden, while the `display` property controls layout."},
        {"CSS resets can be applied by using `@import` to link a reset stylesheet or defining styles that set all properties to initial values."}
    };

    string userAnswers[10];
    int userScore[10] = {0};

    for(int i = 0; i < 10; i++) {
        cout << i + 1 << ". " << cssIntermediateQuestions[i][0] << endl;
        cout << cssIntermediateOptions[i][0] << endl;
        cout << "Answer: "; 
        cin >> userAnswers[i];

        // Convert user answer to lowercase
        for (char &c : userAnswers[i]) {
            c = tolower(c);
        }

        // Check the answer and provide feedback
        if (userAnswers[i] == cssIntermediateAnswers[i]) {
            userScore[i] = 1;
            cout << "Correct answer..." << endl;
        } else {
            userScore[i] = 0;
            cout << "Wrong answer..." << endl;
            cout << "The correct answer is " << cssIntermediateAnswers[i] << "." << endl;
            cout << "Explanation: " << cssIntermediateExplanations[i][0] << endl;
        }
        cout << endl; // Print a newline for better readability
    }

    // Optionally, print the total score
    int totalScore = 0;
    for (int score : userScore) {
        totalScore += score;
    }
    cout << "Your total score is: " << totalScore << " out of 10." << endl;
}

void cssAdvancedQuiz() {
    string cssAdvancedQuestions[10][1] = {
        {"What is CSS Grid Layout used for?"},
        {"What does the `calc()` function do in CSS?"},
        {"How can you create a CSS variable?"}, 
        {"What is the purpose of the `@keyframes` rule?"}, 
        {"How do you implement a CSS transition?"}, 
        {"What is the difference between `rem` and `em` units in CSS?"}, 
        {"What does the `filter` property do in CSS?"}, 
        {"How can you create a responsive design in CSS?"}, 
        {"What does the `object-fit` property do?"}, 
        {"How do you optimize CSS for performance?"}
    };

    string cssAdvancedOptions[10][1] = {
        {"a) For creating animations\nb) For creating layouts\nc) For creating styles\nd) For controlling visibility"},
        {"a) Performs mathematical calculations\nb) Adds filters to elements\nc) Changes the color\nd) None of the above"},
        {"a) Using `var()`\nb) Using `--variable`\nc) Using `set`\nd) Using `create`"},
        {"a) Defines key points in animations\nb) Sets the duration of animations\nc) Creates color gradients\nd) None of the above"},
        {"a) Using the transition property\nb) Using animation\nc) Both a and b\nd) Using display"},
        {"a) `rem` is relative to root, `em` is relative to the parent\nb) No difference\nc) `em` is larger than `rem`\nd) `rem` is absolute"},
        {"a) Applies styles\nb) Adds graphical effects to elements\nc) Changes layout\nd) None of the above"},
        {"a) Using media queries\nb) Using flexible layouts\nc) Both a and b\nd) None of the above"},
        {"a) Controls the aspect ratio of an element\nb) Resizes images\nc) Both a and b\nd) None of the above"},
        {"a) Minimize file size\nb) Use fewer selectors\nc) Combine stylesheets\nd) All of the above"}
    };

    string cssAdvancedAnswers[10] = {"b", "a", "b", "a", "c", "a", "b", "c", "a", "d"};

    string cssAdvancedExplanations[10][1] = {
        {"CSS Grid Layout is used for creating complex two-dimensional layouts on the web, allowing for precise control over rows and columns."},
        {"The `calc()` function allows you to perform mathematical calculations in CSS, enabling dynamic sizing based on various units."},
        {"CSS variables can be created using the `--variable` syntax and accessed with the `var()` function, allowing for reusable values in styles."},
        {"The `@keyframes` rule is used to define animations by specifying keyframes that indicate the styles at various points during the animation."},
        {"CSS transitions can be implemented using the `transition` property, allowing for smooth changes between styles when an element's state changes."},
        {"`rem` units are relative to the root font size, while `em` units are relative to the font size of the element they are used on."},
        {"The `filter` property applies graphical effects like blurring or color shifting to elements, enhancing visual design."},
        {"Responsive design can be achieved using media queries to apply different styles based on screen size or device characteristics."},
        {"The `object-fit` property defines how an element, such as an image or video, should be resized to fit its container."},
        {"To optimize CSS for performance, you can minimize file sizes, reduce the use of complex selectors, and combine multiple stylesheets into one."}
    };

    string userAnswers[10];
    int userScore[10] = {0};

    for(int i = 0; i < 10; i++) {
        cout << i + 1 << ". " << cssAdvancedQuestions[i][0] << endl;
        cout << cssAdvancedOptions[i][0] << endl;
        cout << "Answer: "; 
        cin >> userAnswers[i];

        // Convert user answer to lowercase
        for (char &c : userAnswers[i]) {
            c = tolower(c);
        }

        // Check the answer and provide feedback
        if (userAnswers[i] == cssAdvancedAnswers[i]) {
            userScore[i] = 1;
            cout << "Correct answer..." << endl;
        } else {
            userScore[i] = 0;
            cout << "Wrong answer..." << endl;
            cout << "The correct answer is " << cssAdvancedAnswers[i] << "." << endl;
            cout << "Explanation: " << cssAdvancedExplanations[i][0] << endl;
        }
        cout << endl; // Print a newline for better readability
    }

    // Optionally, print the total score
    int totalScore = 0;
    for (int score : userScore) {
        totalScore += score;
    }
    cout << "Your total score is: " << totalScore << " out of 10." << endl;
}

void jsBasicQuiz() {
    string jsBasicQuestions[10][1] = {
        {"What does JS stand for?"},
        {"Which of the following is a correct way to declare a variable in JavaScript?"},
        {"Which symbol is used for comments in JavaScript?"},
        {"How do you create a function in JavaScript?"},
        {"Which method is used to parse a JSON string?"},
        {"What is the correct way to write an array in JavaScript?"},
        {"Which of the following is a JavaScript data type?"},
        {"What does `console.log()` do?"},
        {"How can you add a comment in JavaScript?"},
        {"Which operator is used to assign a value to a variable?"}
    };

    string jsBasicOptions[10][1] = {
        {"a) Java Source\nb) Just Script\nc) JavaScript\nd) None of the above"},
        {"a) var x = 5;\nb) variable x = 5;\nc) v x = 5;\nd) int x = 5;"},
        {"a) // comment\nb) /* comment */\nc) <!-- comment -->\nd) Both a and b"},
        {"a) function myFunction()\nb) function:myFunction()\nc) create myFunction()\nd) def myFunction()"},
        {"a) JSON.parse()\nb) JSON.stringify()\nc) JSON.decode()\nd) JSON.convert()"},
        {"a) [1, 2, 3]\nb) (1, 2, 3)\nc) {1, 2, 3}\nd) <1, 2, 3>"},
        {"a) string\nb) number\nc) boolean\nd) All of the above"},
        {"a) Logs a message to the console\nb) Displays an alert\nc) Writes to the document\nd) None of the above"},
        {"a) // This is a comment\nb) /* This is a comment */\nc) Both a and b\nd) # This is a comment"},
        {"a) =\nb) ==\nc) ===\nd) :"}
    };

    string jsBasicAnswers[10] = {"c", "a", "d", "a", "a", "a", "d", "a", "c", "a"};

    string jsBasicExplanations[10][1] = {
        {"JS stands for JavaScript, a programming language used for web development."},
        {"In JavaScript, variables can be declared using the `var`, `let`, or `const` keywords. `var x = 5;` is a correct declaration."},
        {"Single-line comments can be created using `//`, while multi-line comments use `/* comment */`."},
        {"Functions in JavaScript are created using the `function` keyword followed by the function name and parentheses."},
        {"The `JSON.parse()` method is used to convert a JSON string into a JavaScript object."},
        {"An array in JavaScript is defined using square brackets, like `[1, 2, 3]`."},
        {"JavaScript data types include string, number, boolean, object, and more."},
        {"`console.log()` outputs a message to the web console, useful for debugging."},
        {"In JavaScript, comments can be added using `//` for single-line or `/* comment */` for multi-line."},
        {"The `=` operator is used to assign a value to a variable."}
    };

    string userAnswers[10];
    int userScore[10] = {0};

    for(int i = 0; i < 10; i++) {
        cout << i + 1 << ". " << jsBasicQuestions[i][0] << endl;
        cout << jsBasicOptions[i][0] << endl;
        cout << "Answer: "; 
        cin >> userAnswers[i];

        // Convert user answer to lowercase
        for (char &c : userAnswers[i]) {
            c = tolower(c);
        }

        // Check the answer and provide feedback
        if (userAnswers[i] == jsBasicAnswers[i]) {
            userScore[i] = 1;
            cout << "Correct answer..." << endl;
        } else {
            userScore[i] = 0;
            cout << "Wrong answer..." << endl;
            cout << "The correct answer is " << jsBasicAnswers[i] << "." << endl;
            cout << "Explanation: " << jsBasicExplanations[i][0] << endl;
        }
        cout << endl; // Print a newline for better readability
    }

    // Optionally, print the total score
    int totalScore = 0;
    for (int score : userScore) {
        totalScore += score;
    }
    cout << "Your total score is: " << totalScore << " out of 10." << endl;
}

void jsIntermediateQuiz() {
    string jsIntermediateQuestions[10][1] = {
        {"What is a closure in JavaScript?"},
        {"How do you create an object in JavaScript?"},
        {"What is the purpose of `this` keyword in JavaScript?"},
        {"What is the difference between `null` and `undefined`?"},
        {"Which method can be used to convert a string to a number?"}, 
        {"What does `Array.isArray()` do?"}, 
        {"How can you add a property to an object in JavaScript?"}, 
        {"What is event delegation in JavaScript?"}, 
        {"What are promises in JavaScript?"}, 
        {"What is the purpose of the `async` keyword?"}
    };

    string jsIntermediateOptions[10][1] = {
        {"a) A function returning another function\nb) A variable storing data\nc) An object\nd) None of the above"},
        {"a) var obj = {};\nb) var obj = [];\nc) var obj = new Object();\nd) Both a and c"},
        {"a) It refers to the global object\nb) It refers to the calling object\nc) It refers to the current function\nd) None of the above"},
        {"a) `null` means no value; `undefined` means variable is not assigned\nb) No difference\nc) `null` is an object; `undefined` is a type\nd) Both a and c"},
        {"a) parseInt()\nb) toString()\nc) Number()\nd) Both a and c"},
        {"a) Checks if an array exists\nb) Returns true if the object is an array\nc) Creates a new array\nd) None of the above"},
        {"a) Using dot notation\nb) Using bracket notation\nc) Both a and b\nd) None of the above"},
        {"a) The practice of attaching event handlers to parent elements\nb) Creating new events\nc) Handling multiple events\nd) None of the above"},
        {"a) Used to handle asynchronous operations\nb) Converts promises to strings\nc) Provides synchronous operations\nd) None of the above"},
        {"a) To define a function as asynchronous\nb) To return promises\nc) To pause execution\nd) None of the above"}
    };

    string jsIntermediateAnswers[10] = {"a", "d", "b", "d", "d", "b", "c", "a", "a", "a"};

    string jsIntermediateExplanations[10][1] = {
        {"A closure is a function that has access to its own scope, the outer function's scope, and the global scope, allowing for data encapsulation."},
        {"An object can be created using object literal syntax `{}`, the `new Object()` constructor, or the class syntax in ES6."},
        {"The `this` keyword refers to the object from which it was called, allowing methods to operate on the properties of that object."},
        {"`null` is an assignment value that represents 'no value', while `undefined` means a variable has been declared but not assigned."},
        {"`parseInt()` and `Number()` can convert strings to numbers, allowing mathematical operations."},
        {"`Array.isArray()` returns `true` if the object is an array and `false` otherwise, useful for type checking."},
        {"Properties can be added to an object using dot notation (e.g., `obj.property = value;`) or bracket notation (e.g., `obj['property'] = value;`)."},
        {"Event delegation is a technique where a single event listener is attached to a parent element to manage events for multiple child elements."},
        {"Promises are objects representing the eventual completion or failure of an asynchronous operation, allowing for better handling of asynchronous code."},
        {"The `async` keyword is used to declare an asynchronous function, which allows the use of `await` to pause execution until a promise is resolved."}
    };

    string userAnswers[10];
    int userScore[10] = {0};

    for(int i = 0; i < 10; i++) {
        cout << i + 1 << ". " << jsIntermediateQuestions[i][0] << endl;
        cout << jsIntermediateOptions[i][0] << endl;
        cout << "Answer: "; 
        cin >> userAnswers[i];

        // Convert user answer to lowercase
        for (char &c : userAnswers[i]) {
            c = tolower(c);
        }

        // Check the answer and provide feedback
        if (userAnswers[i] == jsIntermediateAnswers[i]) {
            userScore[i] = 1;
            cout << "Correct answer..." << endl;
        } else {
            userScore[i] = 0;
            cout << "Wrong answer..." << endl;
            cout << "The correct answer is " << jsIntermediateAnswers[i] << "." << endl;
            cout << "Explanation: " << jsIntermediateExplanations[i][0] << endl;
        }
        cout << endl; // Print a newline for better readability
    }

    // Optionally, print the total score
    int totalScore = 0;
    for (int score : userScore) {
        totalScore += score;
    }
    cout << "Your total score is: " << totalScore << " out of 10." << endl;
}

void jsAdvancedQuiz() {
    string jsAdvancedQuestions[10][1] = {
        {"What is the purpose of the `bind()` method in JavaScript?"},
        {"How do you create a class in JavaScript?"}, 
        {"What is the difference between `let`, `const`, and `var`?"}, 
        {"What are IIFEs in JavaScript?"}, 
        {"What is the purpose of `Object.freeze()`?"}, 
        {"How does prototypal inheritance work in JavaScript?"}, 
        {"What is a JavaScript module?"}, 
        {"What are Generators in JavaScript?"}, 
        {"What is the `fetch()` API?"}, 
        {"How do you handle errors in asynchronous code?"}
    };

    string jsAdvancedOptions[10][1] = {
        {"a) It creates a new function with a specific `this` value\nb) It binds events\nc) It merges objects\nd) None of the above"},
        {"a) class MyClass {}\nb) function MyClass() {}\nc) MyClass = function() {}\nd) Both a and b"},
        {"a) `var` is function-scoped, `let` and `const` are block-scoped\nb) `let` is constant, `const` is variable\nc) No difference\nd) Both a and c"},
        {"a) Immediately Invoked Function Expressions\nb) Inline Functions\nc) Both a and b\nd) None of the above"},
        {"a) It prevents modification of an object\nb) It creates a new object\nc) It defines properties\nd) None of the above"},
        {"a) Objects can inherit properties from other objects\nb) All objects are instances of Object\nc) Both a and b\nd) None of the above"},
        {"a) A way to organize code into reusable modules\nb) A function for AJAX calls\nc) Both a and b\nd) None of the above"},
        {"a) Functions that can be paused and resumed\nb) Functions that return multiple values\nc) Both a and b\nd) None of the above"},
        {"a) A modern way to make network requests\nb) A way to load scripts\nc) Both a and b\nd) None of the above"},
        {"a) Using `try` and `catch`\nb) Using `.then()`\nc) Using `.catch()`\nd) All of the above"}
    };

    string jsAdvancedAnswers[10] = {"a", "a", "a", "a", "a", "c", "a", "a", "a", "d"};

    string jsAdvancedExplanations[10][1] = {
        {"The `bind()` method creates a new function that, when called, has its `this` keyword set to the provided value."},
        {"Classes in JavaScript can be created using the `class` keyword, allowing for object-oriented programming."},
        {"`let` and `const` are block-scoped, while `var` is function-scoped, making `let` and `const` preferable in modern JavaScript."},
        {"IIFEs are Immediately Invoked Function Expressions, which are functions that execute as soon as they are defined."},
        {"`Object.freeze()` prevents modifications to existing properties and prevents new properties from being added to an object."},
        {"Prototypal inheritance allows objects to inherit properties from other objects, enabling a prototype chain."},
        {"JavaScript modules are reusable pieces of code that can be imported and exported between files."},
        {"Generators are functions that can be paused and resumed, allowing for the implementation of iterable sequences."},
        {"The `fetch()` API is a modern interface for making network requests, returning promises."},
        {"Errors in asynchronous code can be handled using `try/catch`, as well as `.then()` and `.catch()` methods."}
    };

    string userAnswers[10];
    int userScore[10] = {0};

    for(int i = 0; i < 10; i++) {
        cout << i + 1 << ". " << jsAdvancedQuestions[i][0] << endl;
        cout << jsAdvancedOptions[i][0] << endl;
        cout << "Answer: "; 
        cin >> userAnswers[i];

        // Convert user answer to lowercase
        for (char &c : userAnswers[i]) {
            c = tolower(c);
        }

        // Check the answer and provide feedback
        if (userAnswers[i] == jsAdvancedAnswers[i]) {
            userScore[i] = 1;
            cout << "Correct answer..." << endl;
        } else {
            userScore[i] = 0;
            cout << "Wrong answer..." << endl;
            cout << "The correct answer is " << jsAdvancedAnswers[i] << "." << endl;
            cout << "Explanation: " << jsAdvancedExplanations[i][0] << endl;
        }
        cout << endl; // Print a newline for better readability
    }

    // Optionally, print the total score
    int totalScore = 0;
    for (int score : userScore) {
        totalScore += score;
    }
    cout << "Your total score is: " << totalScore << " out of 10." << endl;
}




int main(){

    string language ;
    cout << "Enter any language from C++ and Python: " ; cin >> language;
    for (char &c : language){
        c = tolower(c);
    }
    string level;
    cout << "enter level - basic, intermediate or advanced : ";
    cin >> level;
    for (char &c : level){
        c = tolower(c);
    }
    cout << endl;
    cout << "Marking scheme : " <<  endl;
    cout << "+4 : For correct answer." << endl;
    cout << "-1 : For wrong answer." << endl;
    cout << "0  : For leaving unanswerd." << endl;
    cout << endl;
    cout << "Way to answer the questions : " << endl;
    cout << "Press any one from a,b,c,d for answering the question." << endl;
    cout << "Press p to leave the question." << endl;
    cout  << endl;


    if((language=="cpp" or "c++" ) and (level == "basic")){
        cppBasic();
    }
    else if((language=="cpp" or "c++" ) and (level == "intermediate")){
        cppIntermediate();
    }
    else if((language=="cpp" or "c++" ) and (level == "advanced")){
        cppAdvanced();
    }
    else if((language== "python" ) and (level == "basic")){
        pythonBasic();
    }
    else if((language == "python") and (level == "intermediate")){
        pythonIntermediate();
    }
    else if ((language == "python") and (level == "advanced")){
        pythonAdvanced();
    }
    else if ((language == "c") and (level == "basic")){
        cBasic();
    }
    else if ((language == "c") and (level == "intermediate")){
        cIntermediateQuiz();
    }
    else if ((language == "c") and (level == "Advanced")){
        cAdvancedQuiz();
    }
    else if ((language == "sql") and (level == "basic")){
        sqlBasicQuiz();
    }
    else if ((language == "sql") and (level == "intermediate")){
        sqlIntermediateQuiz();
    }
    else if ((language == "sql") and (level == "advanced")){
        sqlAdvancedQuiz();
    }
    else if ((language == "html") and (level == "basic")){
        htmlBasic();
    }
    else if ((language == "html") and (level == "intermediate")){
        htmlIntermediateQuiz();
    }
    else if ((language == "html") and (level == "advaced")){
        htmlAdvancedQuiz();
    }
    else if ((language == "css") and (level == "basic")){
        cssBasicQuiz();
    }
    else if ((language == "css") and (level == "intermediate")){
        cssIntermediateQuiz();
    }
    else if ((language == "css") and (level == "advanced")){
        cssAdvancedQuiz();
    }
    else if ((language == "js" or "javascript" or "java script") and (level == "basic")){
        jsBasicQuiz();
    }
    else if ((language == "js" or "javascript" or "java script") and (level == "intermediate")){
        jsIntermediateQuiz();
    }
    else if ((language == "js" or "javascript" or "java script") and (level == "advanced")){
        jsAdvancedQuiz();
    }
    else{
        cout << "The typed language's quiz is not available in our database." << endl;
        cout << "Try for another language... " << endl;
    }



    int totalScore = 0;
    for(int i=0; i<10; i++){
        totalScore += userScore[i];
    }
    cout << endl;
    cout << "Total score : " << totalScore << endl;


    



}