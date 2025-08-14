/**
 * cs010C_sum24A
 * lab4
 * main-hard-code.cpp
 * RR
 */

#include "BST.H"
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(/*int argc, char* argv[]*/) {
  
  BST t;
  t.insert(4);
  t.insert(2);
  t.insert(6);
  t.insert(1);
  t.insert(3);
  t.insert(5);
  t.insert(7);
  
  /*
  BST t;
  t.insert(45);
  t.insert(25);
  t.insert(65);
  t.insert(15);
  t.insert(35);
  t.insert(55);
  t.insert(75);
  */
  

  //t.print();
  //t.set_preorder();
  //t.write_to_file();
  
  t.display();     // display in console at 90 degree clockwise rotation
  cout << "preorder: " << endl;
  t.preorder();
  
  cout << "inorder:\n";
  t.inorder();     // print inorder traveresal
  
  cout << "postorder:\n";
  t.postorder();   // print postorder traveresal
  
  // You can set values here
  // do_sth();
  int mode = 1; // 1:depth, 2:preorder, 3:inorder, 4:postorder
  t.write_to_file(mode);  // Or set values inside this function
  
  cout << "Good bye!" << endl;
  return 0;
}
