int intersectPoint(Node* head1, Node* head2)
{
    map<Node*,bool> m;
    while(head1){
        m[head1]=true;
        head1=head1->next;
    }
    while(head2){
        if(m[head2]){
            return head2->data;
        }
        head2=head2->next;
    }
    return -1;
}


