class MyHashMap {
public:
int map[1000001];
    MyHashMap() 
    {
        for(int i=0;i<1000001;i++) map[i]=-1;
    }
    
    void put(int key, int value) {
        map[key] = value;
    }
    
    int get(int key) {
        if(map[key]==-1) return -1;
        else return map[key];
    }
    
    void remove(int key) {
        if(map[key]!=-1) map[key] = -1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */