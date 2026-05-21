class Solution:
    def eraseOverlapIntervals(self, intervals: List[List[int]]) -> int:
        intervals.sort(key=lambda X: X[1])
        end, count = float('-inf'), 0
        for interval in intervals:
            if interval[0] >= end:
                end = interval[1]
            else:
                count += 1
        return count
                    
        