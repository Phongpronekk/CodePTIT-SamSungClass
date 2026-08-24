def solve():
    s = input().split()
    for x in s:
        x = x[::-1]
        print(x, end = ' ')

if __name__ == '__main__':
    for t in range(int(input())):
        solve()
        print()