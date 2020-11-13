## Runbook

//Work In Progress
Clone the repo into your local directory.
cd into the directory if necessary.
Compile the hello-world.cpp file using g++
Expected output: "Hello World!"

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
