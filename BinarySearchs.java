 import java.util.*;
 class BSTNode
 {
    BSTNode left, right;
     int data;
    BSTNode()
     {
         left = null;
         right = null;
         data = 0;
     }
     BSTNode(int n)
     {
         left = null;
         right = null;
         data = n;
     }
   void  setLeft(BSTNode n)
     {
         left = n;
     }
      void setRight(BSTNode n)
     {
         right = n;
     }
      BSTNode getLeft()
     {
         return left;
     }
     BSTNode getRight()
     {
         return right;
     }
    void setData(int d)
     {
         data = d;
     }
   int getData()
     {
         return data;
     }     
 }
 class BST
 {
     BSTNode root;
    BST()
     {
         root = null;
     }
     boolean isEmpty()
     {
         return root == null;
     }
    void insert(int data)
     {
         root = insert(root, data);
     }
     BSTNode insert(BSTNode node, int data)
     {
         if (node == null)
             node = new BSTNode(data);
         else
         {
             if (data <= node.getData())
                 node.left = insert(node.left, data);
             else
                 node.right = insert(node.right, data);
         }
         return node;
     }
      void delete(int k)
     {
         if (isEmpty())
             System.out.println("Tree Empty");
         else if (search(k) == false)
             System.out.println("Sorry "+ k +" is not present");
         else
         {
             root = delete(root, k);
             System.out.println(k+ " deleted from the tree");
         }
     }
    BSTNode delete(BSTNode root, int k)
     {
         BSTNode p, p2, n;
         if (root.getData() == k)
         {
             BSTNode lt, rt;
             lt = root.getLeft();
             rt = root.getRight();
             if (lt == null && rt == null)
		{
		System.out.println("no children");
                 return null;
		}
             else if (lt == null)
             {
		System.out.println("no left child");
                 p = rt;
                 return p;
             }
             else if (rt == null)
             {
		System.out.println("no right child");
                 p = lt;
                 return p;
             }
             else
             {
		System.out.println("both left and right child present");
                 p2 = rt;
                 p = rt;
                 while (p.getLeft() != null)
                     p = p.getLeft();
                 p.setLeft(lt);
                 return p2;
             }
         }
         if (k < root.getData())
         {
             n = delete(root.getLeft(), k);
             root.setLeft(n);
         }
         else
         {
             n = delete(root.getRight(), k);
             root.setRight(n);             
         }
         return root;
     }
     int countNodes()
     {
         return countNodes(root);
     }
 int countNodes(BSTNode r)
     {
         if (r == null)
             return 0;
         else
         {
             int l = 1;
             l += countNodes(r.getLeft());
             l += countNodes(r.getRight());
             return l;
         }
     }
 boolean search(int val)
     {
         return search(root, val);
     }
      boolean search(BSTNode r, int val)
     {
         boolean found = false;
         while ((r != null) && !found)
         {
             int rval = r.getData();
             if (val < rval)
                 r = r.getLeft();
             else if (val > rval)
                 r = r.getRight();
             else
             {
                 found = true;
                 break;
             }
             found = search(r, val);
         }
         return found;
     }
     void inorder()
     {
         inorder(root);
     }
      void inorder(BSTNode r)
     {
         if (r != null)
         {
             inorder(r.getLeft());
             System.out.print(r.getData() +" ");
             inorder(r.getRight());
         }
     }
     void preorder()
     {
         preorder(root);
     }
         void preorder(BSTNode r)
     {
         if (r != null)
         {
             System.out.print(r.getData() +" ");
             preorder(r.getLeft());             
             preorder(r.getRight());
         }
     }
    void postorder()
     {
         postorder(root);
     }
      void postorder(BSTNode r)
     {
         if (r != null)
         {
             postorder(r.getLeft());             
             postorder(r.getRight());
             System.out.print(r.getData() +" ");

         }
     }     
 }
 class BinarySearchs    
 {
     public static void main(String[] args)
    {                 
         Scanner in = new Scanner(System.in);
         BST bst = new BST(); 
         System.out.println("Binary Search Tree Test\n");          
         char ch;
         System.out.println("\nBinary Search Tree Operations\n");
         System.out.println("1. insert element ");
         System.out.println("2. delete element");
         System.out.println("3. search element");
         System.out.println("4. display in pre order");	
	 System.out.println("5. display in post order");
	 System.out.println("6. display in inorder");
	 System.out.println("7. count nodes");
	 System.out.println("8. exit");
      while(true)  

        {

	    System.out.println("\nenter your choice");
            int choice = in.nextInt();            
            switch (choice)
            {
            case 1 : 
                System.out.println("Enter integer element to insert");
                bst.insert( in.nextInt() );                     
                break;                          
            case 2 : 
                System.out.println("Enter integer element to delete");
                bst.delete( in.nextInt() );                     
                break;                         
            case 3 : 
                System.out.println("Enter integer element to search");
                System.out.println("Search result : "+ bst.search( in.nextInt() ));
                break;    
	    case 4:
		System.out.print("\nPost order : ");
                bst.postorder();
	        break;
	    case 5:
	         System.out.print("\nPre order : ");
                 bst.preorder();
		 break;
	    case 6:
                  System.out.print("\nIn order : ");
                  bst.inorder();
		  break;
            case 7 :
                System.out.println("Nodes = "+ bst.countNodes());
                break;   
	     case 8:
		System.exit(0);
            default : 
                System.out.println("Wrong Entry \n ");
                break;   
            }
        }               
     }
}



