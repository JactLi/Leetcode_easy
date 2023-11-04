#include "solution.h"

bool solution_20::isValid(string s)
{
    int n = s.size();
    if (n % 2 == 1) {
        return false;
    }

    unordered_map<char, char> pairs = {
        {')', '('},
        {']', '['},
        {'}', '{'}
    };
    stack<char> stk;
    //遍历s中的所有元素
    for (char ch : s) {
        //通过key值查找该key值下的键值对对数
        //如果是右括号则会返回一个不为0的数
        //如果是左括号则返回0，不进入判断
        if (pairs.count(ch)) {  
            if (stk.empty() || stk.top() != pairs[ch]) {
                return false;
            }
            stk.pop();
        }
        else {
            stk.push(ch);
        }
    }
    return stk.empty();
	
}