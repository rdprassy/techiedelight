#include <iostream>
using namespace std;

bool a = true;

bool isMatch(string str, int n, string pattern, int m) {

    if(pattern.length() == 0){
        return true;
    }


    if(m== pattern.length()){
        return n == str.length();
    }


    if(n== str.length()){

        for(int i=m;i<pattern.length();i++){
            if(pattern[i]!='*'){
                return false;
            }
        }

        return true;

    }

    if(pattern[m]=='?' || pattern[m] == str[n]){

        return isMatch(str,n+1, pattern, m+1);
    }

    if(pattern[m] == '*'){

        return isMatch(str,n+1,pattern,m) || isMatch(str,n,pattern,m+1);
    }

    return false;
}

 bool isMatch(string str, string pattern) {

        return isMatch(str,0,pattern,0);

    }

int main() {
    std::cout << "Hello, World!" << std::endl;
    cout << (isMatch("XYXZZXY", "X***Y"));    // true
    cout << (isMatch("XYXZZXY", "X*ZZ??"));   // true
    cout << (isMatch("XYXZZXY", "*X*X?"));    // true
    cout << (isMatch("XYXZZXY", "X***X"));    // false
    cout <<(isMatch("XYXZZXY", "*"));    // true
    cout << a << endl;
    return 0;
}



