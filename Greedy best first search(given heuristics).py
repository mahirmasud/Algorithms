def gbfs(graph, s, g, h):
    pq = [(h[s], s)]
    visited = set()

    while pq:
        pq.sort()  # Sort korsi heuristic value akare
        current_cost, current_node = pq.pop(0)
        if current_node == g:
            print("Goal reached:", current_node)
            return
        for neighbor, cost in graph[current_node]:  #ashe pasher node er shathe compare kosi je visit korsi naki na
            if neighbor not in visited:
                neighbor_cost = h[neighbor]
                pq.append((neighbor_cost, neighbor))
                visited.add(neighbor)

        print("Visited node:", current_node)
    print("Goal not reached")


#graph define korsi
graph = {
    'A': [('B', 3), ('C', 5)],
    'B': [('D', 2)],
    'C': [('E', 4)],
    'D': [('F', 1)],
    'E': [],
    'F': []
}

#start and goal nodes define korsi
sn = 'A'
gn = 'F'

#heurestic values define korsi
heuristic_values = {
    'A': 7,
    'B': 5,
    'C': 6,
    'D': 3,
    'E': 2,
    'F': 0
}

#gbfs call korsi
gbfs(graph, sn, gn, heuristic_values)