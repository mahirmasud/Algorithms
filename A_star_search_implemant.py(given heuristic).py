""" Mohammed Masud Chowdhury Mahir
ID: 2215151105  Section: 5C1
Assingment: A star Search Implement

"""
 #graph define korlam
graph = {
    'S': [('A', 3), ('B', 5)],
    'A': [('C', 2)],
    'B': [('D', 4)],
    'C': [('G', 1)],
    'D': [],
    'G': []
}



#start node and goal node define korsi
s_node = 'S'
g_node = 'G'





def a_star_search(graph, s_node, g_node, h):
    #priority queue sorting tuple holo ei list 
    list = [(h[s_node], 0, s_node)]
    
    #eita diya je node visit korsi oita jani ar visit na kori
    closed_set = set()

    
     
    while list:
        #huristic soring korsi
        list.sort()
        
        #A* search er f=g+n current ta assign korsi ja starting e rakhsi  
        current_f, current_g, current_node = list.pop(0)

        if current_node == g_node:
            print("Goal reached:", current_node)
            print("Path cost:", current_g)
            return

        closed_set.add(current_node)

        for neighbor, cost in graph[current_node]:
            if neighbor in closed_set:
                continue
            
            neighbor_g = current_g + cost
            neighbor_f = neighbor_g + h[neighbor]

            list.append((neighbor_f, neighbor_g, neighbor))

        print("Visited node:", current_node)

    print("Goal not reached")

#heurestic values define korsi
heuristic_values = {
    'S': 7,
    'A': 5,
    'B': 6,
    'C': 3,
    'D': 2,
    'G': 0
}
a_star_search(graph, s_node, g_node, heuristic_values)
