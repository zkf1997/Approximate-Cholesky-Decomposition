
add_executable(test_LDLsolver test_LDLsolver.cpp)
target_link_libraries(test_LDLsolver PRIVATE approxChol)

add_executable(test_approxChol test_approxChol.cpp)  
target_link_libraries(test_approxChol PRIVATE approxChol)

add_executable(test_LLMatOrd test_LLMatOrd.cpp)
target_link_libraries(test_LLMatOrd PRIVATE approxChol)

add_executable(test_pcg test_pcg.cpp)
target_link_libraries(test_pcg PRIVATE approxChol)

add_executable(test_validation test_validation.cpp)
target_link_libraries(test_validation PRIVATE approxChol)

add_executable(runtime runtime.cpp)
target_link_libraries(runtime PRIVATE approxChol)

add_executable(test_search test_search.cpp)
target_link_libraries(test_search PRIVATE approxChol)

add_executable(test_convergence test_convergence.cpp)
target_link_libraries(test_convergence PRIVATE approxChol)