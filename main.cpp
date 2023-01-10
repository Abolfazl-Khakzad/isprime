#include <iostream>

using namespace std;
int main()
{
    long int number;
    int result=0;
  cout<<"enter a number"<<endl;
  cin>>number;

      for(int i = 2 ; i<=(number/2) ; i++){

          if(number%i==0)
               ++result;

          }

          if(result>0)
          cout<<"is not prime";
          else
          cout<<"it's prime";

}
