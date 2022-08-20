#include <stdio.h>


struct ListNode {
    int val;
    struct ListNode *next;
};    



/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
struct ListNode** splitListToParts(struct ListNode* head, int k, int* returnSize){
    /*判断head数组长度和待划分的组k之间的大小关系*/
    int length=sizeof(head)/sizeof(head[0]);/*如何确定head数组长度*/
    ListNode * 
    if(length<k){
        /*每个都是1个单独成[]输出。差值k-length用空的[]补齐*/
        return head;
    }

    else{
        /*每一个框都是N/k个,在第一个[]里补齐上N%k个*/
    }
    
}

int main(){
    int head = [1,2,3];
    int k = 5;
    splitListToParts(head,k);
    return 0;
}

class Solution{
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k){
        vector<ListNode *> ans(k);
        ListNode *curr = head, *temp, *next;
        int n=0;
        while(curr){
            curr = curr->nextl
            n++;
        }
        curr = head;
        int width = n/k, extra = n%k;
        for(int i=0;i<k;i++){
            temp = curr;
            for(int j=1; j<width+(i<extra?1:0);j++){
                if(curr) curr = curr->next;
            }
            if(curr){
                next = curr->next;
                curr->next = NULL;
                curr = next;
            }
            ans[i] = temp;
        }
        return ans;
    }

}