class Solution:
    def maxFrequencyElements(self, nums: List[int]) -> int:
        T=[0]*101 #�]���Ʀr��1...100�A�}�C�n�}101��
        best = 0
        for num in nums: # �j��A�w��C�ӼƦr���B�z
            T[num] += 1 #�o�ӼƦr num �X�{���� +1
            if T[num] > best: best=T[num] #�̦h�X�{��T�έp�Ʀr �O�h��
        # ��o�̡AT�N�������X�{�����ƤF�A�Bbest�N�O�̦h���Ʀr
        #������̦h�����[�_��
        total = 0
        for t in T:
            if t==best: total += t
        return total
