# STL Cheat Sheet

## Containers

| Container | Key trait | Common APIs |
| --- | --- | --- |
| `std::array` | Fixed-size contiguous array | `operator[]`, `size()`, `fill(value)` |
| `std::vector` | Resizable contiguous array | `operator[]`, `push_back(value)`, `pop_back()`, `reserve(n)` |
| `std::deque` | Random access and constant-time push/pop at both ends | `operator[]`, `push_front(value)`, `push_back(value)`, `pop_front()`, `pop_back()` |
| `std::list` | Typically a doubly linked list with constant-time insertion at a known position | `insert(pos, value)`, `erase(pos)`, `splice(pos, other)` |
| `std::set` | Sorted unique keys, typically a red-black tree | `insert(key)`, `contains(key)`, `lower_bound(key)`, `erase(key)` |
| `std::map` | Sorted key–value pairs with unique keys, typically a red-black tree | `operator[]`, `find(key)`, `contains(key)`, `lower_bound(key)` |
| `std::unordered_set` | Hash table of unique keys with average O(1) lookup | `insert(key)`, `contains(key)`, `erase(key)` |
| `std::unordered_map` | Hash table of key–value pairs with average O(1) lookup | `operator[]`, `find(key)`, `contains(key)`, `erase(key)` |
| `std::stack` | Last in, first out (LIFO) | `push(value)`, `pop()`, `top()` |
| `std::queue` | First in, first out (FIFO) | `push(value)`, `pop()`, `front()`, `back()` |
| `std::priority_queue` | Binary heap with the largest element on top by default | `push(value)`, `pop()`, `top()` |

## Algorithms

| API | Header | Use | Returns |
| --- | --- | --- | --- |
| `std::sort` | `<algorithm>` | Sort a range in place | `void` |
| `std::nth_element` | `<algorithm>` | Place the element that would be at `nth` after sorting and partition around it | `void` |
| `std::lower_bound` | `<algorithm>` | Find the first element `>= value` in a sorted range | Iterator or `last` |
| `std::upper_bound` | `<algorithm>` | Find the first element `> value` in a sorted range | Iterator or `last` |
| `std::binary_search` | `<algorithm>` | Check whether a sorted range contains a value | `bool` |
| `std::find` | `<algorithm>` | Find the first element equal to a value | Iterator or `last` |
| `std::count` | `<algorithm>` | Count elements equal to a value | Match count (`difference_type`) |
| `std::min_element` | `<algorithm>` | Find the first minimum element | Iterator or `last` if empty |
| `std::max_element` | `<algorithm>` | Find the first maximum element | Iterator or `last` if empty |
| `std::reverse` | `<algorithm>` | Reverse a range in place | `void` |
| `std::fill` | `<algorithm>` | Set every element in a range to a value | `void` |
| `std::unique` | `<algorithm>` | Keep one element from each group of consecutive equal elements | Iterator to the new logical end |
| `std::remove` | `<algorithm>` | Move elements unequal to a value to the front | Iterator to the new logical end |
| `std::next_permutation` | `<algorithm>` | Advance to the next lexicographic permutation, wrapping to the first | `bool` (`false` on wraparound) |
| `std::accumulate` | `<numeric>` | Combine a range starting at `init`, using addition by default | Result with the type of `init` |
| `std::iota` | `<numeric>` | Fill a range with successive values starting at a given value | `void` |

## Strings

| API | Use | Returns |
| --- | --- | --- |
| `s.size()` | Count characters | `std::string::size_type` |
| `s.empty()` | Check whether the string is empty | `bool` |
| `s.substr(pos, count)` | Copy up to `count` characters starting at `pos` | `std::string` |
| `s.find(text, pos)` | Find the first match at or after `pos` (default `0`) | Index or `std::string::npos` |
| `s.rfind(text)` | Find the last match | Index or `std::string::npos` |
| `s.starts_with(prefix)` | Check for a prefix | `bool` |
| `s.ends_with(suffix)` | Check for a suffix | `bool` |
| `s.contains(text)` | Check whether a substring occurs anywhere | `bool` |
| `s.append(text)` | Append text to the end | `std::string&` |
| `s.push_back(ch)` | Append one character | `void` |
| `s.pop_back()` | Remove the last character | `void` |
| `s.erase(pos, count)` | Remove up to `count` characters starting at `pos` | `std::string&` |
| `s.replace(pos, count, text)` | Replace up to `count` characters starting at `pos` | `std::string&` |
| `std::stoi(s)` | Parse a leading integer | `int` |
| `std::stoll(s)` | Parse a leading integer | `long long` |
| `std::to_string(value)` | Convert a number to text | `std::string` |
