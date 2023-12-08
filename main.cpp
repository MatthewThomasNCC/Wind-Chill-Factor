#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

//Function declarations
double ctof(double temp);
double ftoc(double temp);
double windchill(double temp, double windSpeed, char tempScale);

double ctof(double temp) {
  return (((9.0 / 5.0) * temp) + 32.0);
}

double ftoc(double temp) {
 return ((5.0 / 9.0) * (temp - 32.0));
}

double windchill(double temp, double windSpeed, char tempScale) {
  if (tempScale == 'c' || tempScale == 'C') {
    temp = ctof(temp); //converts celsius temp to fahrenheit to fit with windchill factor formula 
  }
  double windchill_factor = 35.74 + 0.6215 * temp - 35.75 * pow(windSpeed, 0.16) + 0.4275 * temp * pow(windSpeed, 0.16);

  if (tempScale == 'c' || tempScale == 'C') {
    windchill_factor = ftoc(windchill_factor); //converts back to celsius if tempScale was set to c
  }
  return windchill_factor;
}

int main() {
  double temp;
  cout << "Enter current temperature: " << endl;
  cin >> temp;

  char tempScale;
  cout << "Enter temperature scale (f or c): " << endl;
  cin >> tempScale;

  double windSpeed;
  cout << "Enter wind speed (in mph): " << endl;
  cin >> windSpeed;

  double windchill_factor;
  
  if (tempScale == 'f' || tempScale == 'F'){
      windchill_factor = windchill(temp, windSpeed, 'f');
      cout << "Wind chill factor is " << fixed << setprecision(1) << windchill_factor << "F." << endl;
  } else if (tempScale == 'c' || tempScale == 'C') {
    windchill_factor = windchill(temp, windSpeed, 'c');
    cout << "Wind chill factor is " << fixed << setprecision(1) << windchill_factor << "C." << endl;
  } else {
    cerr << "Error. Please use use f for Fahrenheit or c for Celsius." << endl;
    return 1;
  }
  return 0;
}
