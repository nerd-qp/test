
// //#include "operator_overloading.hpp"
// #include <stdio.h>
// #include <math.h>
// #include <gsl/gsl_integration.h>

// double f (double x, void * params) {
//   double alpha = *(double *) params;
//   double f = log(alpha*x) / sqrt(x);
//   return f;
// }

// int main(void) {
//   gsl_integration_workspace * w
//     = gsl_integration_workspace_alloc (1000);

//   double result, error;
//   double expected = -4.0;
//   double alpha = 1.0;

//   gsl_function F;
//   F.function = &f;
//   F.params = &alpha;

//   gsl_integration_qags (&F, 0, 1, 0, 1e-7, 1000,
//                         w, &result, &error);

//   printf ("result          = % .18f\n", result);
//   printf ("exact result    = % .18f\n", expected);
//   printf ("estimated error = % .18f\n", error);
//   printf ("actual error    = % .18f\n", result - expected);
//   printf ("intervals       = %zu\n", w->size);

//   gsl_integration_workspace_free (w);

//   int n = 10000;
//   gsl_integration_glfixed_table * w1 =
//     gsl_integration_glfixed_table_alloc(2*n-1);

//   double xi, wi;
//   for (int i = 1; i <= n; ++ i) {
//     gsl_integration_glfixed_point(-1, 1, i, &xi, &wi, w1);
//     printf ("% .10f % .10f\n", xi, wi);
//   }

//   printf( "% .18f\n", gsl_integration_glfixed(&F, 0, 1, w1));

//   gsl_integration_glfixed_table_free (w1);
//   return 0;
// }

//#include <boost/numeric/ublas/triangular.hpp>
//#include <boost/numeric/ublas/io.hpp>
// #include <vector>
// #include <gsl/gsl_integration.h>
// #include <iostream>
// #include <cmath>

// double f(double x, void * params) {
//   return std::sin(x);
// }

// int main() {
//   gsl_integration_glfixed_table * integral_table =
//     gsl_integration_glfixed_table_alloc(10);

//   gsl_function F;
//   F.function = f;

//   std::cout
//     << gsl_integration_glfixed(&F, 0, M_PI, integral_table) << std::endl;
// }


// int main () {
//   // using namespace boost::numeric::ublas;
//   // matrix<double> m (3, 3);
//   // vector<double> v (3);
//   // for (unsigned i = 0; i < std::min (m.size1 (), v.size ()); ++ i) {
//   //   for (unsigned j = 0; j <= i; ++ j)
//   //     m (i, j) = 3 * i + j + 1;
//   //   v (i) = i;
//   // }

//   // std::cout << m << std::endl;
//   // std::cout << v << std::endl;

//   // std::cout << solve (m, v, lower_tag ()) << std::endl;
//   // std::cout << solve (v, m, lower_tag ()) << std::endl;

//   //std::vector<int> i{1,2};
//   //auto j = &i[1];
//   //const int i = 0;
//   //&i = 1;
//   //&1;
// }
// #include <cstdio>

// int main() {
//   // int* p = operator new(1000));
//   // void *p = operator new[](1000);
//   // operator delete(p);

//   // printf("%lu", sizeof(p));
// }
#include <omp.h>
#include <stdio.h>

#define NUM_ITERATIONS 10000000

int main() {
  #pragma omp parallel for
  for ( int j = 0; j < NUM_ITERATIONS; ++ j ) {
    printf( "%d\n", j );
  }

}
