#pragma once
#include <iostream>
#include <string>
using namespace std;
class CelestialBody
{
	string name;
	float diameter;
	double mass;
	double temperature;
public:
	CelestialBody() { name = "None"; diameter = 0.0; mass = 0.0; temperature = 0.0; }
	CelestialBody(const CelestialBody&SO) { name = SO.name; diameter = SO.diameter; mass = SO.mass; temperature = SO.temperature; }
	CelestialBody(string nname, float ddiameter, double mmass, double ttemperature)
	{ name = nname; diameter = ddiameter; mass = mmass; temperature = ttemperature; }

	string GetName() { return name; }
	float GetDiameter() { return diameter; }
	double GetMass() { return mass; }
	double GetTemperature() { return diameter; }
	void SetName(string nname) { name = nname; }
	void SetDiameter(float ddiameter) { diameter = ddiameter; }
	void SetMass(double mmass) { mass = mmass; }
	void SetTemperature(double ttemperature) { temperature = ttemperature; }
	void InputSO();
	void OutputSO();
	void CompareWithEarthMass();
	void LifeExistence();
};
void CelestialBody::InputSO()
{
	cout << "Input name: ";
	cin >> name;
	cout << "Input diameter: ";
	cin >> diameter;
	cout << "Input mass: ";
	cin >> mass;
	cout << "Input temperature: ";
	cin >> temperature;
	cout << '\n';
}
void CelestialBody::OutputSO()
{
	cout <<'\n'
		<< "Name: " << name << '\n' 
		<< "Diameter: " << diameter << '\n'
		<< "Mass: " << mass << '\n'
		<< "Temperature: " << temperature << '\n';
}
void CelestialBody::CompareWithEarthMass()
{
	double EarthMass = 5.97219E+24;
	double Compare = 0.0;
	if (mass > EarthMass)
	{
		Compare = mass / EarthMass;
		cout << "The mass of a celestial body is " << Compare << " times greater than the mass of Earth." << '\n';
	}
	else if (mass < EarthMass)
	{
		Compare = EarthMass / mass;
		cout << "The mass of a celestial body is " << Compare << " times smaller than the mass of Earth."<<'\n';
	}
	else
		cout << "The mass of a celestial body equals to the mass of Earth." << '\n';
}
void CelestialBody::LifeExistence()
{
	float LowestTemp = -15.0;
	float HighestTemp = 122.0;
	if (temperature >= LowestTemp && temperature <= HighestTemp)
		cout << "Life Exists."<<'\n';
	else
		cout << "Life doesn't exist."<<'\n';
}
void Menu()
{
	cout <<'\n'<< "Choose an option:" << '\n'
		<< "Output celestial bodies - 0" << '\n'
		<< "Compare the mass of a CB with the Earth mass - 1" << '\n'
		<< "Find out whether life exists - 2" << '\n'
		<<"Exit - 3"<<'\n';

}