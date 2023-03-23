#include <iostream>
#include <iomanip>>
using namespace std;

int main() {
float marks[] = {78.4, 90.6, 45.9,72.2,54.4};
char names[][20]={"Ajith","Wimal","Kanthi", "Suranji", "Kushmitha"};
  
cout <<setw(5)<< "No" <<setw(15)<< "Name"<<setw(10)<< "Marks" << endl;

for (int r = 0; r < 5; r++) {
cout <<setw(5)<<setiosflags(ios::fixed)<<r+1<<setw(15)<<setiosflags(ios::fixed)
<< names[r]<<
setw(10)<<setiosflags(ios::fixed)<<setprecision(2)
<< marks[r] << endl;
}

}



#include <iostream>
using namespace std;
void print(int len, int wth);
void input(int len, int wth);
// Do not change the main() function
int main() {
 int length = 10, width = 5;
 input(length, width);
 print(length, width);
 return 0;
}
// Do not change the print() function
void print(int len, int wth) {
 cout << "Length : " << len
 << ", Width : " << wth << endl;
}
// Implement the Input Function here
void input(int &len, int &wth){
cout <<"Enter length :";
  cin>>len;

 cout <<"Enter width :";
  cin>>wth;

}
