
# 모든 간선이 양수인 가중 그래프가 있다.
# 그래프의 정점의 개수 N, 시작 정점 s 와 간선들의 가중치 w(u, v)가 주어졌을 때,
# 시작 정점 s 에서 각각의 정점들에 도달하는 최단 거리를 모두 구하시오.
#
# Input
# N = 5
# S = 0
# W = [ 
#   [0, 1, 10], 
#   [0, 4, 3], 
#   [1, 2, 2],
#   [1, 4, 4],
#   [2, 3, 9], 
#   [3, 2, 7], 
#   [4, 1, 1], 
#   [4, 2, 8], 
#   [4, 3, 2] 
# ]
#
# Output
# A에서 B로 가는 최소 비용 4, 경로 [ A -> E -> B ]
# A에서 C로 가는 최소 비용 6, 경로 [ A -> E -> B -> C ]
# A에서 D로 가는 최소 비용 5, 경로 [ A -> E -> D ]
# A에서 E로 가는 최소 비용 3, 경로 [ A -> E ]
