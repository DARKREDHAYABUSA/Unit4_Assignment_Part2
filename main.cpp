#include <iostream>
#include <string>
using namespace std;
int main() 

{
    //part 2 hints
   //Be sure that Part 1 is in its own .cpp or Repl.it project, and be sure to include your planning file. 
   /*
    1. Ask user for the stopping point value "stop"
    2. Loop from 1...stop  (my how I love for loops for this)
    3. Look at for loop code we wrote within last 2 weeks
    4. Append the appropriate suffix 
    5. Think controlling output
       IF conditions and for loops working together
       If a number (i) ends in 3, generally append rd to the number
       33rd, 103rd, 
       What does that mean in code? 
       //Ask the user for validated input of n (int)
       //let i be the index for loop counter
       */
       int stop = 0;

      //Ask user for the stopping point value "stop"
       cout << "\nPlease enter a stopping point: ";
       cin >> stop;

       for(int i = 1; i <= stop; i++)
       {
         //I expect your code of how to handle 1-19
          if( (i % 10) == 1) //this number ends in 1
          {
            cout << i << "st" << endl;
          }
          if( (i % 10) == 2) //this number ends in 1
          {
            cout << i << "nd" << endl;
          }

          if( (i % 10) == 3) //this number ends in 3
          {
            cout << i << "rd" << endl; 
          }
          else if ( i % 10 == 4 || i % 10 == 5 || i % 10 == 6 || i % 10 == 7 || i % 10 == 8 || i % 10 == 9 || i % 10 == 0 || i % 10 == 11 || i % 10 == 12 || i % 10 == 13 || i % 10 == 14 || i % 10 == 15 ||  i % 10 == 16 ||i % 10 == 17 || i % 10 == 18 || i % 10 == 19) //this number ends in 4 - 19
          {
            cout << i << "th" << endl; 
          }
       } 
 return 0;
 }
