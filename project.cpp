#include <iostream>
#include <string>
#include "car.h"
using namespace std;


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
   cout << "rent after charges: " <<  extraCharges(car1) << endl;
  // Using the inline function
  int result = add(6, 3); 
    std::cout << "Result: " << result << std::endl;
}
