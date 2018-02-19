#include <iostream>
using namespace std;

int main( )
{
   //create some data
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';
   ofstream myOutFile{abc.txt};
   
   if (myOutFile)
   myOutFile <<a<<" "<<b<<" "<<c;//display data to console (i.e. as formatted chars)
else
   cout<<"Error opening abc.txt"<<endl;
   
   myOutFile.close();
 
   return 0;
}
