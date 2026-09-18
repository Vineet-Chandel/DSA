
/*
    ============================================================
                    STABLE SORT vs UNSTABLE SORT
    ============================================================


    When we sort elements, there can be duplicate values.

    For example:

        {5A, 3, 5B, 2}

    Here:

        5A and 5B have the SAME sorting key (5)

    But they can be different objects/data.

    The important question is:

        After sorting, will 5A still appear before 5B?

    This is where STABLE and UNSTABLE sorting comes in.


    ============================================================
                        STABLE SORT
    ============================================================

    A sorting algorithm is called STABLE if:

        The relative order of elements having the same key
        is preserved after sorting.


    Example:

        BEFORE SORT:

            {5A, 3, 5B, 2}

        AFTER STABLE SORT:

            {2, 3, 5A, 5B}


    Notice:

        Before sorting:

            5A comes before 5B

        After sorting:

            5A still comes before 5B


    Therefore:

        STABLE SORT
            ->
        Preserves the relative order of equal elements.


    ============================================================
                    REAL-WORLD EXAMPLE
    ============================================================

    Suppose we have students:

        Name       Marks
        ----------------
        A          90
        B          80
        C          90
        D          70


    First, students are in alphabetical order:

        A(90), B(80), C(90), D(70)


    Now we sort by MARKS using a stable sorting algorithm:

        D(70), B(80), A(90), C(90)


    A and C both have 90 marks.

    Before sorting:

        A comes before C

    After sorting:

        A still comes before C


    This is the property of a STABLE SORT.


    ============================================================
                    UNSTABLE SORT
    ============================================================

    A sorting algorithm is called UNSTABLE if:

        It does NOT guarantee that the relative order of
        equal elements will be preserved.


    Example:

        BEFORE:

            {5A, 3, 5B, 2}


        An unstable sorting algorithm could produce:

            {2, 3, 5B, 5A}


    Notice:

        Before:

            5A -> 5B

        After:

            5B -> 5A


    The relative order of equal elements changed.


    Therefore:

        UNSTABLE SORT
            ->
        Does NOT guarantee preservation of equal elements'
        relative order.


    ============================================================
                    IMPORTANT POINT
    ============================================================

    "Unstable" does NOT necessarily mean that equal elements
    WILL change their order.

    It means:

        The algorithm does NOT GUARANTEE that their order
        will remain the same.


    So an unstable algorithm may sometimes preserve the order
    by coincidence.

    But we cannot depend on it.


    ============================================================
                    BUBBLE SORT
    ============================================================

    Bubble Sort is generally considered a:

        STABLE SORT


    Why?

    Consider:

        5A, 5B

    The comparison is:

        if (arr[j] > arr[j + 1])


    Notice that we use:

        >

    and NOT:

        >=


    Therefore, when:

        arr[j] == arr[j + 1]

    no swap occurs.


    So:

        5A, 5B

    remains:

        5A, 5B


    Their relative order is preserved.


    ============================================================
                WHY >= CAN MAKE A DIFFERENCE
    ============================================================

    Stable version:

        if (arr[j] > arr[j + 1])
        {
            swap(arr[j], arr[j + 1]);
        }


    Unstable behaviour can be introduced if we use:

        if (arr[j] >= arr[j + 1])
        {
            swap(arr[j], arr[j + 1]);
        }


    Why?

    Because now EQUAL elements can also be swapped.


    Example:

        5A, 5B

    Since:

        5A >= 5B

    is true,

    they may be swapped:

        5B, 5A


    Therefore, their original relative order is lost.


    ============================================================
                STABLE vs UNSTABLE — COMPARISON
    ============================================================

        STABLE SORT

            -> Preserves relative order of equal elements.

            -> Predictable ordering of equal elements.

            -> Useful when sorting objects using multiple
               criteria.


        UNSTABLE SORT

            -> Does not guarantee relative order of equal
               elements.

            -> Equal elements may change their order.

            -> Can sometimes be faster or use less memory,
               depending on the algorithm.


    ============================================================
                        EXAMPLE
    ============================================================

    Suppose we have:

        {A(10), B(20), C(10), D(30)}


    Sort by the number.


    STABLE SORT:

        {A(10), C(10), B(20), D(30)}

              ^
              |
        A comes before C
        and remains before C.


    UNSTABLE SORT:

        {C(10), A(10), B(20), D(30)}

              ^
              |
        A and C changed their relative order.


    ============================================================
                COMMON SORTING ALGORITHMS
    ============================================================


    Generally STABLE:

        -> Bubble Sort
        -> Insertion Sort
        -> Merge Sort


    Generally UNSTABLE:

        -> Selection Sort
        -> Quick Sort
        -> Heap Sort


    NOTE:

        Stability can depend on the exact implementation.

        Therefore, when implementing an algorithm yourself,
        check whether the implementation actually preserves
        the relative order of equal elements.


    ============================================================
                    WHEN IS STABILITY USEFUL?
    ============================================================

    Stability is especially useful when sorting objects by
    MULTIPLE attributes.


    Example:

        Students have:

            Name
            Marks


    Suppose students are first sorted by:

        Name


    Then we perform a stable sort by:

        Marks


    Students with the same marks will remain in their
    previous name-based order.


    This allows us to perform multiple sorting operations
    while preserving previous ordering information.


    ============================================================
                    EASY WAY TO REMEMBER
    ============================================================

    STABLE:

        Equal elements stay in the SAME relative order.


        Example:

            Before:   A  B

            After:    A  B


    UNSTABLE:

        Equal elements are ALLOWED to change their order.


        Example:

            Before:   A  B

            After:    B  A


    ============================================================
                        ONE-LINE DEFINITION
    ============================================================

    STABLE SORT:

        "Preserves the relative order of equal elements."


    UNSTABLE SORT:

        "Does not guarantee the relative order of equal
         elements."


    ============================================================
                        KEY TAKEAWAY
    ============================================================

        STABLE
            =
        Equal elements maintain their relative order.


        UNSTABLE
            =
        Equal elements may change their relative order.


    Remember:

        STABLE  -> ORDER PRESERVED
        UNSTABLE -> ORDER NOT GUARANTEED


    ============================================================
*/