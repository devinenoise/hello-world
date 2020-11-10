## Runbook

Launch Program.

Expected output: "Hello World!"

## FUNctions

A C++ function **definition** consists of a function header and a function body. A function **definition** tells the compiler about a function's name, return type, and parameters. A function definition provides the actual body of the function.

Here are all the parts of a function −

_Return Type_ − A function may return a value. The return_type is the data type of the value the function returns. Some functions perform the desired operations without returning a value. In this case, the return_type is the keyword void.

_Function Name_ − This is the actual name of the function. The function name and the parameter list together constitute the function **signature**.

_Parameters_ − A parameter is like a placeholder. When a function is invoked, you pass a value to the parameter. This value is referred to as actual parameter or argument. The parameter list refers to the type, order, and number of the parameters of a function. Parameters are optional; that is, a function may contain no parameters.

_Function Body_ − The function body contains a collection of statements that define what the function does.

`return_type function_name( parameter list ) { body of the function }`

**Declaring** a function is to give it a type and a name so that the compiler can recognize it without all of the details. It is most useful when working with multiple source files and to save time from having to write the body of the function multiple times.

In order to use a function in different parts of a program, the function must be _called_ or _invoked_ by another function. The function that calls another function is known as the _calling function_ and the function that is being called is known as the _called function_. When a function is called, the control immediately passes from the calling function to the called function. The called function then executes its body after which the control returns to the next statement in the calling function.

When a program calls a function, program control is transferred to the called function. A called function performs defined task and when it’s return statement is executed or when its function-ending closing brace is reached, it returns program control back to the main program.

To call a function, you simply need to pass the required parameters along with function name, and if function returns a value, then you can store returned value.

A function signature defines input and output of the function.
