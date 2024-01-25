def happy(n):
    while True:
        if n == 1:
            return True
        sq = 0
        while n:
            digit = n % 10
            sq += digit * digit
            n = n // 10
        n = sq
        if n == 4:
            return False
    return False

def get_max_size_happy_num_set(happy_num_low, happy_num_high):
    mp = {}
    for i in range(happy_num_low, happy_num_high + 1):
        if happy(i):
            s = str(i)
            s = ''.join(sorted(s))
            if s in mp:
                mp[s] += 1
            else:
                mp[s] = 1
    return len(mp)

if __name__ == "__main__":
    print(get_max_size_happy_num_set(20, 35))
