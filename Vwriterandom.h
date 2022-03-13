#ifndef REWRITTEN_RANDOM_H_INCLUDED
#define REWRITTEN_RANDOM_H_INCLUDED

#include <cassert>
#include <chrono>
#include <random>

using namespace std;

mt19937 rd(chrono::steady_clock::now().time_since_epoch().count());

long long random(long long l, long long h) {
    assert(l <= h);
    return l + rd() * 1LL * rd() % (h - l + 1);
}

#endif
