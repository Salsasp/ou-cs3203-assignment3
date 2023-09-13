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
int vectorProduct(vector<int> nums)
{
    int product = 0;
    for(int num : nums)
    {
        product *= num;
    }
    return product;
}

int main()
{
    vector<int> myList = {1,2,3,4,5};
}
 //COMMENT FOR PART 10