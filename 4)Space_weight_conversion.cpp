#include <iostream>

int main() {
  
  int Planet_No;
  double earth_weight,outside_weight;
  std::cout<<"enter the earth weight\n";
  std::cin>>earth_weight;  
  std::cout<<"choose The planet you want to fight for\n 1) Mercury\n 2) Venus\n 3) Mars\n 4) Jupiter\n 5) Saturn\n 6) Uranus\n 7) Neptune\nYour Option:";
  std::cin>>Planet_No;

  switch(Planet_No){
    case 1:
      outside_weight=earth_weight*0.38;
      break;
    case 2:
      outside_weight=earth_weight*0.91;
      break;
    case 3:
      outside_weight=earth_weight*0.38;
      break;
    case 4:
      outside_weight=earth_weight*2.34;
      break;
    case 5:
      outside_weight=earth_weight*1.06;
      break;
    case 6:
      outside_weight=earth_weight*0.92;
      break;
    case 7:
      outside_weight=earth_weight*1.19;
      break;
    default:
      std::cout<<"invalid option\n";
  }

std::cout<<"weight on the destination planet is:"<<outside_weight<<"\n";
  
}
