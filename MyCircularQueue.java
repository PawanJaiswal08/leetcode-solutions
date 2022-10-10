//https://leetcode.com/problems/design-circular-queue/


class MyCircularQueue {
    
    public int [] arr;
    int front = 0,rear=-1;
    int num_of_elem =0;
    public MyCircularQueue(int k) {
         arr = new int[k];
        num_of_elem=k;
    }
    
    public boolean enQueue(int value) {
        
         if(!isFull()){
            rear = (rear+1)%num_of_elem;
             arr[rear]=value;
             return true;
        }
        else return false;
        
    }
    
    public boolean deQueue() {
        if(!isEmpty()){
             if(front == rear) {
                 rear =-1;front = 0;
             } 
            else {
                front =(front+1) %num_of_elem;
            }
            return true;
        }
        else return false;
    }
    
    public int Front() {
        if(!isEmpty()) return arr[front];
          else return -1;
       
        
    }
    
    public int Rear() {
        if(!isEmpty()) return arr[rear];
        else return -1;
        
    }
    
    public boolean isEmpty() {
        if(rear == -1) return true;
        else return false;
        
    }
    
    public boolean isFull() {
        if(front == (rear+1)%num_of_elem && !isEmpty()) return true;
        else return false;
        
    }
}
