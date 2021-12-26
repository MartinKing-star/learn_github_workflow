#include <bits/stdc++.h>
using namespace std;

struct Bio{
  int age;
  string name;
  Bio(int age,string name){
    this->age=age;
    this->name=name;
  }
  void update(string new_name,int new_age){
    this->age=new_age;
    this->name=new_name;
  }
  void show(){
    cout << "Hello " << this->name << " your age " << this->age << endl;
  }
};

int main(){
 Bio* b1=new Bio(22,"Master");
  b1->show();
  b->update("ron",b1->age);
  b1->show();
}
