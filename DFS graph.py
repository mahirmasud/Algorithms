def dfs(graph, st):
    print(st)
    output.add(st)
    for x in  graph[st]:
        if x not in output:
            dfs(graph, x)
graph={
    'A':['B','C'],
    'B':['D','E'],
    'C':['F'],
    'D':[],
    'E':[],
    'F':['G'],
    'G':[],
    }
output=set()
dfs(graph,'A')