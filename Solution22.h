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
    // 思路：找左括号，每找到一个左括号，就在其后面加一个完整的括号，最后再在开头加一个()，就形成了所有的情况，
    // 需要注意的是，有时候会出现重复的情况，所以用set数据结构去重，最后我们再把set转为vector即可。
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

    // 思路：递归Recursion来解。
    // 由于字符串只有左括号和右括号两种字符，而且最终结果必定是左括号3个，右括号3个，所以我们定义两个变量left和right分别表示剩余左右括号的个数。
    // 如果在某次递归时，左括号的个数大于右括号的个数，说明此时生成的字符串中右括号的个数大于左括号的个数，即会出现')('这样的非法串，所以这种情况直接返回，不继续处理。
    // 如果left和right都为0，则说明此时生成的字符串已有3个左括号和3个右括号，且字符串合法，则存入结果中后返回。
    // 如果以上两种情况都不满足，若此时left大于0，则调用递归函数，注意参数的更新，若right大于0，则调用递归函数，同样要更新参数。

    vector<string> generateParenthesis1(int n) {
        vector<string> results;
        generateParenthesisDFS(n, n, "", results);
        return results;
    }

    void generateParenthesisDFS(int left, int right, string out, vector<string>& results) {
        if (left > right) {
            return;
        }
        
        if (left == 0 && right == 0) {
            results.emplace_back(out);
        } else {
            if (left > 0) {
                generateParenthesisDFS(left - 1, right, out + '(', results);
            }

            if (right > 0) {
                generateParenthesisDFS(left, right - 1, out + ')', results);
            }
        }
    }
};
