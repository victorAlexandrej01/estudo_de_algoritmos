
def binarySearch(lista, item):
        left = 0
        right = len(lista) - 1
        
        while left <= right:
            middle = (left + right) // 2
            tentative = lista[middle]
            if tentative == item:
                return middle
            elif tentative < item:
                left = middle + 1
            else:
                right = middle - 1

        return None


minha_lista = [1,2,3,4,5,6,7,8,9,10]

print(binarySearch(minha_lista, 7))