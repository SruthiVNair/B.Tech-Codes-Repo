import java.io.*;
import java.util.Scanner;
class node
{
     int data;
     node link;
 
    
    public node()
    {
        link = null;
        data = 0;
    }    
  public node(int d)
    {
        data = d;
        link = null;
    }
}
class linkedList
{
     node start;
     node end ;
    
    public linkedList()
    {
        start = null;
        end = null;
      
    }
