#include <iostream>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <algorithm>
#include <vector>
#include <string>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <climits>
#include <unordered_map>
#include <unordered_set>
#include "Generate.cpp"
// #include <ext/pb_ds/priority_queue.hpp>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// #include <bits/extc++.h>
// #include <bits/stdc++.h>
#define Buff std::ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define ll long long
#define inf LONG_LONG_MAX
#define Inf INT_MAX
#define endl "\n"
#define Endl "\n"
#define String string
// #define Debug

using namespace std;
// using namespace __gnu_pbds;

const int Maxn = 1e7 + 10;
const ll Mod = 1e9 + 7;
const String DATA_GENERATE = "ExampleDataGenerate.exe";
const String ANSWER = "ExampleAnswer.exe";


int t;
int cnt = 0;

String intToString(int temp)
{
    String nowString = "";
    while (temp)
    {
        char nowChar = temp % 10 + '0';
        nowString = nowChar + nowString;
        temp = temp / 10;
    }
    return nowString;
}

signed main()
{
    Buff;
    cin >> t;
    while (t--)
    {
        String temp1 = DATA_GENERATE + " > " + intToString(++cnt) + ".in";
        String temp2 = ANSWER + " > " + intToString(cnt) + ".out" + " < " + intToString(cnt) + ".in";
        system(temp1.c_str());
        system(temp2.c_str());
    }
    return 0;
}