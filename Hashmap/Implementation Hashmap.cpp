#include<iostream>
using namespace std;

template <typename V>
class MapNode{
    public:
    string key;
    V value;
    MapNode* next;
    
    MapNode(string key,V value)
    {
        this->key = key;
        this->value = value;
        next =  NULL;
    }
    ~MapNode()
    {
        delete next;
    }
};

template <typename V>
class ourmap{
    MapNode<V>** buckets;
    int size;
    int numbuckets;
    
    public:
    ourmap()
    {
        size = 0;
        numbuckets = 5;
        buckets = new MapNode<V>*[numbuckets];
        
        for(int i=0;i<numbuckets;i++)
        {
            buckets[i] = NULL;
        }
    }
    ~ourmap()
    {
         for(int i=0;i<numbuckets;i++)
        {
           delete buckets[i];
        }
        delete [] buckets;
    }
    
    int getsize()
    {
        return size;
    }
    
    V getValue(string key)
    {
        int bucketIndex = getbucketIndex(key);
        MapNode<V>* head = buckets[bucketIndex];
        while(head!= NULL)
        {
            if(head->key==key)
            {
                return head->value;
            }
            head = head>next;
        }
        return 0;
    }
    int getbucketIndex(string key)
    {
        int hashCode= 0;
        
        int currCoff = 1;
        for(int i=key.length()-1;i>=0;i--)
        {
            hashCode += currCoff;
            hashCode  = hashCode % numbuckets; // hashCode ko chota krega 
            currCoff *= 37;
            currCoff = currCoff % numbuckets;  // currCoff ko chota krega
        }
        return hashCode % numbuckets;
    }
    void insert(string key,V value)
    {
        int bucketIndex = getbucketIndex(key);
        MapNode<V>* head = buckets[bucketIndex];
        while(head != NULL)
        {
            if(head->key==key)
            {
                head->value = value;
                return;
            }
            head  = head->next;
        }
        
        MapNode<V>* newNode = new MapNode<V>(key,value);
        head = buckets[bucketIndex];
        newNode->next = head;
        buckets[bucketIndex]= newNode;
        size++;
    }
    
    V Remove(string key)
    {
        int bucketIndex = getbucketIndex(key);
        MapNode<V>*head = buckets[bucketIndex];
        MapNode<V>* prev  = NULL;
        
        while(head != NULL)
        {
            if(head->key==key)
            {
            if(prev==NULL)
            {
                buckets[bucketIndex]  = head->next;
            }
            else{
            prev->next = head->next;
            }        
            V value = head->value;
            head->next = NULL;
            delete head;
            size--;
            return value;
            }
            prev = head;
            head = head->next;
        }
        return 0;
    }
    
};


int main()
{
    // MapNode<string,int> mp;
    // mp.insert("abc",1);
    // cout<<mp.size()<<endl;
}
