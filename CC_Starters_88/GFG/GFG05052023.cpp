class Solution{
public:
    int goodSubtrees(Node* node, int k){
        unordered_set<int> setA;
        return DFS(node, k, setA);
    }
    
    int DFS(Node* node, int k, unordered_set<int>& setB){
        if(!node) return 0;
        unordered_set<int> setC, setD;
        int leftSubtrees = DFS(node->left, k, setC);
        int rightSubtrees = DFS(node->right, k, setD);
        setB = setC;
        setB.insert(setD.begin(), setD.end());
        setB.insert(node->data);
        if(setB.size() > k) return leftSubtrees + rightSubtrees;
        else return leftSubtrees + rightSubtrees + 1;
    }
};
