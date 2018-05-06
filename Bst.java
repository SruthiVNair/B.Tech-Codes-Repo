import java.io.*;
import java.util.Scanner;
class Bnode
{
     int data;
     Bnode left,right;
 
    
    public Bnode()
    {
        left = null;
right=null;
        data = 0;
    }    
  public Bnode(int d)
    {
        data = d;
        left = null;
right=null;

    }
void setleftchild(Bnode d)
{
left=d;
}
void setleftchild(Bnode d)
{
right =d;
}
Bnode getLeft()
     {
         return left;
     }
     Bnode getRight()
     {
         return right;
     }
}
class Bst
{
Bnode root;
    Bst()
     {
         root = null;
     }
boolean isEmpty(){
return root==null;
}
void enter(int data)
{
root=enter(root,data);
}
/*Bnode insert(Bnode node, int data)
     {
         if (node == null)
             node = new Bnode(data);
         else
         {
             if (data <= node.getData())
                 node.left = insert(node.left, data);
             else
                 node.right = insert(node.right, data);
         }
         return node;
     }*/
Bnode insert(Bnode node,int data)
{
if(node==null)
node=new Bnode(data);
else
{
if(data<=node.getData())
node.left=insert(node.left,data);
else
node.right=insert(node.right,data);
}
return node;
}
void delete(int key)
if (isEmpty())
             System.out.println("Tree Empty");
         else if (search(k) == false)
             System.out.println("Sorry "+ k +" is not present");

