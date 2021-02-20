static long findMissing(std::vector<long> list){
  int sum = (list[0] + *(list.end()-1))*(list.size()+1)/2;
  int m_sum = 0;
  for (int i: list) m_sum += i;
  return sum-m_sum;
}