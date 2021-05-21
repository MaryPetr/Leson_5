#include <iostream>
#include <set>
#include <iterator>
#include <vector>
#include <string>
using namespace std;

template <typename Iter>
void print( Iter begin, Iter end)
{
    set<int> mySet;
	copy(begin, end, inserter(maset, maSet.end()));
	copy(mySet.begin(), maSet.end(), ostream_iterator<string>(cout, ", "));
	cout << endl;

}

int main() {
	istream_iterator<string>beg_iter{ cin };
	istream_iterator<string>end_iter;
	print(beg_iter, end_iter);

	vector<string> w{ "gdf","rgfhghghfg","gsdgsdghdshhd" };
	print(w.begin(), w.end());

	string w2 [3]{ "gdf","rgfhghghfg","gsdgsdghdshhd" };
	print(begin(w2), end(w2));
	return 0;
}
