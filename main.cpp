#include <iostream>
using namespace std;
class ABC{
public:
ABC();//the constructor
~ABC();//destructor
};
ABC::ABC(){
  cout<<"constructor"<<endl;
}
ABC::~ABC(){
  cout<<"destructor"<<endl;
}
int main() {
  ABC x;
  cout<<"terminating main"<<endl;
}