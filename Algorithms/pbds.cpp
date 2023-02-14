#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define pbds tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>


// // finding kth element - 4th query
// 	*pbds.find_by_order(0);  //pbds.find_by_order(0) returns iterator of index 0 in pbds
// 	*A.find_by_order(1)

// //find index of 6 ,ie pbds= 1,3,4,5,6,7,9
// pbds.order_of_key(6) // op : 4  (also can say 4 elements are smaller than 6)
// pbds.order_of_key(8) // op : 6 (index of 8 if we are about to insert / num of element smaller than 8)
  
	// lower bound -> Lower Bound of X = first element >= X in the set
	cout << "Lower Bound of 6: " << *A.lower_bound(6) << endl;
	cout << "Lower Bound of 2: " << *A.lower_bound(2) << endl;
	cout << endl;

	// Upper bound -> Upper Bound of X = first element > X in the set
	cout << "Upper Bound of 6: " << *A.upper_bound(6) << endl;
	cout << "Upper Bound of 1: " << *A.upper_bound(1) << endl;
	cout << endl;

	// // Remove elements - 2nd query
	A.erase(1);
	A.erase(11); // element that is not present is not affected
