/*
  Coded by 
      Seerat Yaseen Bhat
      Aerospace Engineer
	  24 Sep, 2020
*/

#include<iostream>
#include<string>
using namespace std;
int main (void ) {
	string str;
    getline(cin,str);    //Taking Input string
//	int len = str.size(); //getting the size of input string
	for(int i=str.size(); i>0; i--) { 
	cout<<str[i];     //Printing the reversed string
    }
}
