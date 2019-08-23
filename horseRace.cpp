
#include<iostream>
#include<cstdlib>
#include<string>

//using namespace std;

int placement(int position, char horseNumber) {
  position = position + rand() % 2; //generate a random number between 0 and 1
  int j;
  //this for loop takes care of printing horse positions
  for(j=0; j<=position; j++)
  std::cout << ".";
  std::cout << "" << horseNumber << "";
  std::cout << std::endl << std::endl;
  return position;
} //end placement

int main() {
  std::cout << "Welcome to the racetrack!" << std::endl << std::endl;
  //printing tracks for user clarity
  std::cout << "1.............." << std::endl << std::endl;
  std::cout << "2.............." << std::endl << std::endl;
  std::cout << "3.............." << std::endl << std::endl;
  std::cout << "4.............." << std::endl << std::endl;
  std::cout << "\nPress enter to continue: " << std::endl;
  //to run the race by keep pressing ENTER
  std::cin.ignore(); 

  //these variables holds the individual horse position
  int pos1 = 0, pos2 = 0, pos3 = 0, pos4 = 0, horseNumber;
  char horseName;
  srand(time(NULL)); //ensures that our program will generate a new random number 
  int i;
  for(i=0; i<=17; i++) {
    //this block of code tracks the horse number and its position 
    std::cout << " " << std::endl;
    horseNumber = '1';
    pos1 = placement(pos1, horseNumber);
    horseNumber = '2';
    pos2 = placement(pos2, horseNumber);
    horseNumber = '3';
    pos3 = placement(pos3, horseNumber);
    horseNumber = '4';
    pos4 = placement(pos4, horseNumber);
    
    std::cout << "\nPress enter to continue: " << std::endl; 
    std::cin.ignore();
  }

  int fastest = 0;
  //this array holds down the final position of each horse
  int winner[] = {pos1, pos2, pos3, pos4};
  
  int a;
  //this for loop decides the winner
  for(a=0; a<=3; a++) {
    if(winner[a]>winner[fastest])
    fastest=a;
  }
    //this switch statement helps in printing the
    //winner horse number to the screen 
    switch(fastest) {
    case 0:
    horseName='1';
    break;
    case 1:
    horseName='2';
    break;
    case 2:
    horseName='3';
    break;
    case 3:
    horseName='4';
    break;
  }

    std::cout << "Horse " << horseName << " wins!" << std::endl;
    return 0;
} //end main
 
 
