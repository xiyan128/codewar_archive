int maxMultiple(int divisor, int bound) 
{
  int i = bound;
  for (; i % divisor != 0; i--);
  return i;
}