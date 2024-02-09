#include <iostream>
#include <string>
using namespace std;
class Car
{
private:
  string company;
  string model;
  int year;
  int rgNo;
  int rent;
  bool rented;

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
int main()
{
  Car car1("Toyota", "Coralla", 2022, 1);
  Car car2("honda", "civic", 2022, 2);
  Car car3("suzuki", "alto", 2022, 3);
  car1.set_rent(6000);
  car2.set_rent(9000);
  car3.set_rent(3000);

  cout << "-------------AVAILABLE CARS-----------" << endl;
  displayCar(car1);
  displayCar(car2);
  displayCar(car3);

  cout << "enter registration NO" << endl;
  int choice;
  cout << "enter:";
  cin >> choice;
  switch (choice)
  {
  case 1:
    if (!car1.get_rented())
    {
      car1.set_rented(true);
      cout << "You have successfully rented the car" << endl;
      displayCar(car1);
    }
    else
    {
      cout << "This car is already rented" << endl;
    }
    break;
  case 2:
    if (!car2.get_rented())
    {
      car2.set_rented(true);

      cout << "You have successfully rented the car" << endl;
      displayCar(car2);
    }
    else
    {
      cout << "This car is already rented" << endl;
    }
    break;
  case 3:
    if (!car3.get_rented())
    {
      car3.set_rented(true);
      cout << "You have successfully rented the car" << endl;
      displayCar(car3);
    }
    else
    {
      cout << "This car is already rented" << endl;
    }
    break;
  default:
    cout << "Invalid input" << endl;
    break;
  }
}
