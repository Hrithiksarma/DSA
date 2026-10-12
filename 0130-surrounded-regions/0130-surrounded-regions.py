class Solution:
    def solve(self, board: list[list[str]]) -> None:
        from collections import deque



        queue = deque()

        rows = len(board)
        cols = len(board[0])
        marked = [[False for _ in range(cols)] for _ in range(rows)]
        for i in range(rows):
            for j in range(cols):
                if board[i][j] == "O" and (
                    i == 0 or i == rows - 1 or j == 0 or j == cols - 1
                ):
                    queue.append((i, j))
                    marked[i][j] = True

        directions = [(-1, 0), (+1, 0), (0, +1), (0, -1)]
        while queue:
            r, c = queue.popleft()
            for dr, dc in directions:
                nr, nc = dr + r, dc + c
                if 0 <= nr < rows and 0 <= nc < cols:
                    if board[nr][nc] == "O" and not marked[nr][nc]:
                        marked[nr][nc] = True
                        queue.append((nr, nc))

        for i in range(rows):
            for j in range(cols):
                if not marked[i][j]:
                    board[i][j] = "X"

        pass
