/* read_grades.cpp
   CSC 116 Fall 2018 - Lab 3
*/
#include <iostream>
#include <vector>
#include <algorithm>

/* compute_mean(V)
 * Given a vector V containing ints, return the average
 * of all elements in V. (Note that the average will be a
 * float, not an int).
 * If the vector V contains no elements, the result must be 0.
 */
float compute_mean(std::vector<int> const &V) {
    /* your code here */
    return 0.f;
}

/* compute_median(V)
 * Given a vector V containing ints, return the median of all
 * elements in V.
 *
 * Recall that the median of a sequence is the value that
 * would appear in the "middle" of the sorted version of the sequence.
 * If the sequence has an odd number of elements, the median
 * will be the single value in the middle. If the sequence
 * has an even number of elements, the median will be the
 * average of the two values in the middle.
 *
 * For example, the median of the sequence {3, 6, 2, 1, 0} is 2,
 * and the median of the sequence {7, 9, 2, 3, 1, 4} is 3.5.
 *
 * If the vector V contains no elements, the result must be 0.
 */
float compute_median(std::vector<int> const &V) {
    /* your code here */
    return 0.f;
}

/* delete_zeros(V)
 * Given a vector V containing ints, delete all
 * zero values from V.
 */
void delete_zeros(std::vector<int> &V) {
    /* your code here */
    /* hint: create a new vector and push_back non-zero elements */
}

/* print_vector(V)
 * Print the elements of the vector V, does 
 * not print a new line
 */
void print_vector(std::vector<int> const &V) {
    for(auto x : V) {
        std::cout << x << ' ';
    }
}

int main() {
    
    // Read in grades and push_back into vector
    std::vector<int> grades{};
    int n{};
    while(std::cin >> n) {
        grades.push_back(n);
    }

    std::cout << "Read " << grades.size() << " grades" << std::endl;
    std::cout << "Original grades: ";
    print_vector(grades);
    std::cout << std::endl;

    std::cout << "Average: " << compute_mean(grades) << std::endl;
    std::cout << "Median: " << compute_median(grades) << std::endl;

    // Delete all of the zero grades from the vector
    delete_zeros(grades);

    std::cout << "Grades with zeros removed: ";
    print_vector(grades);
    std::cout << std::endl;

    std::cout << "Average (zeros excluded): " << compute_mean(grades) << std::endl;
    std::cout << "Median (zeros excluded): " << compute_median(grades) << std::endl;

    return 0;
}