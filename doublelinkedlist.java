package com.javadevjournal.list;

public class DoublyLinkedList {

	static class dllNode {
		//data
		int data;
		// next node in the list
		dllNode next;
		// previous node in the list
		dllNode prev;
		dllNode(int data) {
			this.data = data;
		}
		public void displayData() {
			System.out.print(" " + data);
		}
	}

	private dllNode head;
	private dllNode tail;

	public int getSize() {
		return size;
	}

	public void setSize(int size) {
		this.size = size;
	}

	private int size = 0;

	// constructor
	public DoublyLinkedList() {
		this.head = null;
		this.tail = null;
	}

	public boolean isEmpty() {
		return head == null;
	}

	/**
     * insertAtFirst
     * @param data
     */
	public void insertAtFirst(int data) {
		dllNode newDllNode = new dllNode(data);
		// for the first element, head and tail both will point to it.
		if (isEmpty()) {
			tail = newDllNode;
		} else {
			head.prev = newDllNode;
		}
		newDllNode.next = head;
		head = newDllNode;
		size++;
	}

	/**
     * insertAtLast
     * @param data
     */
	public void insertAtLast(int data) {
		dllNode newDllNode = new dllNode(data);
		// for the first element, head and tail both will point to it.
		if (isEmpty()) {
			head = newDllNode;
		} else {
			tail.next = newDllNode;
			newDllNode.prev = tail;
		}
		tail = newDllNode;
		size++;
	}

	/**
     *
     * @param data
     * @param index
     */
	public void insertAtIndex(int data, int index) {
		if (index >= 0 && index <= size) {
			dllNode newDllNode = new dllNode(data);
			dllNode current = head;
			if (index == 0) {
				insertAtFirst(data);
			} else if (index == size) {
				insertAtLast(data);
			} else {
				for (int j = 0; j < index && current.next != null; j++) {
					current = current.next;
				}
				newDllNode.next = current;
				current.prev.next = newDllNode;
				newDllNode.prev = current.prev;
				current.prev = newDllNode;
				size++;
			}
		} else {
			System.out.println("Index " + index + " not valid for linked list of size " + size);
		}
	}

	/**
     *
     * @return
     */
	public void deleteFirstNode() {
		if (head == null) {
			System.out.println("List is empty");
		}
		dllNode first = head;
		if (head.next == null) {
			tail = null;
		} else {
			head.next.prev = null;
		}
		head = head.next;
		size--;
	}

	/**
     *
     * @return
     */
	public void deleteLastNode() {
		if (tail == null) {
			throw new RuntimeException("List is empty");
		}
		dllNode last = tail;
		if (head.next == null) {
			head = null;
		} else {
			tail.prev.next = null;
		}
		tail = tail.prev;
		size--;
	}

	/**
     *
     * @param index
     * @return
     */
	public void deleteAtIndex(int index) {
		if (index + 1 >= 0 && index + 1 <= size) {
			dllNode current = head;
			//remove at the start
			if (index == 0) {
				deleteFirstNode();
			}
			// remove at last
			else if (index == size - 1) {
				deleteLastNode();
			} else {
				for (int j = 0; j < index && current.next != null; j++) {
					current = current.next;
				}
				current.prev.next = current.next;
				current.next.prev = current.prev;
				size--;
			}
		} else {
			System.out.println("Index " + index + " not valid for linked list of size " + size);
		}
	}

	/**
     * Display forward
     */
	public void displayFirstToLast() {
		dllNode current = head;
		System.out.print("The doubly linked list is --> ");
		while (current != null) {
			current.displayData();
			current = current.next;
		}
		System.out.println("");
	}

	/**
     * Display backwards
     */
	public void displayLastToFirst() {
		dllNode current = tail;
		System.out.print("The doubly linked list is --> ");
		while (current != null) {
			current.displayData();
			current = current.prev;
		}
		System.out.println("");
	}

	/**
     * Search the given node in doubly linked list
     * @param data
     */
	public void searchNode(int data) {
		//Node current will point to head
		dllNode current = head;
		if (head == null) {
			System.out.println("Doubly linked list is empty");
			return;
		}
		System.out.println("Search node with data " + data + " in doubly linked list");
		while (current != null) {
			if (current.data == data) {
				System.out.println("node with data " + data + " found");
				break;
			}
			current = current.next;
		}
	}

	public static void main(String[] args) {
		DoublyLinkedList list = new DoublyLinkedList();
		list.insertAtFirst(1);
		list.displayFirstToLast();
		System.out.println("size :" + list.getSize());
		list.displayFirstToLast();
		list.insertAtFirst(2);
		list.displayFirstToLast();
		System.out.println("size :" + list.getSize());
		list.insertAtLast(3);
		list.displayFirstToLast();
		System.out.println("size :" + list.getSize());
		list.displayFirstToLast();
		list.insertAtLast(4);
		System.out.println("size :" + list.getSize());
		list.displayFirstToLast();
		list.insertAtIndex(5, 3);
		System.out.println("size :" + list.getSize());
		System.out.println("Linked list backward traversal");
		list.displayLastToFirst();
		System.out.println("Linked list forward traversal");
		list.displayFirstToLast();

		list.deleteAtIndex(2);
		System.out.println("Node at index 2 has been deleted");
		System.out.println("size :" + list.getSize());
		list.displayFirstToLast();

		list.deleteFirstNode();
		System.out.println("First Node  has been deleted");
		System.out.println("size :" + list.getSize());
		list.displayFirstToLast();

		list.deleteLastNode();
		System.out.println("Last Node  has been deleted");
		System.out.println("size :" + list.getSize());
		list.displayFirstToLast();

		list.searchNode(5);
		list.displayFirstToLast();
	}
}