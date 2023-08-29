// operations possible in TRIE
//     1. Insert();  --> O(1)
//     2. Delete();  --> O(1)
//     3. Search();  --> O(1)

#include <bits/stdc++.h>
using namespace std;


// Defining the structure of the class
class TrieNode{
    
    public :
    
    char data;
    bool isend;
    TrieNode *children[26];


    // constructor
    TrieNode(char ch)
    {
        data = ch;
        for(int i=0;i<26;i++)
        {
            children[i] = NULL;
        }
        isend = false;
    }
};


class Trie{
   
   public: 

   TrieNode* root;

   Trie(){
    root = new TrieNode('\0');
   }

//// SEARCH FUNCTION USING RECURSION BUT TC WOULD BE O(l);
   void insertUntill(TrieNode* root,string word)
   {
      if(word.size()==0)
      {
        root->isend=true;
        return;
      }

      int index = word[0]-'a';
      TrieNode* child;
      if(root->children[index]!=NULL)
      {
        child = root->children[index];
      }
      else{
        child = new TrieNode(word[0]);
        root->children[index] = child;
      }

      //call recursion
      insertUntill(child,word.substr(1));
   }

   void insert(string word)
   {
       insertUntill(root,word);
       cout<<"String added to trie successfully"<<endl;
       return;
   }

//// SEARCH FUNCTION USING RECURSION BUT TC WOULD BE O(l) 
   bool searchUntill(TrieNode* root,string word)
   {
    if(word.size()==0)
    {
        return root->isend;
    }

    int index = word[0]-'a';
    TrieNode* child;

    if(root->children[index]!=NULL)
    {
        child = root->children[index];
    }
    else{
        return false;
    }

    return searchUntill(child,word.substr(1));
   }

   bool search(string word)
   {
     return searchUntill(root,word);
   }


//// REMOVE FUNCTION USING RECURSION
    void removeUntill(TrieNode* root,string word)
    {
        if(word.size()==0)
        {
            root->isend=false;
            return;
        }

        int index = word[0]-'a';
        TrieNode* child;

        if(root->children[index]!=NULL)
        {
            child = root->children[index];
        }
        else{
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        removeUntill(child,word.substr(1));
    }
    
    void remove(string word)
    {
        removeUntill(root,word);
        cout<<"Word has been successfully removed"<<endl;
        return;
    }

};




int main()
{
    Trie *t = new Trie();

    t->insert("abcd");
    t->insert("abef");
    t->insert("asdt");

    cout<<t->search("abcd")<<endl;
    cout<<t->search("asdt")<<endl;
    cout<<t->search("agdt")<<endl;

    t->remove("asdt");

    cout<<t->search("asdt")<<endl;





    return 0;
}