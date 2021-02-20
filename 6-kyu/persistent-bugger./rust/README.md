Write a function, `persistence`, that takes in a positive parameter `num` and returns its multiplicative persistence, which is the number of times you must multiply the digits in `num` until you reach a single digit.

For example:

```c
persistence(39) === 3;
//     because 3*9 = 27, 2*7 = 14, 1*4 = 4
//         and 4 has only one digit

persistence(999) === 4;
//     because 9*9*9 = 729, 7*2*9 = 126, 1*2*6 = 12,
// and finally 1*2 = 2
                
persistence(4) === 0;
//     because 4 is already a one-digit number
```
```swift
 persistence(for: 39) === 3 // because 3*9 = 27, 2*7 = 14, 1*4=4
                       // and 4 has only one digit
                 
 persistence(for: 999) === 4 // because 9*9*9 = 729, 7*2*9 = 126,
                        // 1*2*6 = 12, and finally 1*2 = 2
                  
 persistence(for: 4) === 0 // because 4 is already a one-digit number
```
```javascript
 persistence(39) === 3 // because 3*9 = 27, 2*7 = 14, 1*4=4
                       // and 4 has only one digit
                 
 persistence(999) === 4 // because 9*9*9 = 729, 7*2*9 = 126,
                        // 1*2*6 = 12, and finally 1*2 = 2
                  
 persistence(4) === 0 // because 4 is already a one-digit number
```
```php
persistence(39) === 3; // because 3 * 9 = 27, 2 * 7 = 14, 1 * 4 = 4 and 4 has only one digit
persistence(999) === 4; // because 9 * 9 * 9 = 729, 7 * 2 * 9 = 126, 1 * 2 * 6 = 12, and finally 1 * 2 = 2
persistence(4) === 0; // because 4 is already a one-digit number
```
```coffeescript
 persistence(39) === 3 // because 3*9 = 27, 2*7 = 14, 1*4=4
                       // and 4 has only one digit
                 
 persistence(999) === 4 // because 9*9*9 = 729, 7*2*9 = 126,
                        // 1*2*6 = 12, and finally 1*2 = 2
                  
 persistence(4) === 0 // because 4 is already a one-digit number
```
```csharp
 persistence(39) == 3 // because 3*9 = 27, 2*7 = 14, 1*4=4
                      // and 4 has only one digit
                 
 persistence(999) == 4 // because 9*9*9 = 729, 7*2*9 = 126,
                       // 1*2*6 = 12, and finally 1*2 = 2
                  
 persistence(4) == 0 // because 4 is already a one-digit number
```
```fsharp
persistence 39 = 3  // because 3*9 = 27, 2*7 = 14, 1*4=4
                    // and 4 has only one digit
               
persistence 999 = 4 // because 9*9*9 = 729, 7*2*9 = 126,
                    // 1*2*6 = 12, and finally 1*2 = 2
                
persistence 4 = 0   // because 4 is already a one-digit number
```
```java
 persistence(39) == 3 // because 3*9 = 27, 2*7 = 14, 1*4=4
                      // and 4 has only one digit
                 
 persistence(999) == 4 // because 9*9*9 = 729, 7*2*9 = 126,
                       // 1*2*6 = 12, and finally 1*2 = 2
                  
 persistence(4) == 0 // because 4 is already a one-digit number
```
```clojure
 (persistence 39) ; returns 3, because 3*9=27, 2*7=14, 1*4=4
                  ; and 4 has only one digit
                  
 (persistence 999) ; returns 4, because 9*9*9=729, 7*2*9=126,
                   ; 1*2*6=12, and finally 1*2=2

 (persistence 4) ; returns 0, because 4 is already a one-digit number
```
```python
persistence(39) => 3  # Because 3*9 = 27, 2*7 = 14, 1*4=4
                       # and 4 has only one digit.
                 
persistence(999) => 4 # Because 9*9*9 = 729, 7*2*9 = 126,
                       # 1*2*6 = 12, and finally 1*2 = 2.
                  
persistence(4) => 0   # Because 4 is already a one-digit number.
```
```haskell
 persistence 39 -- returns 3, because 3*9=27, 2*7=14, 1*4=4
                -- and 4 has only one digit
                  
 persistence 999 -- returns 4, because 9*9*9=729, 7*2*9=126,
                 -- 1*2*6=12, and finally 1*2=2

 persistence 4 -- returns 0, because 4 is already a one-digit number
```
```ruby
 persistence(39) # returns 3, because 3*9=27, 2*7=14, 1*4=4
                 # and 4 has only one digit
                  
 persistence(999) # returns 4, because 9*9*9=729, 7*2*9=126,
                  # 1*2*6=12, and finally 1*2=2

 persistence(4) # returns 0, because 4 is already a one-digit number
```
```coffeescript
 persistence(39) # returns 3, because 3*9=27, 2*7=14, 1*4=4
                 # and 4 has only one digit
                  
 persistence(999) # returns 4, because 9*9*9=729, 7*2*9=126,
                  # 1*2*6=12, and finally 1*2=2

 persistence(4) # returns 0, because 4 is already a one-digit number
```
```elixir
 persistence(39) # returns 3, because 3*9=27, 2*7=14, 1*4=4
                 # and 4 has only one digit
                  
 persistence(999) # returns 4, because 9*9*9=729, 7*2*9=126,
                  # 1*2*6=12, and finally 1*2=2

 persistence(4) # returns 0, because 4 is already a one-digit number
```
```kotlin
 persistence(39) == 3 // because 3*9 = 27, 2*7 = 14, 1*4=4
                       // and 4 has only one digit
                 
 persistence(999) == 4 // because 9*9*9 = 729, 7*2*9 = 126,
                        // 1*2*6 = 12, and finally 1*2 = 2
                  
 persistence(4) == 0 // because 4 is already a one-digit number
```
```scala
 // because 3*9 = 27, 2*7 = 14, 1*4=4 and 4 has only one digit:
 persistence(39) == 3

 // because 9*9*9 = 729, 7*2*9 = 126, 1*2*6 = 12, and finally 1*2 = 2
 persistence(999) == 4

 // because 4 is already a one-digit number:
 persistence(4) == 0
```
```julia
persistence(39) # returns 3, because 3*9=27, 2*7=14, 1*4=4
                # and 4 has only one digit
                
persistence(999) # returns 4, because 9*9*9=729, 7*2*9=126,
                 # 1*2*6=12, and finally 1*2=2

persistence(4) # returns 0, because 4 is already a one-digit number
```
```rust
persistence(39) // returns 3, because 3*9=27, 2*7=14, 1*4=4
                // and 4 has only one digit
                
persistence(999) // returns 4, because 9*9*9=729, 7*2*9=126,
                 // 1*2*6=12, and finally 1*2=2

persistence(4) // returns 0, because 4 is already a one-digit number
```
```prolog
persistence(39, 3) % because 3*9=27, 2*7=14, 1*4=4
                   % and 4 has only one digit
                
persistence(999, 4) % because 9*9*9=729, 7*2*9=126,
                    % 1*2*6=12, and finally 1*2=2

persistence(4, 0) % because 4 is already a one-digit number
```
