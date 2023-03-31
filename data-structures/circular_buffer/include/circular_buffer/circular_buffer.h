#ifndef CIRCULAR_BUFFER_H
#define CIRCULAR_BUFFER_H

#include <vector>
#include <optional>

namespace buffers
{
    template <typename T>
    class CircularBuffer
    {
    public:
        explicit CircularBuffer(std::size_t n)
          : _buffer(n), _start{0}, _end{0}
        {
        }
        
        bool write(T const& value)
        {
            if (_start == _end)
            {
                return false;
            }

            _buffer[_end] = value;
            _end = (_end + 1) % _buffer.size();
            return true;
        }

        std::optional<T> read()
        {
            if (_start == _end)
            {
                return std::nullopt;
            }

            // this makes this non-thread-safe!
            auto const ret_position = _start;
            _start = (_start + 1) % _buffer.size();
            return _buffer[ret_position];
        }

    private:    
        std::vector<T> _buffer;
        std::size_t _start; // points to first element
        std::size_t _end; // means position after last
    };
} // namespace buffers

#endif // CIRCULAR_BUFFER_H
