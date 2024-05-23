#include <iostream>  // Correct preprocessing directive to include the iostream library

// Function declaration
void greet_user(std::string name);

int main() {
    int integer_variable = 10;  // Integer data type
    std::string string_variable = "Hello, Marta!";  // String data type
    float float_variable = 20.5;  // Float data type

    // Function call
    greet_user("Marta");

    // Conditional statement
    if (integer_variable > 5) {
      
        std::cout << integer_variable << " is greater than 5." << std::endl;
    } else {
       
        std::cout << integer_variable << " is not greater than 5." << std::endl;
    }

    return 0;
}


void greet_user(std::string name) {
    std::string greeting = "Hello, Marta! Your name is " + name + ".";
    std::cout << greeting << std::endl;
}
