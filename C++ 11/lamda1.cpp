#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
vector<int> v(10);
cout << "Vector v : ";
for_each(v.begin(), v.end(), [](int v) {
cout << setw(2) << setfill('0') << v << " ";  });
cout << endl;
v.assign(a, a + sizeof(a) / sizeof(int));
cout << "Vector after assigning" << endl;
cout << "Vector v : ";
for_each(v.begin(), v.end(), [](int v) {
cout << setw(2) << setfill('0') << v << " ";  });
cout << endl;
}
