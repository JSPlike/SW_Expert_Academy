#include<iostream>
#include<vector>
#include<string>
using namespace std;

string s;
vector<int> arr;
vector<char> chrr;
int tentotwo(vector<int> a){
  int size = arr.size();
  for(int i=0;i<size;i+=4){
    int result = 0;
    char temp_str = {};
    for(int j = i;j<i+4;j++){
      int num = arr[j];
      for(int k=1; num>0;k*=10){
        int bi = num % 2;
        result = bi*i;
        num /= 2; 
      }
      temp_str += (char)result;
    }
    cout << temp_str << '\n';
    chrr.push_back(temp_str);
  }
}
int twototen(vector<int> a){

}
int decoding(string str){
  int len = str.length();
  for(int i=0;i<len;i++){
    if(s[i] >= 97 && s[i] <= 122) arr.push_back((int)s[i] - 51);
    else if(s[i] >= 65 && s[i] <= 90) arr.push_back((int)s[i] - 65);
    else if(s[i] >= 48 && s[i] <= 57) arr.push_back((int)s[i] + 4);
    else {
      if(s[i] == '+') arr.push_back(62);
      else arr.push_back(63);
    }
  }
}
int main() {
  int T; cin >> T;
  for(int test_case=1;test_case<=T;test_case++){
    cin >> s;
    decoding(s);
    tentotwo(arr);
  }
}