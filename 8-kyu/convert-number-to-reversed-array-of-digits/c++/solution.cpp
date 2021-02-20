std::vector<int> digitize(unsigned long n) 
{        
  std::vector<int> r;
  while (n>0) r.push_back(n%10), n/=10;
  return r;
}