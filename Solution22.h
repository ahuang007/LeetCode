#pragma once
/*
* 22. Generate Parentheses
* Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

Example 1:

Input: n = 3
Output: ["((()))","(()())","(())()","()(())","()()()"]
Example 2:

Input: n = 1
Output: ["()"]

Constraints:

1 <= n <= 8
*/

class Solution22 {
public:
    // ˼·���������ţ�ÿ�ҵ�һ�������ţ�����������һ�����������ţ�������ڿ�ͷ��һ��()�����γ������е������
    // ��Ҫע����ǣ���ʱ�������ظ��������������set���ݽṹȥ�أ���������ٰ�setתΪvector���ɡ�
    vector<string> generateParenthesis(int n) {
        set<string> results;
        if (n == 0) {
            results.insert("");
        } else {
            vector<string> parent_results = generateParenthesis(n - 1);
            for (auto parent_result : parent_results) {
                for (int i = 0; i < parent_result.size(); i++) {
                    if (parent_result[i] == '(') {
                        string result = parent_result;
                        result.insert(result.begin() + i + 1, '(');
                        result.insert(result.begin() + i + 2, ')');
                        results.emplace(result);
                    }
                }
                results.emplace("()" + parent_result);
            }
        }

        return vector<string>(results.begin(), results.end());
    }
};
