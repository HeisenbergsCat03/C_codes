class Solution
{
    public:
    int countFractions(int n, int numerator[], int denominator[])
    {
        int i = 0;
        int j = 0;
        int count = 0;
        for(;i<n;i++){
            for(;j<n;j++){
                double frac1 = numerator[i]/denominator[i];
                double frac2 = numerator[j]/denominator[j];
                if(frac1 + frac2 == 1){
                    count++;
                }
            }
        }
        return count;
    }
};