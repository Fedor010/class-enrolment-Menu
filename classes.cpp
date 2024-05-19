
#include <iostream>

using namespace std;
 
int main () {
   
   char option;
   char option2;
   char option3;
 
cout << "Select a department: (1)Computer Science (2)Math (3)Science" << endl;

   cin >> option;

   double t1 = 0;  //# of toppings
double t2 = 0;
double t3 = 0;

bool cs = false; //computer science
bool mt = false; // math
bool si = false; //science

bool cs1 = false; //computer science 1st class
bool cs2 = false; //computer science 2nd class
bool cs3 = false; //computer science 3d class

bool mt1 = false; //math 1st class
bool mt2 = false; //math 2nd class
bool mt3 = false; //math 3d class

bool si1 = false; //science 1st class
bool si2 = false; //science 2nd class


bool cs11 = false; //computer science 1st class sec1
bool cs12 = false; //computer science 1st class sec2
bool cs21 = false; //computer science 2nd class sec1
bool cs22 = false; //computer science 2nd class sec2
bool cs31 = false; //computer science 3d class sec1
bool cs32 = false; //computer science 3d class sec2

bool mt11 = false; //math 1st class sec1
bool mt12 = false; //math 1st class sec2
bool mt21 = false; //math 2nd class sec1
bool mt22 = false; //math 2nd class sec2
bool mt31 = false; //math 3d class sec1
bool mt32 = false; //math 3d class sec2

bool si11 = false; //computerscience 1st class sec1
bool si12 = false; //computer science 1st class sec2
bool si21 = false; //computer science 2nd class sec1
bool si22 = false; //computer science 2nd class sec2




   switch(option) {
      case '1' :
         cout << "Select a class: (1)Starting Computing (2)Data Structures (3)Algorithms" << endl; 
        cin >> option2;
        cs = true;
         break;

     case '2' :
         cout << "Select a class: (1)Calculus 1 (2)Calculus 2 (3)Linear Algebra" << endl; 
         cin >> option2;
         mt = true;
         break;

          case '3' :
         cout << "Select a class: (1) General Chemistry 1 (2) Physics 1" << endl; 
          cin >> option2;
          si = true;
         break;
          
      }


if (cs == true) {
   // cout << "Select a class: (1)Starting Computing (2)Data Structures (3)Algorithms" << endl;
      switch(option2) {
     case '1' :
         cout << "Select a section: (1)Section 100 (2)Section 200" << endl; 
         cin >> option3;
         cs1 = true;
         break;
     case '2' :
         cout << "Select a section: (1)Section 101 (2)Section 201" << endl; 
           cin >> option3;
         cs2 = true;
         break;
          case '3' :
         cout << "Select a section: (1)Section 102 (2)Section 202" << endl; 
           cin >> option3;
         cs3 = true;
         break;
      }


      if (cs1 == true) {
   // cout << "Select a section: (1)Section 100 (2)Section 200" << endl;
      switch(option3) {
     case '1' :
         cs11 = true;
         cout << "You've been enrolled in Section 100 of Starting Computing!" << endl;
         break;
     case '2' :
        cs12 = true; 
         cout << "You've been enrolled in Section 200 of Starting Computing!" << endl;
         break;  
      }
}
if (cs2 == true) {
   // cout << "Select a section: (1)Section 101 (2)Section 201" << endl;
      switch(option3) {
     case '1' :
         cs11 = true;
         cout << "You've been enrolled in Section 101 of Data Structures!" << endl;
         break;
     case '2' :
        cs12 = true; 
         cout << "You've been enrolled in Section 201 of Data Structures!" << endl;
         break;  
      }
}
if (cs3 == true) {
   // cout << "Select a section: (1)Section 102 (2)Section 202" << endl;
      switch(option3) {
     case '1' :
         cs11 = true;
         cout << "You've been enrolled in Section 102 of Data Algorithms!" << endl;
         break;
     case '2' :
        cs12 = true; 
         cout << "You've been enrolled in Section 202 of Algorithms!" << endl;
         break;  
      }
}

}

 if (mt == true) {
    //cout << "Select a class: (1)Calculus 1 (2)Calculus 2 (3)Linear Algebra" << endl;
      switch(option2) {
     case '1' :
         cout << "Select a section: (1)Section 400 (2)Section 500" << endl; 
           cin >> option3;
         mt1 = true;
         break;
     case '2' :
         cout << "Select a section: (1)Section 401 (2)Section 501" << endl; 
           cin >> option3;
         mt2 = true;
         break;
          case '3' :
         cout << "Select a section: (1)Section 402 (2)Section 502" << endl; 
           cin >> option3;
         mt3 = true;
         break;
      }

 if (mt1 == true) {
   // cout << "Select a section: (1)Section 400 (2)Section 500" << endl;
      switch(option3) {
     case '1' :
         cs11 = true;
         cout << "You've been enrolled in Section 400 of Calculus 1!" << endl;
         break;
     case '2' :
        cs12 = true; 
         cout << "You've been enrolled in Section 500 of Calculus 1!" << endl;
         break;  
      }
}
if (mt2 == true) {
   // cout << "Select a section: (1)Section 401 (2)Section 501" << endl;
      switch(option3) {
     case '1' :
         cs11 = true;
         cout << "You've been enrolled in Section 401 of Calculus 2!" << endl;
         break;
     case '2' :
        cs12 = true; 
         cout << "You've been enrolled in Section 501 of Calculus 2!" << endl;
         break;  
      }
}
if (mt3 == true) {
   // cout << "Select a section: (1)Section 402 (2)Section 502" << endl;
      switch(option3) {
     case '1' :
         cs11 = true;
         cout << "You've been enrolled in Section 402 of Linear Algebra!" << endl;
         break;
     case '2' :
        cs12 = true; 
         cout << "You've been enrolled in Section 502 of Linear Algebra!" << endl;
         break;  
      }
}

}


if (si == true) {
  //  cout << "Select a class: (1)General Chemestry 1 (2)Physics 1" << endl;
      switch(option2) {
     case '1' :
         cout << "Select a section: (1)Section 700 (2)Section 800" << endl;
           cin >> option3;
         si1 = true;
         break;
     case '2' :
         cout << "Select a section: (1)Section 701 (2)Section 801" << endl; 
           cin >> option3;
         si2 = true;
         break;
      }

if (si1 == true) {
   // cout << "Select a section: (1)Section 400 (2)Section 500" << endl;
      switch(option3) {
     case '1' :
         cs11 = true;
         cout << "You've been enrolled in Section 700 of General Chemestry 1!" << endl;
         break;
     case '2' :
        cs12 = true; 
         cout << "You've been enrolled in Section 800 of General Chemestry 1!" << endl;
         break;  
      }
}
if (si2 == true) {
   // cout << "Select a section: (1)Section 401 (2)Section 501" << endl;
      switch(option3) {
     case '1' :
         cs11 = true;
         cout << "You've been enrolled in Section 701 of Physics 1!" << endl;
         break;
     case '2' :
        cs12 = true; 
         cout << "You've been enrolled in Section 801 of Physics 1!" << endl;
         break;  
      }
}


}


 
   return 0;
}