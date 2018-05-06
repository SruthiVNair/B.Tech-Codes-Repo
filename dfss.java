import java.util.*;
class Stack
{
   int size = 20;
   int[] st;
   int top;
   public Stack()           
   {
      st = new int[size];    
      top = -1;
   }
   public void push(int j)   
   { st[++top] = j; }
   public int pop()          
   { return st[top--]; }
   public int peek()      
   { return st[top]; }
   public boolean isEmpty()  
   { return (top == -1); }
}

class Vertex
{
   char label;       
   boolean wasVisited;
   public Vertex(char lab)   
   {
      label = lab;
      wasVisited = false;
   }
} 

class Graph
{
   int limit = 20;
   Vertex vertexList[]; 
   int adjMat[][];      
   int nVerts;          
   Stack theStack;
   public Graph()              
   {
      vertexList = new Vertex[limit];
      adjMat = new int[limit][limit];
      nVerts = 0;
      for(int y=0; y<limit; y++)    
         for(int x=0; x<limit; x++)  
            adjMat[x][y] = 0;
      theStack = new Stack();
    }  
   public void addVertex(char lab)
   {
      vertexList[nVerts++] = new Vertex(lab);
   }
   public void addEdge(int start, int end)
   {
      adjMat[start][end] = 1;
      adjMat[end][start] = 1;
   }
   public void displayVertex(int v)
   {
      System.out.print(vertexList[v].label);
   }
   public void Dfs()  
   {                               
      vertexList[0].wasVisited = true;  
      displayVertex(0);                
      theStack.push(0);                 
      while( !theStack.isEmpty() )  
      {
         int v = getAdjUnvisitedVertex( theStack.peek() );
         if(v == -1)                  
            theStack.pop();
         else                         
         {
            vertexList[v].wasVisited = true;  
            displayVertex(v);                
            theStack.push(v);               
         }
       }
      for(int j=0; j<nVerts; j++)         
         vertexList[j].wasVisited = false;
   }  
   public int getAdjUnvisitedVertex(int v)
  {
      for(int j=0; j<nVerts; j++)
         if(adjMat[v][j]==1 && vertexList[j].wasVisited==false)
            return j;
      return -1;
  } 
}  

class dfss
{
   public static void main(String[] args)
   {
      Graph theGraph = new Graph();
      Scanner S= new Scanner(System.in);
     /* int c,n=0;;
      while(c!=0)
      {
       System.out.println("ENTER THE VERTEX:");
       char ch=S.nextLine();
       theGraph.addVertex('ch');
       System.out.println("Do u want to enter more:");
       c=S.nextInt();
       n++;
      }*/
      theGraph.addVertex('A');    // 0  (start for dfs)
      theGraph.addVertex('B');    // 1
      theGraph.addVertex('C');    // 2
      theGraph.addVertex('D');    // 3
      theGraph.addVertex('E');    // 4

      theGraph.addEdge(0, 1);     // AB
      theGraph.addEdge(1, 2);     // BC
      theGraph.addEdge(0, 3);     // AD
      theGraph.addEdge(3, 4);     // DE
      theGraph.addEdge(4, 2);
      theGraph.addEdge(3, 1);
      System.out.print("Visits: ");
      theGraph.Dfs();             // depth-first search
      System.out.println();
   }  
} 


