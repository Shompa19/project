import collections
def bfs(graph, root):
    visited, queue = set(), collections.deque([root])

    while queue:
        vertex = queue.popleft()
        visit(vertex)
        for node in graph[vertex]:
            if node not in visited:
                visited.add(node)
                queue.append(node)


def visit(n):
   print(n,end=' ')
graph={"0008150":["0009987", "0071840","0051179"],
       "0009987":["0016043"],
       "0071840":["0016043"],
       "0051179":["0051641"],
       "0051641":["0051640"],
       "0051640":["0051646"],
       "0051646":["0048311"],
       "0016043":["0006996"],
       "0006996":["0048308","0007005"],
       "0007005":["0048311"],

       "0048311":[],
       "0048308":["0000001"],
        "0000001":["0048311"],
       }
bfs(graph,"0008150")
