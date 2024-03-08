class Solution:
    def maxFrequencyElements(self, nums: List[int]) -> int:
        T=[0]*101 #计Τ1...100皚璶秨101
        best = 0
        for num in nums: # 癹伴皐癸–计暗矪瞶
            T[num] += 1 #硂计 num 瞷Ω计 +1
            if T[num] > best: best=T[num] #程瞷T参璸计 琌ぶ
        # 硂柑T碞Τ场瞷Ω计best碞琌程计
        #р场程常癬ㄓ
        total = 0
        for t in T:
            if t==best: total += t
        return total
