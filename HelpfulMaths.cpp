#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string input;
    cin>>input;
    string temp = input;
    string ans;
    for(int i=0;i<input.length();i++) {
        if(input[i] != '+') {
            temp+=input[i];
        }
    }
    sort(temp.begin(),temp.end());
    for(int i=0;i<temp.length();i++) {
        ans+=temp[i];
        if(temp[i] != temp.length() - 1) {
            ans+='+';
        }
    }
    cout<<ans;
}
