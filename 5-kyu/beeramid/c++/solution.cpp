// Returns number of complete beeramid levels
int beeramid(int bonus, double price)
{
  int num = bonus/price, level = 1;
  if (!num) return 0;
  while (num>level*level) {
    std::cout << num << std::endl;
    num -= level*level;
    level++;
    if (num<level*level) level--;
  }
  return level;
}