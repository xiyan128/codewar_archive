std::string no_space(std::string x)
{
    x.erase(remove_if(x.begin(), x.end(), isspace), x.end());
    return x;
}