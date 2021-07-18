#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string stringsort(string s){
    vector<string>v; 
    string tmp;
    s += ',';
    for (int i = 0; i < s.size(); ++i){
        if (s[i] == ','){
            v.push_back(tmp);p
        }
        tmp.push_back(s[i]);
    }
    sort(v.begin(), v.end());
    string end;
    for (int i = 0; i<v.size();i++){
        end += v[i] + ",";
    }
    end.pop_back();
    return end;
}

int main() {
    string s = "hello,my,name,is,code,learn";
    cout << stringsort(s);
    return 0;
}