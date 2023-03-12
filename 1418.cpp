#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int>v;
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        v.push_back(i);
    }

    for (int i = 0; i < v.size(); i++) {
        std::cin >> v[i];
    }

    sort(v.begin(), v.end());
    int x = 1;
    for (int i = 0; i < n - 1; i++)
        if (v[i] != v[i + 1]) x++;
    std::cout << x;

    return 0;
}
