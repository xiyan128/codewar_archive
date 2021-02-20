#include <string>

std::string sum_strings(const std::string& a, const std::string& b) {
  int carry=0;
  int la=a.length()-1;
  int lb=b.length()-1;
  std::string res="";
  while(la>=0 || lb>=0){
    int ra=la>=0 ? a[la--]-'0' : 0;
    int rb=lb>=0 ? b[lb--]-'0' : 0;
    int tmp=ra+rb+carry;
    carry=tmp/10;//进位
    res=std::to_string(long(tmp%10))+res;
  }
  if(carry){
    res=std::to_string(long(carry))+res;
  }
  return res;
}