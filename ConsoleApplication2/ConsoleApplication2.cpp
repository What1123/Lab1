#include <iostream>;
#include "Complex.h"
#include<cmath>
using namespace std;
int main()
{
	complex A;
	A.Read();
	A.Display();
	complex B;
	B.Read();
	B.Display();
	complex C= A.Pow(B);
	C.Display();
}
