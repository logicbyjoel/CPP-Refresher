// start of file

#include <iostream>

// declare our custom Log func 
void Log(const char* message);
// tell the compiler we will only invoke this function from this file
static int Multiply(int a, int b)
{
    Log("Multiply");
    return a * b;
}

int main()
{ 
    std::cout << Multiply(5,6) << std::endl;
    std::cin.get();
	return 0;
}
