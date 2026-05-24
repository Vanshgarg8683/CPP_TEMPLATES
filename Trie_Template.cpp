class Node{
    public:
    Node* links[26];
    bool flag;

    Node(){
        for(int i=0;i<26;i++) links[i]=NULL;
        flag=false;
    }
    bool iscontain(char ch){
        return (links[ch-'a']!=NULL);
    }
    void put(char ch, Node* newnode){
        links[ch-'a']=newnode;
    }
    Node* next(char ch){
        return links[ch-'a'];
    }
    void setend(){
        flag=true;
    }
    bool isend(){
        return flag;
    }
};
class Trie {
public:
    Node* root;
    Trie() {
        root=new Node();
    }
    
    void insert(string word) {
        Node* node=root;
        for(int i=0;i<word.size();i++){
            if(!node->iscontain(word[i])){
                node->put(word[i], new Node());
            }
            node=node->next(word[i]);
        }
        node->setend();
    }
    
    bool search(string word) {
        Node* node=root;
        for(int i=0;i<word.size();i++){
            if(!node->iscontain(word[i])) return false;
            node=node->next(word[i]);
        }
        return node->isend();
    }
    
    bool startsWith(string word) {
        Node* node=root;
        for(int i=0;i<word.size();i++){
            if(!node->iscontain(word[i])) return false;
            node=node->next(word[i]);
        }
        return true;
    }
};
