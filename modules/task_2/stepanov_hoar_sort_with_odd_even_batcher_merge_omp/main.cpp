// Copyright 2018 Nesterov Alexander
#include <gtest/gtest.h>
#include <vector>
#include <algorithm>
#include "../../modules/task_2/stepanov_hoar_sort_with_odd_even_batcher_merge_omp/hoar_sort_with_odd_even_batcher_merge.h"
TEST(Sequential, Test_20) {
    const int col = 20;
    std::vector<float>* arr = create_random_vector(col);
    std::vector<float> cp(*arr);
    hoar_sort_with_batch_merge(&cp);
    hoar_sort_with_batch_merge_omp(arr);
    ASSERT_TRUE((*arr) == cp);
    delete arr;
}

TEST(Sequential, Test_30) {
    const int col = 30;
    std::vector<float>* arr = create_random_vector(col);
    std::vector<float> cp(*arr);
    hoar_sort_with_batch_merge(&cp);
    hoar_sort_with_batch_merge_omp(arr);
    ASSERT_TRUE((*arr) == cp);
    delete arr;
}

TEST(Sequential, Test_40) {
    const int col = 40;
    std::vector<float>* arr = create_random_vector(col);
    std::vector<float> cp(*arr);
    hoar_sort_with_batch_merge(&cp);
    hoar_sort_with_batch_merge_omp(arr);
    ASSERT_TRUE((*arr) == cp);
    delete arr;
}

TEST(Sequential, Test_50) {
    const int col = 50;
    std::vector<float>* arr = create_random_vector(col);
    std::vector<float> cp(*arr);
    // double start_seq = omp_get_wtime();
    hoar_sort_with_batch_merge(&cp);
    // double end_seq = omp_get_wtime();
    // double start_par = omp_get_wtime();
    hoar_sort_with_batch_merge_omp(arr);
    // double end_par = omp_get_wtime();
    // std::cout << "seq time: " << (end_seq - start_seq) << "\n";
    // std::cout << "par time: " << (end_par - start_par) << "\n";
    // double seq_time = (end_seq - start_seq);
    // double par_time = (end_par - start_par);
    // std::cout << "a: " << seq_time / par_time << "\n";
    ASSERT_TRUE((*arr) == cp);
    delete arr;
}

TEST(Sequential, Test_100) {
    const int col = 100;
    std::vector<float>* arr = create_random_vector(col);
    std::vector<float> cp(*arr);
    // double start_seq = omp_get_wtime();
    hoar_sort_with_batch_merge(&cp);
    // double end_seq = omp_get_wtime();
    // double start_par = omp_get_wtime();
    hoar_sort_with_batch_merge_omp(arr);
    // double end_par = omp_get_wtime();
    // std::cout << "seq time: " << (end_seq - start_seq) << "\n";
    // std::cout << "par time: " << (end_par - start_par) << "\n";
    // double seq_time = (end_seq - start_seq);
    // double par_time = (end_par - start_par);
    // std::cout << "a: " << seq_time / par_time << "\n";
    ASSERT_TRUE((*arr) == cp);
    delete arr;
}
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
