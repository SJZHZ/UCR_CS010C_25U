template< class Item > 
class pq_zero {
private:
  typedef int indx;  // index with heap
  vector<Item> heap; // The heap expands/shrinks to fit data
  map<Item,indx> index;  // records each Item's place in heap
  map<Item,float> priority; // records each Item's priority
  void percolate_up( indx i ); 
  void percolate_down( indx i );
public: 
  // These use the min-heap functions above.
  int size( ) const;
  bool empty( ) const;
  const Item& front( ) const;
  void pop( );
  void push( const Item& w, float prio );
};

template <class Item>
int pq_zero<Item>::size( ) const {
  return heap.size( );
}

template <class Item>
bool pq_zero<Item>::empty( ) const {
  return heap.empty( );
}

template <class Item>
const Item& pq_zero<Item>::front( ) const {
  return heap.front( );
}

template <class Item>
void pq_zero<Item>::percolate_up( indx i ) {
  // TODO
}
