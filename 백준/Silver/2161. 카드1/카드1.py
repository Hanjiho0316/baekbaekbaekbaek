# Queue(큐)
# First in First out
class Node:
    def __init__(self,data):
        self.data = data
        self.next = None
class Queue:
    def __init__(self):
        self.head = None
        self.tail = None
        self.count = 0
    def push(self,data):
        new_node = Node(data)
        if self.head == None:
            self.head = self.tail = new_node
        else:
            current = new_node
            self.tail.next = current
            self.tail = current
        self.count += 1
    def empty(self): 
        return self.head is None

    def pop(self):
        current = self.head
        self.head = current.next
        self.count -= 1
        #if self.empty() is None:
            #return -1
        return current.data
        
    def size(self):
        return self.count
        
    def front(self):
        if self.empty():
            return -1
            
        return self.head.data
    def back(self):
        
        if self.empty():
            return -1
            
        return self.tail.data
    def pop2(self):
        current = self.head
        self.head = current.next
        if self.empty() is None:
            return
        
n = int(input())
q = Queue()
for i in range(1,n+1):
    q.push(i)
while(q.size() > 1):
    print(q.pop(),end =" ")
    top = q.pop()
    q.push(top)
print(q.front())
#push X: 정수 X를 큐에 넣는 연산이다.
#pop: 큐에서 가장 앞에 있는 정수를 빼고, 그 수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
#size: 큐에 들어있는 정수의 개수를 출력한다.
#empty: 큐가 비어있으면 1, 아니면 0을 출력한다.
#front: 큐의 가장 앞에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
#back: 큐의 가장 뒤에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다