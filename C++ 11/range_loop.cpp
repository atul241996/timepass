#include<iostream>
#include<map>
#include<vector>

using namespace std;
int main()
{
std::map<std::string, std::vector<int>> map;
std::vector<int> v;
v.push_back(1);
v.push_back(2);
v.push_back(3);
map["one"] = v;
v.clear();
v.push_back(2);
v.push_back(4);
v.push_back(6);
v.push_back(8);
v.push_back(9);
v.push_back(10);
map["two"] = v;

for(const auto &kvp : map) 
{
std::cout<<kvp.first<<std::endl;
for(auto v : kvp.second)
{
std::cout<<v<< std::endl;
}
}
}
