#include<iostream> //handles input and output
#include<cmath> //to compute more advanced math
#include<iomanip> //for decimal precision
using namespace std;

int main () {
	double ft,in,mtrs; //declaring variables for height

	cout << "What is your height in feet and inches?" << endl;
	cout << "Feet: ";
	cin >> ft;
	cout << "Inches: ";
	cin >> in;
	//ask user to input their height and store it

	in = ft*12+in;
	mtrs = in*0.0254;
	//make the conversions

	cout << fixed << setprecision(2); //round outputs to 2 decimal places

	cout << "Your height in meters is " << mtrs << " m." << endl; //output the height result


	double lb,kg; //declaring weight variables
	
	cout << "What is your weight in pounds? : ";
	cin >> lb;
	//get the weight in pounds from user
	
	kg = lb*0.4536; //make the conversion
	
	cout << "Your weight in kilograms is " << kg << " kg." <<  endl; //output the weight result


	double num = kg;
	double den = pow(mtrs,2);
	double bmi = num/den;
	//make the bmi calculation
	
	cout << "Your Body Index Mass is " << bmi << endl; //output the user's bmi

	double min_bmi = 18.5;
	double max_bmi = 24.9;
	//healthy bmi range provided in the homework
	//rearrange the BMI formula to find weight = BMI * height^2
	
	double min_weight = min_bmi * pow(mtrs,2);
	double max_weight = max_bmi * pow(mtrs,2);
	//calculate the minimum and maximum healthy weights
	//but this would be in kg!
	
	min_weight = min_weight*(1/0.4536);
	max_weight = max_weight*(1/0.4535);
	//convert previous calculation from kg to lb
	
	cout << "Based on the information you provided, your minumum healthy weight is " << min_weight << " lbs, and your maximum healthy weight is " << max_weight<< " lbs." << endl;
	
	
return 0;
}	



