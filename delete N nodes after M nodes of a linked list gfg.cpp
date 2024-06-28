// class Solution
// {
//     public:
//     void linkdelete(struct Node  *head, int M, int N)
//     {
//         if(!head) return;
//         Node* it=head;
        
//         //mth node tak pahuchne ke liye
//         for(int i=0;i<M-1;i++){
//             //if M nodes are not there
//             if(!it) return;
//             it=it->next;
//         }
        
//         // now it is at the mth node
//         if(!it) return;
        
//         Node* mthNode=it;
//         it=it->next;
        
//         for(int i=0;i<N;i++){
//             if(!it) break;
//             Node*temp=it->next;
//             delete it;
//             it=temp;
//         }
        
//         mthNode->next=it;
        
//         linkdelete(it,M,N);
//     }
// };