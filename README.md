## Runbook

Clone the repo into your local directory.

`cd` into the directory if necessary.

Compile the hello-world.cpp file using `g++ hello-world.cpp`

The program will ask you to enter a length for your array and then input the individual elements of that array.  After you have reached your maximum inputs, it will display the array.

## Functions

A C++ function **definition** consists of a function header and a function body. A function **definition** tells the compiler about a function's name, return type, and parameters. A function definition provides the actual body of the function.

Here are all the parts of a function −

_Return Type_ − A function may return a value. The return type is the data type of the value the function returns. Some functions perform the desired operations without returning a value. In this case, the return type is the keyword void.

_Function Name_ − This is the actual name of the function. The function name and the parameter list together constitute the function **signature**.

_Parameters_ − A parameter is like a placeholder. When a function is invoked, you can pass things in to the function through its parameters/arguments. The parameter list refers to the type, order, and number of the parameters of a function. Parameters are optional; that is, a function may contain no parameters. Parameters are also called function arguments.

_Function Body_ − The function body contains a collection of statements that define what the function does.

`return_type function_name( parameter list ) { body of the function }`

**Declaring** a function is to give it a return type and a name so that the compiler can recognize it without all of the details. It is most useful when working with multiple source files and to save time from having to write the body of the function multiple times.

In order to use a function in different parts of a program, the function must be _called_ or _invoked_ by another function. The function that calls another function is known as the _calling function_ and the function that is being called is known as the _called function_. When a function is called, the control immediately passes from the calling function to the called function. The called function then executes its body after which the control returns to the next statement in the calling function.

When a program calls a function, program control is transferred to the called function. A called function performs defined task and when it’s return statement is executed or when its function-ending closing brace is reached, it returns program control back to the main program.

To call a function, if the function has a void return type, you simply need to pass the required parameters along with function name.

If the function returns a value, then you will need to create a variable in the context you're calling the function from to represent the return value of the function. For example, if a function called `radNess` returns an integer, and you call `radNess()` from `main()`, you'll need to create a new variable `int newRadNess = radNess()` to invoke/call the function with the proper return type.

A function signature defines the "contract" of the function, including return types, parameters, and the data types of our parameters.

## Classes

Classes are templates. An object, or an instance, is a concrete example of that template. An example of a class would be Animal and its objects would be dog, cow, monkey, etc. Properties of a class are private by default. To make them accessible add `public:` before the properties.

### Constructor

A constructor is a method that is called automatically when you create an instance of a class. When you create an object, a constructor of that class is called.

When you create a new object, memory is allocated using operator new function and then the constructor is invoked to initialize the memory. Here, The new operator does both the allocation and the initialization, where as the operator new only does the allocation.

The new operator is an operator which denotes a request for memory allocation on the Heap. If sufficient memory is available, new operator initializes the memory and returns the address of the newly allocated and initialized memory to the pointer variable.
## Destructor

A destructor is a member function which destructs or deletes an object when a function, program, delete operator, or a block containing local variables ends.  Destructors have the same name as the class preceded by a tilde.  They also don't take any arguments or return anything.

### Polymorphism

Polymorphism allows a created object to have multiple forms. Protected is an access modifier that allows derived classes to use properties from the base class. Polymorphism is considered as one of the important features of Object Oriented Programming.

### Encapsulation

Encapsulation makes the properties of a class private and allows them to be modified through public methods.

### Inheritance

Inheritance allows one class to use properties from another class. The inherited class is called the _derived_ class and the inheritor is called the _base_ class.
