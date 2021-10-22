#include <bits/stdc++.h>

using namespace std;

class Generate
{
public:
    Generate()
    {
        srand(time(0));
    }
    long long nextInt(long long l, long long r)
    {
        return rand() * 123456789LL % (r - l + 1) + l;
    }
    double nextDouble(long long l, long long r)
    {
        long long L = l * 1e9;
        long long R = r * 1e9;
        double temp = nextInt(L, R);
        return temp / 1e9;
    }
    char nextChar(int l, int r)
    {
        return rand() % (r - l + 1) + l;
    }
};