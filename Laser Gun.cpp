#include <iostream>
using namespace std;

int energy = 100;
int damage = 10;

void show() {
  cout << "   ________________" << endl;
  cout << "  //]]]]++_|====" << endl;
  cout << " ///_)    ||" << endl;
  cout << "///       ||" << endl;

  cout << "\nEnergy: " << energy << endl;
}

void shoot(string shoot) {
  if(energy > 0) {
    energy -= 10;
    cout << "\nConsuming Energy..." << endl;
    cout << "blasting..." << endl;
  }

  if(energy == 0) {
    cout << "\nUnable to shoot" << endl;
  }
}

void reload() {
  for(int num=1; num<100; num++){
    energy += 1;
    if(energy > 100) {
      energy = 100;
    }
  }
  cout << "\nRealoading..." << endl;
}

int main() {
  while(true){
    string move;
    show();
    cout << "" << endl;
    cout << "";
    cin >> move;

    if(move == "shoot") {
      shoot(move);
    }

    if(move == "reload") {
      reload();
    }
  }

  return 0;
}
