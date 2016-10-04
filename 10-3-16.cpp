#include <stdio.h>
#include <iostream>

using namespace std;

int reverseFactorial(int numToReverse);

int main(){
	int userNum, outNum;
	cout << "Enter a number: ";
	cin >> userNum;
	cin.ignore();
	outNum = reverseFactorial(userNum);
	if(outNum != 0)
		cout << userNum << " = " << outNum << "!" << endl;
	else 
		cout << userNum << " NONE" << endl;
	return 0;
}


int reverseFactorial(int numToReverse){
	
	int count = 1;
	
	if(numToReverse == 1)
		return 0;
	
	while(numToReverse > 1 && numToReverse % count == 0){
		numToReverse /= count;
		if(numToReverse != 1)
			count++;
	}
	
	if (numToReverse == 1)
		return count;
	
	return 0;
		
}