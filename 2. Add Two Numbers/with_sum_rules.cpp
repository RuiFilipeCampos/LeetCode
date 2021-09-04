
#include <iostream>

using namespace std;



// Definition for singly-linked list.
struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) // initializer list ! 
     {
     }

     ListNode(int x) : val(x), next(nullptr)
     {
     }

     ListNode(int x, ListNode *next) : val(x), next(next) 
     {
     }
};
 

class Solution {
    public:
        ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
                
                // copying the start of the list, will be returning this
                ListNode *res = l1;
            
                int carry = 0;
                int sum;

                do{
                    sum = l1->val + l2->val + carry;
                    l1->val = sum % 10;
                    carry = (sum - l1->val)/10;

                    l1 = l1->next;
                    l2 = l2->next;

                    if (l1 == NULL){     // REACHED END OF `l1`
                        if (l2 != NULL){ // REACHED END OF `l2`
                            while (carry != 0){
                                l1->next = new ListNode;
                                l1 = l1->next;
                                l1->val = carry % 10;
                                carry -= l1->val;
                            }; return res;
                        };
                        
                    // swap
                    swap(l1, l2);
                    //continue;
                    
                    };

            
            
                    if (l2 == NULL){
                        
                        return res;
                    };
            
                }while(1);
        
        };
};


int main() {


    int x;
    cout << "Input anything to exit...";
    cin >> x;
    return 0;
};




