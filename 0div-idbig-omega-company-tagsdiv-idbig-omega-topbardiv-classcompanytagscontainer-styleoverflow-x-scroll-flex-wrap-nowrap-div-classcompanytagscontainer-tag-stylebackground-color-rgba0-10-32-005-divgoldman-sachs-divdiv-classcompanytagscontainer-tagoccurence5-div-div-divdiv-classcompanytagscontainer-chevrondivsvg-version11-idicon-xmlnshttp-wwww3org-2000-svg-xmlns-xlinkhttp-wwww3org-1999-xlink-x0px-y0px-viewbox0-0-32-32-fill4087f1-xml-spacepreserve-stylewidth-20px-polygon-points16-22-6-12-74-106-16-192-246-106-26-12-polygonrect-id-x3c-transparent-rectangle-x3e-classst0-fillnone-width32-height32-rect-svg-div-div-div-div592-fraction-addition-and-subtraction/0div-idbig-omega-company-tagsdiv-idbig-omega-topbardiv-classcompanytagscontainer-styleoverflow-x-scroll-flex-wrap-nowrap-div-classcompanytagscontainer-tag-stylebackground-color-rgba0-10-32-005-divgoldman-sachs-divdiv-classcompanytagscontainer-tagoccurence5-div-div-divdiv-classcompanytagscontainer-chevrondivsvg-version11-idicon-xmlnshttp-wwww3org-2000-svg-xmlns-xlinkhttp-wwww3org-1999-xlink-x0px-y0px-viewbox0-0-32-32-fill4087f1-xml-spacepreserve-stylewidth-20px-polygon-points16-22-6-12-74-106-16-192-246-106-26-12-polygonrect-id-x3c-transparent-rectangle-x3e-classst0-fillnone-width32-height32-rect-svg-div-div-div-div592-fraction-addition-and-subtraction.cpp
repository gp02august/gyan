class Solution {
public:
    string fractionAddition(string expression) {
        int intial_nume = 0;
        int intial_deno = 1;
        int i = 0;
        int n = expression.length();
        
        while (i < n) {
            int currNum = 0, currdeno = 0;
            int sign = 1;

            if (expression[i] == '+' || expression[i] == '-') {
                if (expression[i] == '-')
                    sign = -1;
                i++;
            }
            
            // Parsing the numerator
            while (i < n && isdigit(expression[i])) {
                currNum = currNum * 10 + (expression[i] - '0');
                i++;
            }
            currNum *= sign;
            
            // Check if there's a '/' for the denominator
            if (i < n && expression[i] == '/') {
                i++; // move past '/'
            } else {
                // Handle the case where there's no '/' - this is an input error
                return "Invalid input: missing denominator";
            }

            // Parsing the denominator
            while (i < n && isdigit(expression[i])) {
                currdeno = currdeno * 10 + (expression[i] - '0');
                i++;
            }
            
            // Ensure currdeno is not zero
            if (currdeno == 0) {
                return "Invalid input: denominator cannot be zero";
            }

            // Correct formula for numerator and denominator
            intial_nume = intial_nume * currdeno + intial_deno * currNum;
            intial_deno *= currdeno;
            
            // Now reduce the fraction into irreducible form 
            int val = gcd(abs(intial_nume), intial_deno);
            intial_nume /= val;
            intial_deno /= val;
        }
        return to_string(intial_nume) + "/" + to_string(intial_deno);
    }
};
