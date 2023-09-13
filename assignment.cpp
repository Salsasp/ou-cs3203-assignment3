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
    int num1,num2;
    vector<int> nums;
    cout << "Enter num 1" << endl;
    cin >> num1;
    cout << "Enter num 2" << endl;
    cin >> num2;
    nums.push_back(num1);
    nums.push_back(num2);
    cout << "Sum: " << vectorSum(nums);
    cout << "Product: " << vectorProduct(nums);
}
