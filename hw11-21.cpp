  //Lab11-5.cpp
  //Stores averages in a one-dimensional array
  //Created/revised by <your name> on <current date>
 
  #include <iostream>
  using namespace std;
 
  int main()
  { 
    //declare arrays
    double midterms[5] = {0.0};
    double finals[5] = {0.0};
	  double averages[5] = {0.0};
 
    //get exam score 00016   
	  for (int x = 0; x < 5; x += 1)
     {
         cout << "Midterm exam score for student " 
             << x + 1 << ": ";
         cin >> midterms[x];
         cout << "Final exam score for student "
              << x + 1 << ": ";
         cin >> finals[x];
         cout << endl;
         //calculate and assign average
         averages[x] = (midterms[x] + finals[x]) / 2;
     }  //end for
     //display contents of array
     cout << endl;
     for (int y = 0; y < 5; y += 1)
         cout << "Student " << y + 1 << " average: " 
             << averages[y] << endl;
     //end for
     return 0;
  }  //end of main function
