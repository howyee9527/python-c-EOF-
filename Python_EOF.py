while True:
    try:
        line = input()
        numbers = list(map(int, line.split()))
        #字串分割並pushback
        print(numbers)
    except EOFError:
        break
