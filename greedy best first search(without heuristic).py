# graph define korsi
graph = {
    'A': [('B', 3), ('C', 5)],
    'B': [('D', 2)],
    'C': [('E', 4)],
    'D': [('F', 1)],
    'E': [],
    'F': []
}

# start and goal node define korsi
sn = 'A'
gn = 'F'


def gbfs(graph, s, g):
    pq = [(0, s)]  # shob note 0 cost e Initialize korsi
    visited = set()

    while pq:
        pq.sort()  # priority queue sort korsi....eikhane FIFO hoise jehetu kono specific vabe bola nai
        current_cost, current_node = pq.pop(0)
        if current_node == g:
            print("Goal reached:", current_node)
            return
        for neighbor, cost in graph[current_node]:
            if neighbor not in visited:
                pq.append((0, neighbor))  # Greedy approach korsi heuristic chara  
                visited.add(neighbor)

        print("Visited node:", current_node)
    print("Goal not reached")


# gbfs funtion call korlam
gbfs(graph, sn, gn)
