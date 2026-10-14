
#include <iostream>
using namespace std;

long long C(int n, int k, int level, int& maxDepth)
{
    if (level > maxDepth)
        maxDepth = level;

    if (k == 0 || k == n)
        return 1;

    return C(n - 1, k - 1, level + 1, maxDepth)
        + C(n - 1, k, level + 1, maxDepth);
}

int main()
{
    int n, k;
    int maxDepth = 0;

    cout << "n = ";
    cin >> n;
    cout << "k = ";
    cin >> k;

    if (n < 0 || k < 0 || k > n)
    {
        cout << "Incorrect input!" << endl;
        return 1;
    }

    long long result = C(n, k, 1, maxDepth);

    cout << "C = " << result << endl;
    cout << "Recursion depth = " << maxDepth << endl;

    return 0;
}
