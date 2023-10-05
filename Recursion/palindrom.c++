#include<iostream>
using namespace std;

bool checkPalindrom(string str,int i,int j)
{
    //base case
    if(i>j)
        return true;

    if(str[i] != str[j])
        return false;
    
    else {
        //Recursie call
        return checkPalindrom(str,i+1,j-1);
    } 

}
 
int main()
{
    string name = "xbcwcb";
    //cout<<endl;
    bool ispalindrome = checkPalindrom(name,0,name.length()-1);
    if(ispalindrome){
        cout<<"This is palindrome."<<endl;
    }
    else{
        cout<<"This is not a palindrome."<<endl;
    }
    return 0;
}