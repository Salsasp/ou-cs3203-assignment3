#include <iostream>
#include <vector>

using namespace std;

int vectorSum(vector<int> nums)
{
    int sum = 0;
    for(int num : nums)
    {
        sum += num;
    }
    return sum;
}

int main()
{
    vector<int> myList = {1,2,3,4,5};
    cout << vectorSum(myList);
}
