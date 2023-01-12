numbers = [1, 5, 2, 4, 3, 10, 6 ]
numbers.sort()
print(numbers)

numbers.sort(reverse=True)
print(numbers)

class MyLooper:
    def __init__(self, start, stop):
        self.start = start
        self.stop = stop
        self.current = start

    def __iter__(self):
        return self

    def __next__(self):
        if self.current < self.stop:
            current = self.current
            self.current += 1
            return current
        else:
            raise StopIteration
           
for i in MyLooper(0, 10):
    print(i)
