
#include <cctype>
#include <cmath>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include "console.h"
#include "filelib.h"
#include "grid.h"
#include "gwindow.h"
#include "simpio.h"
using namespace std;

void RecPermute(string &soFar, string &rest);
void IsPalindrome(string &s);

int main() {
    string soFar = "";
    string rest = "ABCD";
    //RecPermute(soFar, rest);

    string s = "was it a car or a cat i saw";
    IsPalindrome(s);
    return 0;
}

void RecPermute(string &soFar, string &rest){

    if (rest == ""){

        cout << soFar << endl;
    } else{

        for (int i = 0; i < rest.length(); i++){

            string NextOfRest = soFar + rest[i];
            string RemainingRest = rest.substr(0,i) + rest.substr(i+1);
            RecPermute(NextOfRest, RemainingRest);
        }
    }


}

void IsPalindrome(string &s){

    if (s.length() <= 1){

        return true;
    }

    return s[0] == s[s.length()-1] && IsPalindrome(s.substr(1,s.length()-2));

}
