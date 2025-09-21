while True:
    try:
        # 讀取一行並分割為兩個整數或字串
        s1, s2 = input().split()
        # 如果需要整數，轉換為 int
        # a, b = map(int, input().split())
        # 處理兩個元素
        print(s1, s2)
    except EOFError:
        break
