#include <iostream>

int main() {
    
  int year = 0;
  std::cout << "Enter year: ";
  std::cin >> year;
  
  if (year>=1000 && year<=9999)
  {
    if (year%4==0 && year%100!=0 || year%400==0){
      std::cout<<"its a leap year\n";
    }
    else
    {
       std::cout<<"its not a leap year\n";
    }
  }
    
  else{
    std::cout<<"year is not four digit\n";
  }
  
}
