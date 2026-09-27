

typedef class LRUCache : Cache
{
    public:
        LRUCache(int capacity) { cp = capacity; tail = NULL; head = NULL; }
         
        void set(int key, int value)
        {
            Node* placeholder = NULL;
            
            // Update if found
            if (mp.find(key) != mp.end())
            {
                placeholder = mp[key];
                placeholder->value = value;
                
                // Stitching linked list
                if (placeholder->prev != NULL)
                    placeholder->prev->next = placeholder->next;
                
                if (placeholder->next != NULL)
                    placeholder->next->prev = placeholder->prev;
            } else // if not found
            {
                placeholder = new Node(NULL, NULL, key, value);
                mp[key] = placeholder;
            }
            
            // Updating head as the latest update/addition
            if (head != NULL) head->prev = placeholder;
            head = placeholder;
            
            if (tail == NULL) tail = placeholder;
            
            if (mp.size() > cp)
            {
                placeholder = tail;
                tail = tail->prev;
                tail->next = NULL;
                
                mp.erase(placeholder->key);
                
                delete placeholder;
            }
        }
        
        int get(int key)
        {
            if (mp.find(key) == mp.end()) return -1;
            
            Node* placeholder = mp[key];
            
            if (placeholder->prev != NULL)
                placeholder->prev->next = placeholder->next;
            
            if (placeholder->next != NULL)
                placeholder->next->prev = placeholder->prev;
            
            if (head != NULL)
                head->prev = placeholder;
            
            head = placeholder;
            return placeholder->value;
        }
} LRUCache;



