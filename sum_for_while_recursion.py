num_list = [1,2,3,4,5,6,7,8,9]

def for_loop(list_input):
    length = len(list_input)
    total = 0

    for i in range(0, length):
        total += list_input[i]

    return total


def while_loop(list_input):
    length = len(list_input)
    total = 0
    counter = 0

    while(counter < length):
        total += list_input[counter]

    return total
    

def recursion(list_input):
    length = len(list_input)

    if(length == 1):
        return list_input
    return (list_input[0] + recursion(list_input[1:]))


print("For loop total: ", for_loop(num_list))
print("While loop total: ", for_loop(num_list))
print("Recursion total: ", for_loop(num_list))
