/*#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node*next;

//constructor

    Node(int data){
        this ->data = data;
        this -> next = NULL;
    }



};
int main(){
    Node* node1 = new Node(10);
    cout << node1 ->data <<endl;
    cout<<node1->next<<endl;

    return 0;

}
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};*/

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

int main() {
    Node* head = NULL;

    // Insert at head
    Node* newNode1 = new Node(3);
    newNode1->next = head;
    head = newNode1;

    Node* newNode2 = new Node(2);
    newNode2->next = head;
    head = newNode2;

    Node* newNode3 = new Node(1);
    newNode3->next = head;
    head = newNode3;

    // Print the linked list
    Node* current = head;
    while (current != NULL) {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "NULL" << endl;

    return 0;
}

/*#include <iostream>
#include <vector>

using namespace std;

void findMissingAndRepeating(vector<int>& nums) {
    int n = nums.size();
    int expectedSum = n * (n + 1) / 2;
    int expectedSumOfSquares = n * (n + 1) * (2 * n + 1) / 6;

    int actualSum = 0;
    int actualSumOfSquares = 0;

    for(int i=0;i<num.size();i++){
        actualSum+=nums[i];
        actualSumOfSquares+=nums[i]*nums[i];
    }

    int sumDiff = expectedSum - actualSum;
    int sumOfSquaresDiff = expectedSumOfSquares - actualSumOfSquares;

    int sumDiffSq = sumDiff * sumDiff;
    int repeatingNum = (sumOfSquaresDiff - sumDiffSq) / sumDiff;

    int missingNum = sumDiff + repeatingNum;

    cout << "Missing Number: " << missingNum << endl;
    cout << "Repeating Number: " << repeatingNum << endl;
}

int main() {
    vector<int> nums = {2, 4, 1, 6, 5, 4}; // Modify this list as needed
    findMissingAndRepeating(nums);

    return 0;
}*/
