#input into list using map in single line and remove duplicate values
if __name__ == '__main__':
    n = int(input())
    a = list(map(int,input("").strip().split()))[:n]
    a.sort()
    final_list = []
    for num in a:
        if num not in final_list:
            final_list.append(num)
    print(final_list[-2])