class Node {

    int data;
    Node next;

    public Node( int data ){

        this.data = data;
        this.next = null;
    }
}


public class Linked_List {

    // creating head node
    Node head;      // declared globally

    // if head points to null then it simply adds new node

    public void append( int data ){

        // initializes a new node
        Node newNode = new Node( data );

        // if the linked list is empty
        if( head == null ){
            head = newNode;
        }
        // if the linked list is non-empty, adds the newNode at the end of the list
        else {
            Node current = head;
            while (current.next != null) {
                current = current.next;
            }
            current.next = newNode;
        }

    }

    // Find the end of the linked list
    public Node getEnd() {
        Node current = head;
        while (current != null && current.next != null) {
            current = current.next;
        }
        return current;
    }

    // insertion in the beginning



    // creating a function that prints the linked list (traversal)
    public void printList() {
        Node current = head;
        while (current != null) {
            System.out.print(current.data + " -> ");
            current = current.next;
        }
        System.out.println("null");
    }



}
