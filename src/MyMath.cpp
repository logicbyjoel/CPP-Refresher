// create simple, lightweight source file for demo purposes
//

#include "Log.h"
int Multiply(int a, int b)
{
        Log("Multiply");
	int result = a * b;
	return result;
}
