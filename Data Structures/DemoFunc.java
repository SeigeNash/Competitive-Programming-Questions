
public class DemoFunc {

    public static void main(String[] args) {

        Linked_List myList = new Linked_List();

        myList.append(1);
        myList.append(2);
        myList.append(3);

        System.out.print("Linked List: ");
        myList.printList();

        // for returning the end node of the linked list

        Node lastNode = myList.getEnd();
        System.out.println();
        System.out.println( lastNode.data);
    }


}
