class Solution {
private:
    int nextNumber(int n){
        int newNumber = 0;
        while(n!=0){
            int num = n%10;
            newNumber += num*num;
            n = n/10;
        }
        return newNumber;
    }
public:
    bool isHappy(int n) {
        int slow=n;
        int fast=n;

        do{

            slow=nextNumber(slow);
            fast=nextNumber(nextNumber(fast));
        } while(slow!=fast);

        return slow==1;
       

    }
};