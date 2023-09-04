def product_fib(prod):
    fib_list = [0,1]
    while True:
        fib_list.append(fib_list[-1] + fib_list[-2])
        if fib_list[-1] > int(prod**0.5):
            break

    #Check explanation for the above part in the explanation.md file.
    fib_list.append(fib_list[-1] + fib_list[-2])
    for j in range(len(fib_list)-1):
        multiplier = fib_list[j] * fib_list[j+1]
        if prod == multiplier:
            return [fib_list[j], fib_list[j+1], True]
        elif multiplier > prod:
            return [fib_list[j], fib_list[j+1], False]