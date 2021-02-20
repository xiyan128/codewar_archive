We want to generate all the numbers of three digits where:

- the sum of their digits is equal to 10.

- their digits are in increasing order (the numbers may have two or more equal contiguous digits)

The numbers that fulfill the two above constraints are: ```118, 127, 136, 145, 226, 235, 244, 334```

Make a function that receives two arguments:

- the sum of digits value 

- the desired number of digits for the numbers

The function should output an array with three values: \[1,2,3\]

1 - the total number of possible numbers

2 - the minimum number

3 - the maximum number

The example given above should be:

```python
find_all(10, 3) == [8, 118, 334]
```
```ruby
find_all(10, 3) == [8, 118, 334]
```
```crystal
find_all(10, 3) == [8, 118, 334]
```
```javascript
findAll(10, 3) => [8, "118", "334"]
```
```haskell
findAll 10 3 -> ( 8, Just 118, Just 334 )
```
```java
HowManyNumbers.findAll(10, 3) == [8, 118, 334]   // as List<Integer>
```
```csharp
HowManyNumbers.FindAll(10, 3) == [8, 118, 334]   // as List<Integer>
```

If we have only one possible number as a solution, it should output a result like the one below:

```python
find_all(27, 3) == [1, 999, 999]
```
```ruby
find_all(27, 3) == [1, 999, 999]
```
```crystal
find_all(27, 3) == [1, 999, 999]
```
```javascript
findAll(27, 3) => [1, "999", "999"]
```
```haskell
findAll 27 3 -> ( 1, Just 999, Just 999 )
```
```java
HowManyNumbers.findAll(27, 3) == [1, 999, 999]
```
```csharp
HowManyNumbers.FindAll(27, 3) == [1, 999, 999]
```

If there are no possible numbers, the function should output the empty array.

```python
find_all(84, 4) == []
```
```ruby
find_all(84, 4) == []
```
```crystal
find_all(84, 4) == []
```
```javascript
findAll(84, 4) => []
```
```haskell
findAll 84 4 -> ( 0, Nothing, Nothing )
```
```java
HowManyNumbers.findAll(84, 4) == []
```
```csharp
HowManyNumbers.FindAll(84, 4) == []
```

The number of solutions climbs up when the number of digits increases.

```python
find_all(35, 6) == [123, 116999, 566666]
```
```ruby
find_all(35, 6) == [123, 116999, 566666]
```
```crystal
find_all(35, 6) == [123, 116999, 566666]
```
```javascript
findAll(35, 6) => [123, '116999', '566666']
```
```haskell
findAll 35 6 -> ( 123, Just 116999, Just 566666 )
```
```java
HowManyNumbers.findAll(35, 6) == [123, 116999, 566666]
```
```csharp
HowManyNumbers.FindAll(35, 6) == [123, 116999, 566666]
```

Features of the random tests:

* Number of tests: `112`
* Sum of digits value between `20` and `65`
* Amount of digits between `2` and `17`