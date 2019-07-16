from collections import defaultdict
class Graph:
    def __init__(self):
        self.graph=defaultdict(list)
    def addEdge(self,u,v):
        self.graph[u].append(v)

    def BFS(self,s):
        visited=[False]*len((self.graph))
        queue=[]
        queue.append(s)
        visited[s]=True
        while queue:
            s=queue.pop(0)
            print(s,end=" ")

            for i in self.graph[s]:
                if visited[i]==False:
                    queue.append(i)
                    visited[i]=True

g=Graph()
g.addEdge(1,2)
g.addEdge(1,3)
g.addEdge(1,4)
g.addEdge(2,5)
g.addEdge(3,5)
g.addEdge(5,6)
g.addEdge(5,7)
g.addEdge(6,8)
g.addEdge(7,6)
g.addEdge(8,9)
g.addEdge(4,10)
g.addEdge(10,11)
g.addEdge(11,12)
g.addEdge(12,13)
g.addEdge(13,9)
g.addEdge(7,13)
print("Follwing is BFS")
g.BFS(1)

