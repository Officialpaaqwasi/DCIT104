#include <iostream>

 //KLUTSE ISAAC   10970601 //
using namespace std;

int main()
{
	int l, average = 0, sum = 0, count_prime = 0 ;
	cout << " Enter your value: ";
	cin >> l;


	for(int i =2; i <= l; i ++)
  {
		int n;
		for(n=2; n<i; n++){
			if(i%n == 0){
				break;
				}
		}
		if(n == i){
			sum = sum + i;
			count_prime ++;
				}
  }

	cout << "The number of prime numbers available is: " << count_prime << endl << endl;
	cout << "The sum of the numbers is: " << sum << endl << endl;

	average = sum/count_prime;
	cout << "The average is: " << average << endl;

return 0;
}
