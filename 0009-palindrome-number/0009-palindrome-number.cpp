class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }
        if (x == 0) {
            return true;  // log10(0) problemi engellenir
        }
        int basamak = log10(x) + 1;
        for(int i=0;i<basamak-1;i++){
            int solbasamak=(x/(int)pow(10,basamak-i-1))%10;
            int sagbasamak=(x/(int)pow(10,i))%10;
            if(solbasamak!=sagbasamak){
                return false;
            }
        }
        return true;
        
    }
};