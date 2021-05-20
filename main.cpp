#include <iostream>
#include <set>
#include <iterator>
#include <vector>
#include <string>
using namespace std;

template <typename Iter>
void w( Iter begin, Iter end)
{
    set<int> mySet;
	copy(begin, end, back_inserter(mySet));
    

}

int main() {

	return 0;
}