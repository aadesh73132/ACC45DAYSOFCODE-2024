/*
Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.
Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
For example, 2 is written as II in Roman numeral, just two ones added together. 12 is written as XII, which is
simply X + II. The number 27 is written as XXVII,which is XX + V + II.Roman numerals are usually written largest
to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as
IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine,
which is written as IX. There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9. 
X can be placed before L (50) and C (100) to make 40 and 90. 
C can be placed before D (500) and M (1000) to make 400 and 900.
Given a roman numeral, convert it to an integer.
*/


#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

int romanToInt(string s) {
        int ans=0;
        unordered_map<char,int> m;
        m['I']=1;
        m['V']=5;
        m['X']=10;
        m['L']=50;
        m['C']=100;
        m['D']=500;
        m['M']=1000;

        for(int i=0;i<s.length();i++){
        if(m[s[i]] < m[s[i+1]]){
            ans = ans-m[s[i]];
        }
        else{
            ans = ans+m[s[i]];
        }
        }
        return ans;
    }

int main(){
//string s = "LVIII";
string s;
cin>>s;
int res = romanToInt(s);
cout<<"the number after conversion from roman to number is: "<<res<<endl;

return 0;
}