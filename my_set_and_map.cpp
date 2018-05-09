template <typename TKey>
class Set : public set<TKey> {
public:
    inline bool has(const TKey& key) const {
        return this->find(key) != this->end();
    }
};

template <typename TKey, typename TValue>
class Map : public map<TKey, TValue> {
public:
    inline bool has(const TKey& key) const {
        return this->find(key) != this->end();
    }
};