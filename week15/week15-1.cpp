// week15-1.cpp LeetCode 3158 �n��X�{����
int duplicateNumbersXOR(int* nums, int numsSize) {
    int table[51] = {};
    for(int i=0; i<numsSize; i++) {
        table[nums[i]]++;  //�o�ӼƦr�X�{�A +1
    }
    int ans = 0;
    for(int i=1; i<=50; i++) {  //�w�� table�� 1...50����
        if(table[i]==2) ans = ans ^ i;
    }
    return ans;
}
