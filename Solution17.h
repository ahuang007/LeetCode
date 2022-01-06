#pragma once
/*
* 17. Letter Combinations of a Phone Number
* Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. Return the answer in any order.

A mapping of digit to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.

2 : abc
3 : def
4 : ghi
5 £ºjkl
6 : mno
7 : pqrs
8 : tuv
9 : wxyz

Example 1:

Input: digits = "23"
Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]
Example 2:

Input: digits = ""
Output: []
Example 3:

Input: digits = "2"
Output: ["a","b","c"]
 

Constraints:

0 <= digits.length <= 4
digits[i] is a digit in the range ['2', '9'].
*/

class Solution17 {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> vec_str;

        int sz = (int)digits.size();
        if (sz == 0) {
            // do_nothing
        } else if (sz == 1) {
            vec_str = num2char[digits[0]];
        } else if (sz == 2) {
            for (auto& x : num2char[digits[0]]) {
                for (auto& y : num2char[digits[1]]) {
                    vec_str.emplace_back(x + y);
                }
            }
        } else if (sz == 3) {
            for (auto& x : num2char[digits[0]]) {
                for (auto& y : num2char[digits[1]]) {
                    for (auto& z : num2char[digits[2]]) {
                        vec_str.emplace_back(x + y + z);
                    }
                }
            }
        } else if (sz == 4) {
            for (auto& x : num2char[digits[0]]) {
                for (auto& y : num2char[digits[1]]) {
                    for (auto& z : num2char[digits[2]]) {
                        for (auto& o : num2char[digits[3]]) {
                            vec_str.emplace_back(x + y + z + o);
                        }
                    }
                }
            }
        }

        return vec_str;
    }

    map<char, vector<string>> num2char = {
        {'2', {"a","b","c"}},
        {'3', {"d","e","f"}},
        {'4', {"g","h","i"}},
        {'5', {"j","k","l"}},
        {'6', {"m","n","o"}},
        {'7', {"p","q","r", "s"}},
        {'8', {"t","u","v"}},
        {'9', {"w","x","y", "z"}},
    };
};
