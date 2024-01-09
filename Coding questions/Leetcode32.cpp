#include<iostream>
#include<stack>
using namespace std;

int longestValidParentheses(string s) {

    // first test on a string stack then test on character stack 
    stack<char> characterStack; 
    characterStack.push('K');
    stack<int> integerStack;
    integerStack.push(-1);    

    // now extract each letter from the string s 
    // for comparing, use string compare 
    char openBracket = '(';
    char closeBracket = ')';
    int length = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if ( s[i] == openBracket ){  
            characterStack.push('(');
            integerStack.push(i);
        }  
        // else, if i encounter a closed bracket and the top of character stack is an open bracket then pop both the index and the character 
        else if ( (s[i] == closeBracket) & (characterStack.top() == openBracket) ){  // when the top is empty, it gives error and doesnt go to the next condition 
            // cout << "condition 2 entered" << endl;
            characterStack.pop(); 
            integerStack.pop(); 
            // compare lengths
            length = max( length, i - integerStack.top()) ;
            
        }  
        else {       
            // everytime there are uneven ) this gives segmentation error 
            // cout << "condition 3 entered" << endl;
            integerStack.push(i);
        }

    }

    return length;
        
}

int main(){

    int longestValidParentheses(string s);
    string s =  "())())))";
    int result = longestValidParentheses(s);
    cout << result << endl;
    return 0;

}