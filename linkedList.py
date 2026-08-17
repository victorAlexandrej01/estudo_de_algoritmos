class Node:
    def __init__(self, value):
        self.value = value
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

    def addAtEnd(self,value):
        novo =  Node(value)

        if self.head is None:
            self.head = novo
            return

        atual = self.head

        while atual.next is not None:
            atual = atual.next

        atual.next = novo

    def printList(self):
        cur = self.head

        while cur != None:
            print(cur.value) 
            cur = cur.next   

    def searchPosition(self, val):
        i = 0
        cur = self.head
        while cur:
            if cur.value == val:
                return print(i)
            else:
                i = i+1
                cur = cur.next
        return print('não existe esse valor')

    def searchValue(self, position):
        cur = self.head
        pos = 0
        while cur is not None:
            if pos == position:
                return print(cur.value)
            else:
                pos = pos + 1
                cur = cur.next
        return print('não existe essa posicao na lista')


    def remove(self, val):
        cur = self.head
        prev = None
        while cur is not None:
            if cur.value == val:
               if prev is None:
                   self.head = cur.next
               else:
                    prev.next = cur.next

               return True

            prev = cur
            cur = cur.next
        return False


lista = LinkedList()

lista.addAtEnd(10)
lista.addAtEnd(20)
lista.addAtEnd(30)
 

lista.printList()
lista.searchPosition(21)
lista.searchValue(2)
lista.remove(20)
print('\n ')
lista.printList()
