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
    //����s�е�����Ԫ��
    for (char ch : s) {
        //ͨ��keyֵ���Ҹ�keyֵ�µļ�ֵ�Զ���
        //�������������᷵��һ����Ϊ0����
        //������������򷵻�0���������ж�
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