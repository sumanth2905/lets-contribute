class Solution(object):
    def rotate(self, matrix):
        """
        :type matrix: List[List[int]]
        :rtype: void Do not return anything, modify matrix in-place instead.
        """
        half = (math.ceil(len(matrix) / 2))
        
        r = None
        if len(matrix) % 2 == 0:
            r = range(half)
        else:
            r = range(half - 1)

        for y in r:
            for x in range(half):
                tmp = matrix[y][x]
                matrix[y][x] = matrix[-1 - x][y]
                matrix[-1 - x][y] = matrix[-1 - y][-1 - x]
                matrix[-1 - y][-1 - x] = matrix[x][-1 - y]
                matrix[x][-1 -y] = tmp
