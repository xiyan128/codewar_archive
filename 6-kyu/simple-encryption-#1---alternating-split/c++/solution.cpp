std::string encrypt(std::string text, int n)
{
    if (n <= 0) return text;
    else {
      std::string s1, s2;
      auto it = text.begin();
      bool flag = true;
      while (it != text.end()) {
        if (flag) s1 += *it;
        else s2 += *it;
        flag = !flag;
        it++;
      }
      return encrypt(s2+s1, n-1);
    }
}

std::string decrypt(std::string encryptedText, int n)
{
    auto s = encryptedText.size();
    if (n <= 0 || !s) return encryptedText;
    else {
      std::string s1 = encryptedText.substr(0, s/2), s2 = encryptedText.substr(s/2, s-1), result;
      auto it1 = s1.begin();
      auto it2 = s2.begin();
      bool flag = true;
      while (it2 != s2.end()) {
        if (flag) result += *it2++;
        else result +=  *it1++;
        flag = !flag; 
      }
      if (s % 2 == 0) result += *it1;
      return decrypt(result, n-1);
    }
}