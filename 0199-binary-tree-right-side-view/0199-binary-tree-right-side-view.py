# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def rightSideView(self, root: Optional[TreeNode]) -> List[int]:
        result=[]
        def preOrder(node,level):
            if node==None:
                return None
            
           
            if(len(result)<level):
                result.append(node.val)
            preOrder(node.right,level+1)
            preOrder(node.left,level+1)

        



        preOrder(root,1)
        return result
        