
# 정점 집합 V와 간선의 가중치 w(u, v)를 가지는 그래프가 주어집니다.
# 시작점 s가 주어졌을 때, 시작점에서 각 정점들까지의 최단 거리 d(s, v)를 구하시오.
# (단, 간선의 가중치는 0보다 작을 수 있습니다. 만약 그래프에 음수 가중치 순환이 있다면 리포트합니다.)
#
# Input:
# [0, 1, -1]
# [0, 2, 4]
# [1, 2, 3]
# [1, 3, 2]
# [1, 4, 2]
# [3, 2, 5]
# [3, 1, 1]
# [4, 3, -3]
#
# Output:
# 0, 0, 0
# 1, -1, 0 -> 1
# 2, 2, 0 -> 1 -> 2
# 3, -2, 0 -> 1 -> 4 -> 3
# 4, 1, 0 -> 1 -> 4
