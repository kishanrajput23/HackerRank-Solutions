from abc import ABCMeta, abstractmethod
class Book(object, metaclass=ABCMeta):
    def __init__(self,title,author):
        self.title=title
        self.author=author   
    @abstractmethod
    def display(): pass

class MyBook(Book):
    def __init__(self,title,author,price):
        self.price = price ;
        super(MyBook,self).__init__(title,author);
        
        
    def display(self):
        print("Title:",self.title)
        print("Author:",self.author)
        print("Price:",self.price)

title=input()
author=input()
price=int(input())
new_novel=MyBook(title,author,price)
new_novel.display()