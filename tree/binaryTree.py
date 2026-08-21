class treeNode:
    def __init__(self,data):
        self.data = data
        self.left = None
        self.right = None

class binaryTree:
    def __init__(self):
        self.root = None

    def insert(self,data):
        if not self.root:
            self.root = treeNode(data)
        else:
            self._insert_recursive(self.root,data)

    def _insert_recursive(self,node,data):
        if data < node.data:
            if node.left:
                self._insert_recursive(node.left, data)
            else:
                node.left = treeNode(data)

        else:
            if node.right:
                self._insert_recursive(node.right, data)
            else:
                node.right = treeNode(data)

    def search(self,data):
        return self._search_recursive(self.root,data)

    def _search_recursive(self,node,data):
        if not node:
            return False

        if node.data == data:
            return True
        if node.data < data:
            return self._search_recursive(node.right,data)
        return self._search_recursive(node.left,data)

    def inorder_traversal(self):
        return self._inorder_recursive(self.root)

    def _inorder_recursive(self,root):
        if not root:
            return []
        return self._inorder_recursive(root.left) + [root.data] + self._inorder_recursive(root.right)


tree = binaryTree()
root = treeNode(20)

values = [10, 30, 5, 15, 25, 35]
tree.insert(root.data)
for value in values:
    tree.insert(value)

print(tree.search(20))  
print(tree.search(100))  

print(tree.inorder_traversal())  # Output: [5, 10, 15, 20, 25, 30, 35]