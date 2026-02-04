class Solution {
public:

    typedef int (Solution::*OperationFunc)(int, int);

    int add(int a, int b) {return a + b; }
    int sub(int a, int b) {return a - b; }
    int mul(int a, int b) {return a * b; }
    int dvd(int a, int b) {return a / b; }

    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        unordered_map<string, OperationFunc> dispatchTable = {
            {"+",&Solution::add},
            {"-",&Solution::sub},
            {"*",&Solution::mul},
            {"/",&Solution::dvd}
        };

        for(const string& token : tokens){

            if(dispatchTable.count(token)){
                int b = st.top();
                st.pop();
                int a = st.top();
                st.pop();


                OperationFunc func = dispatchTable[token];

                int result = (this->*func)(a,b);

                st.push(result);
            }
            else{
                st.push(stoi(token));
            }
        }
        return st.top();
    }

    
};