/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 12:59:11 by mzridi            #+#    #+#             */
/*   Updated: 2023/03/12 15:09:56 by mzridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "whatever.hpp"


// class Test {
//     public:
//         int a;
//         int b;
//         Test(int a, int b) : a(a), b(b) {}
// };

int main(void)
{
    int a = 2;
    int b = 3;
    swap(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
    std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
    std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;


    
    // Test t1 = Test(1,1);
    // Test t2 = Test(2,2);
    // std::cout << " before swap " << std::endl;
    // std::cout << "t1 : (" << t1.a << ", " << t1.b << "), b : (" << t2.a << ", " << t2.b << ")" << std::endl;
    // swap(t1, t2);
    // std::cout << "after swap " << std::endl;
    // std::cout << "t1 : (" << t1.a << ", " << t1.b << "), b : (" << t2.a << ", " << t2.b << ")" << std::endl;
    return 0;
}