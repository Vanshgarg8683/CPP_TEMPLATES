#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

// Used in case of single value
typedef tree<
    int,                        // key type
    null_type,                  // mapped-policy (use null_type for set)
    less<int>,                  // comparator
    rb_tree_tag,                // tree type
    tree_order_statistics_node_update
> ordered_set;

// Multiset Trick bcz array can contain duplicate values so, to handle all values we use pair
typedef tree<
    pair<int,int>,
    null_type,
    less<pair<int,int>>,
    rb_tree_tag,
    tree_order_statistics_node_update
> ordered_set;
