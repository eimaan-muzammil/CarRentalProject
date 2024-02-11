#pragma once
#include<iostream>
#include<string>
using namespace std;
class Car
{
private:
  string company;
  string model;
  int year;
  int rgNo;
  int rent;
  bool rented;//can be 0 or 1

public:
  Car(string company = "NA", string model = "NA", int year = 0, int rgNo = 0, int rent = 0)
      : company{company}, model{model}, year{year}, rgNo{rgNo}, rent{rent}, rented{false}
  {
  }
  string get_company();

  int get_year();
  int get_rgNo();
  string get_model();
  bool get_rented();
  void set_company(string company);
  void set_year(int year);
  void set_rgNo(int rgNo);
  void set_rent(int rent);
  void set_model(string model);

  void set_rented(bool rented);
  void displayCar()
  {
    cout << "Company :" << this->company << endl;
    cout << "model :" << this->model << endl;
    cout << "year :" << this->year << endl;
    cout << "registration no. :" << this->rgNo << endl;
    cout << "rent rs :" << this->rent << "/day" << endl;
  }
  friend double extraCharges(Car& car1);
  inline int add(int a, int b) {
   
}
};
void displayCar(Car &car)
{
  car.displayCar();
}
string Car::get_company()
{
  return company;
}
int Car::get_year()
{
  return year;
}
int Car::get_rgNo()
{
  return rgNo;
}
string Car::get_model()
{
  return model;
}
bool Car::get_rented()
{
  return rented;
}
void Car::set_company(string company)
{
  this->company = company;
}
void Car::set_year(int year)
{
  this->year = year;
}
void Car::set_rgNo(int rgNo)
{
  this->rgNo = rgNo;
}
void Car::set_rent(int rent)
{
  this->rent = rent;
}
void Car::set_model(string model)
{
  this->model = model;
}
void Car::set_rented(bool rented)
{
  this->rented = rented;
}
double extraCharges(Car& car1) {
    car1.rent += 1000.0; 
    return car1.rent; 
}
inline int add(int a, int b) {
    return a + b;
}