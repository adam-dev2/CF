#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    string inputString;
    int cnt = 0;
    cin>>inputString;
    unordered_map<char,int> mp;
    for(int i=0;i<inputString.length();i++) {
        mp[inputString[i]]++;
    }
    if(mp.size()%2 != 0) {
        cout<<"IGNORE HIM!";
        return 0;
    }

    cout<<"CHAT WITH HER!";
    return 0;

}