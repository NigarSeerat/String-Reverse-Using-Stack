/*
  Coded by 
      Seerat Yaseen Bhat
      Aerospace Engineer
	  24 Sep, 2020
*/

#include<iostream>
#include<string>
#include<stack>
using namespace std;

string str; //declearing globally string variable str

/*Function for Reversing strong*/
void reverse ( int len) {
	stack <char> s;  //creating stack variable s
	
	/*adding elemnts to stack*/
	for(int i=0; i<len; i++) {
		s.push(str[i]);
	} 
	
	/*adding elements back to string 
	str(overriding it) but in reverse
	 order
	*/
	for (int i=0; i<len; i++) {
		str[i] = s.top();s.pop();
	}
}

int main (void ) {
    getline(cin,str);    //Taking Input string
	int len = str.size(); //getting the size of input string
	reverse(len );   //calling the reverse function to reverse the string
	cout<<str;     //Printing the reversed string
}
