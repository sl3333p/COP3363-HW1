#include <iostream> //for inputs and outputs
#include <iomanip> //for setw and setfill
using namespace std;

int main() {
	int number;
	cout << "Enter a number between 1000 and 9999: ";
	cin >> number;
	//get a number from user and store it
	
	int copy = number; // makes a copy of the number for further calculations
	int reverse = 0; //used to store the reversed number later. has to be set to 0 so that it doesn't automatically set to a 'garbage' number and doesnt mess up the calculations
	int sum = 0; //used for storing the sum 
	int digit; //used in the loop later
	
	for (int i = 0; i < 4; i++){ //loop: start(with 0), condition(make sure it doesnt run more than 4 times), increment (increases by 1 after each time it's run)
		digit = copy % 10; // get the last digit the of the number by taking the remainer when dividing by 10. for ex, 1234 % 10 = 4 (1234/10 = 123.4)
		reverse = reverse * 10 + digit; // since we set reverse = to 0 originally, start by adding the last digit to it. for ex, 0 * 10 + 4 = 4 (1st run), and then as the loop runs, next digits get added to the end 4 * 10 + 3 = 43 (2nd run) and so on
		sum += digit; // adds digit to the sum += is shortcut for sum = sum + digit
		copy /= 10; // removes the last digit from the number by dividing it by 10. done so that we're not just using same last digit every time. /= is shortcut for copy = copy / 10. for ex, 1234/10 = 123(.4) so now the last digit would be 3
	}
	
	cout << "Your reversed number: " << setw(4) << setfill('0') << reverse << endl; //outputs the reversed number. setw(4) sets the 'width' or the number of characters as 4 and setfill ('0') fills unused or empty slots with 0. for ex, if number was 321, it would make it 0321
	
	cout << "Sum of the digits is: " << sum << endl; //outputs the sum of the digits


return 0;
}
