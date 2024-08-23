class Solution {
public:
    string fractionAddition(string expression) {

        int nr=0;
        int den=1;

        int n=expression.size();

int i=0;
        while(i<n)
        {
            int cn=0;
            int cd=0;
            
            bool neg=false;
            if(expression[i]=='-')
            {
                neg=true;

            }
             if(expression[i]=='-' || expression[i]=='+')
            {
                i++;
                
            }

            while(i<n && isdigit(expression[i]))
            {
                cn=10*cn+expression[i]-'0';
                i++;
            }
            i++;
            if(neg)
            cn*=-1;
            while(i<n && isdigit(expression[i]))
            {
                cd=cd*10+expression[i]-'0';
                i++;
            }

nr=nr*cd+den*cn;
den=den*cd;

        }
        

int kk=abs(__gcd(nr,den));
nr/=kk;
den/=kk;


return to_string(nr) +"/"+to_string(den);
        

    }
};