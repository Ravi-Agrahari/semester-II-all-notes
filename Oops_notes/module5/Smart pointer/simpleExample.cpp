
/*

    std::unique_ptr:
     Manages a single instance exclusively. The object is deleted when the unique_ptr goes out of scope.
             unique_ptr<Resource> ptr = make_unique<Resource>();

    std::shared_ptr:
     Manages shared ownership of an object. The object is deleted when the last shared_ptr referencing it is destroyed.
            shared_ptr<Resource> ptr1 = make_shared<Resource>();

    std::weak_ptr: 
     Provides a way to reference an object managed by shared_ptr without affecting its lifetime. Useful for preventing circular references.
             weak_ptr<Resource> ptr = shared_ptr;

*/