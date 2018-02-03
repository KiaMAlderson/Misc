def list_combiner(list_a, list_b):
    total = []
    length = 0

    if (len(list_a) != len(list_b)):
        raise Exception ("LISTS MUST BE EQUAL LENGTH")
    
    for i in range(0,len(list_a)):
        total.append(list_a[i])
        total.append(list_b[i])
        
    return total
    
print(list_combiner(['a', 'b', 'c'],[1, 2, 3]))        
        
