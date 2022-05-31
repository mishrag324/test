#include<iostream>
#include"seal/seal.h"
#include"sealtool.h"

using namespace std;
using namespace seal;
// using namespace ntl;
// using namespace NTL;
Ciphertext multiply_and_refresh(Evaluator &evaluator, Ciphertext cipher_input_one, Ciphertext cipher_input_two, Ciphertext cipher_input_result, RelinKeys relin_keys)
{   

    evaluator.multiply(cipher_input_one,cipher_input_two,cipher_input_result);
    evaluator.relinearize_inplace(cipher_input_result, relin_keys);
    evaluator.rescale_to_next_inplace(cipher_input_result);
    return cipher_input_result;
}

// Ciphertext square_and_refresh(Evaluator &evaluator, Ciphertext cipher, RelinKeys relin_keys)
// {
//     evaluator.square(cipher, cipher);
//     evaluator.relinearize_inplace(cipher, relin_keys);
//     evaluator.rescale_to_next_inplace(cipher);
//     return cipher;
// }

void match_parms_id(Evaluator &evaluator, Ciphertext &cipher_input_one, Ciphertext &cipher_input_result)
{
    cipher_input_one.scale() = pow(2.0, 40);
    cipher_input_result.scale() = pow(2.0, 40);
    parms_id_type last_parms_id = cipher_input_result.parms_id();
    evaluator.mod_switch_to_inplace(cipher_input_one, last_parms_id);
}   

vector<vector<double>> gen_mat(size_t row_size, size_t col_size)
{
    vector<vector<double>> input_vector(row_size);
    for(size_t i=0;i < row_size; i++)
    {
        input_vector[i].reserve(col_size);
        for(size_t j=0;j< col_size; j++)
        {
            if(j<304)
                input_vector[i].push_back(j+i);
            else
                input_vector[i].push_back(j+i);

        }
    }

    // for (size_t i = 0; i < row_size; ++i)
    // {
    //     cout<<"Input vector "<<i<<endl;
    //     print_vector(input_vector[i],4096,0);
    // }
    return input_vector;
}