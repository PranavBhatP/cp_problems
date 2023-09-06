def snail(snail_map):
    final_map = []
    
    while snail_map:
        
        #Append the entire first row into final_map
        for i in snail_map[0]:
            final_map.append(i)
        snail_map.pop(0)
        
        if not snail_map:
            break
        
        for j in snail_map:
            final_map.append(j[-1])
            j.pop()
            
        for k in range(len(snail_map)-1, -1, -1):
            final_map.append(snail_map[-1][k])
        snail_map.pop()
        
        if not snail_map:
            break
            
        for l in reversed(snail_map):
            final_map.append(l[0])
            l.pop(0)
        

            
    return final_map

#Test cases

#Test case1

snail([[1,2,3],[4,5,6],[7,8,9]])

#Test case 2

snail([[1,2,3,4,5],[6,7,8,9,10], [11,12,13,14,15], [16,17,18,19,20], [21,22,23,24,25]])