#include "TList.h"
#include <iostream>

using namespace std;

void main() {
	TList<int> A;

	A.Sort(15);
	A.Sort(1);
	A.Sort(32);
	A.Sort(4);
	A.Sort(7);
	A.Sort(21);
	A.Sort(0);

	//for (A.Reset(); !A.isEnd; A.GoNext) {
	//	cout << A.GetCurrenValue;
	//}
	return;
}












