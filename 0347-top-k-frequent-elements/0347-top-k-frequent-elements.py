class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        if len(nums) == k:return nums
        d, a, ans = dict(), {}, []
        for i in nums:
            if i not in d:
                d[i] =  1
            else:
                d[i] += 1
        print(d)
        for i, j in d.items():
            if len(ans) < k:
                heapq.heappush(ans, [j, i])
            else:
                heapq.heappushpop(ans, [j, i])
        print(ans)
        return [j for i, j in ans]