# Library Management System - User Stories

## Actors

### Library Staff

- [ ] As a Librarian, I can add a book to the system
- [ ] As a Librarian, I can search for a book
- [ ] As a Librarian, I can mark book as reserved or not reserved
- [ ] As a Librarian, I can modify a book's information
- [ ] ?? As a Librarian, I can lend a book to list of users
- [ ] As a Librarian, I can authorize a pending membership (eg: accept application)
- [ ] As a Librarian, I can revoke membership from a member
- [ ] As a Librarian, I can set a book's condition as damaged which can optionally add a fine to a member
- [ ] As a Librarian, I can set a book's condition as lost which will add a fine to a member

### User: Guest (Unauthenticated User)

- [ ] As a Guest, I can search for a book
- [ ] As a Guest, I can apply for membership
  - upon signup, guest will not be a member until a Library Staff authorizes the application
  - application pending state
- [ ] As a Guest, I can return a book that either I have borrowed or anyone else
  - Authorization/authorization is not required for returning books
- [ ] As a Guest, I can
- [ ] As a Guest, I can
- [ ] As a Guest, I can

### User: Member (Authenticated/Authorized User)

- [ ] As a Member, I can search for a book
- [ ] As a Member, I can borrow a book
- [ ] As a Member, I can reserve/unreserve a book
- [ ] As a Member, I can request extension on a borrowed book through
- [ ] As a Member, I can pay a fine (if there are any)
- [ ] As a Member, I cannot pay a fine if there isn't any
- [ ] As a Member, I cannot borrow books if I owe more than \$10
- [ ] As a Member, I cannot borrow more than 10 books at a time

### Supplier

- [ ] As a Supplier, I can search for a book
- [ ] As a Supplier, I can sell a book
- [ ] As a Supplier, I can match lost books that they have in stock in order to facilitate lookup and sale
- [ ] As a Supplier, I can match damaged books that they have in stock to facilitate lookup and sale
- [ ] As a Supplier, I can restock all damaged and lost books that they have available with one click
