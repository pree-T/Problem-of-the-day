class Solution {

    bool isEqual(int arr1[10], int arr2[10]) {
        for (int i = 0; i < 10; i++) if (arr1[i] != arr2[i]) return 0;
        return 1;
    }

    int countDigits(int num, int digits[10]) {
        int cnt = 0;
        while (num > 0) digits[num % 10]++, num /= 10, cnt++;
        return cnt;
    }
    public:
    bool reorderedPowerOf2(int num) {
        if (num > 0) {
            int numDigits[10] = { 0 }, numCnt = countDigits(num, numDigits);
            long po2 = 1; // po2: Power of 2
            while (1) {
                int po2Digits[10] = { 0 }, po2Cnt = countDigits(po2, po2Digits);
                po2 <<= 1; // same as (po2 = po2 * 2;)
                if (po2Cnt < numCnt) continue;
                if (po2Cnt > numCnt || po2 > INT_MAX) break;
                if (isEqual(numDigits, po2Digits)) return 1;
            }
        }
        return 0;
    }
        
    
};
