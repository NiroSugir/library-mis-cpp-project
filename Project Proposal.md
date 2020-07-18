# Graphic Library Management System

> C++ Project – Individual Work - Niroshan Sugirtharatnam

## Project Proposal

> The proposal is to create an efficient supply-chain focused library management system to replace the catalog system in place. Although it will retain the same functionalities that allow Librarians to perform their duty, and Members to search for books, this application collects data that promotes the library’s growth using reader demand as guide.

> The goal of this project is to have a streamlined connection between the vendors and readers. By informing the supplier which books the members (and guests) are looking for, they can supply the library efficiently with only the books that are in demand at the time and prevent wasteful overstocking and promote maximal and efficient growth.

## Scope

> Create a singular application that will be used by all library staff, members, guests & book suppliers for all their interactions with the library.

> Books that are not in the system, will be added to a list of wanted books that suppliers can view and choose to supply.

> Suppliers can offer to add books that weren’t requested, but a Librarian must approve the purchase.

> Regular library requirements, such as late fees and fines for damaged/lost books. Members that fail to return books on time or have a too large a fine, will have their accounts placed on hold until they bring it current.

## System Requirements

> This application must be performant because it needs to be capable of running on any system. C++ is a perfect candidate because of this requirement.

> A graphical interface is necessary to keep it simple for users because not everyone will be versed or comfortable with the terminal.

> The application should be cross platform to ensure the widest reach and allow for maximal growth. It must feel natural to use on any of these platforms. This requires the use of native windows and GUI elements regardless of the host Operating System. Wxwidgets is a tried and tested cross platform GUI library for C++ that has proper documentation and is actively maintained.

> Network access must also be present to retrieve book details that are not in the library’s system. The application will use a public API to search for details about books and add them to the database.

> In order to ensure the growth of the application, adding features will be necessary in the future. All non-library and non-GUI related code must be Unit Tested to prevent regression.

## User Stories

### Guest (anyone not authenticated)

- [ ] As a Guest, I can search for a book and view detailed information about it (author, page numbers)
- [ ] As a Guest, I can apply for membership
  - upon signup, guest will not be a member until a Library Staff authorizes the application
  - application pending state
- [ ] As a Guest, I can apply to become a supplier

### Library Member

- [ ] As a Member, I can search for a book (see guest)
- [ ] As a Member, I can borrow a book
- [ ] As a Member, I can reserve/unreserve a book
- [ ] As a Member, I can request extension on a borrowed book
- [ ] As a Member, I can pay a fine (if there are any)
- [ ] As a Member, I cannot pay a fine if there isn't any
- [ ] As a Member, I cannot borrow books if I owe more than \$10
- [ ] As a Member, I cannot borrow more than 10 books at a time
- [ ] As a Member, I can change my profile details

### Library Staff

- [ ] As a Librarian, I can search for a book (see guest)
- [ ] As a Librarian, I can mark book as reserved or not reserved
- [ ] As a Librarian, I can manually add books to the system.
- [ ] As a Librarian, I can modify a book's information
- [ ] As a Librarian, I can authorize a pending membership (e.g.: accept application)
- [ ] As a Librarian, I can revoke membership from a member
- [ ] As a Librarian, I can set a book's condition as damaged which can optionally add a fine to a member
- [ ] As a Librarian, I can set a book's condition as lost which will add a fine to a member
- [ ] As a Librarian, I can manually update/remove a member’s fine
- [ ] As a Librarian, I can accept the purchase of a book offered by a supplier

### Supplier

- [ ] As a Supplier, I can search for a book
- [ ] As a Supplier, I can offer to sell a book
  - Pending a Librarian accepting the purchase
- [ ] As a Supplier, I can restock all damaged and lost books that they have available with one click
