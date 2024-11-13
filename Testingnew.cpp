# include<iostream>
using namespace std;
int main()

{
	char answer;
	cout << "is it raining?"
	"[y = yes, n= no]:" ;
	cin >> answer;
	if (answer == 'y') {
		cout << "get an umbrella.";
		cout << "Rainfall warning [r = red, o = orange, y = yellow]: ";
		cin >> answer;
		if (answer == 'r') {
			cout << "Serious: Flood and Landslide Warning";
		} else if (answer == 'o') {
			cout << "Moderate: Average Rainfall";
		} else if (answer == 'y') {
			cout << "Light: Bring an umbrella";
		}
	}
	else if (answer == 'n') {
		cout << "stay inside nigga.";
	} else {
		cout << "Invalid answer";
	}
	
	return 0;
} 
