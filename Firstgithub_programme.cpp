#include <iostream>
using namespace std;

 int sum(int x,int y);

int main() {
    int a = 5;
    int b = 10;
    int total = 0;

	total = sum(a,b);
    
	cout << "Hello world to my life " << endl;
    cout << "The sum is: " << total << endl;

    return 0;
}
 int sum(int x,int y){
 	int sum = 0;
 	sum = x + y;
 	return sum;
 }
