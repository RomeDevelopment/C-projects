#include <iostream>
#include <iomanip>
#include <math.h>


using namespace std;

int main() {
  int numbers[11]= {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
  int index = 0;
  int input = 0;
  int counter=0;
  cout << "This is a program to find out whether your number which is less than 1000 is prime or not. \nPlease input your number now."<< endl;
  cin>> input;

  while (index<= 11){
  if (input%numbers[index]==0 && numbers[index]!= input){
    cout<<"Your number is not prime, it is divisible by: "<< numbers[index]<<endl;
    counter++;
  }
  if(!counter && index==11){
    cout<<"This number is in fact prime, if it is less than 1000"<< endl;
    
  }
   index= index+1;
  }
return(0);
  
  }
