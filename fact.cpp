#include <iostream>
#include "fact.h"



using namespace std;

int fact(int num)
{
	cout << "Inside fact: " << &fact << endl << flush;
	
	cout << "\tn " << &num << " = " << num << endl;
	if(num == 0)
		return 1;
	else
		return num * fact(num - 1);
}
