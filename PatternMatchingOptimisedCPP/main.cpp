#include <bits/stdc++.h>

using namespace std;


bool isMatch(string str, int n, string pattern, int m, unordered_map<string,bool> lookup) {

    //Create a lookup table


    string key = n+"|"+ m;

    if (lookup.find(key)!= lookup.end()){
        return lookup[key];
    }







    if(pattern.length() == 0){
        return true;
    }


    if(m== pattern.length()){
        lookup[key] =  (n == str.length());
        return n == str.length();
    }


    if(n== str.length()){

        for(int i=m;i<pattern.length();i++){
            if(pattern[i]!='*'){
                lookup[key] = false;
                return false;
            }
        }

        lookup[key] = true;
        return true;

    }

    if(pattern[m]=='?' || pattern[m] == str[n]){

        return isMatch(str,n+1, pattern, m+1,lookup);
    }

    if(pattern[m] == '*'){

        return isMatch(str,n+1,pattern,m,lookup) || isMatch(str,n,pattern,m+1, lookup);
    }

    return false;
}


 bool isMatch(string str, string pattern) {


        unordered_map<string, bool> lookup;

        return isMatch(str,0,pattern,0, lookup);

    }




int main() {
    std::cout << "Hello, World!" << std::endl;
    cout << isMatch("XYXZZXY", "X***Y");    // true
    cout <<isMatch("XYXZZXY", "X*ZZ??");   // true
    cout <<isMatch("XYXZZXY", "*X*X?");    // true
    cout <<isMatch("XYXZZXY", "X***X");    // false
    cout <<isMatch("XYXZZXY", "*");    // true
    cout <<isMatch("", "X"); //false

    return 0;
}


