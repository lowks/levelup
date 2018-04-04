-module(hamming_tests).

% This file is automatically generated from the exercises canonical data.

-include_lib("erl_exercism/include/exercism.hrl").
-include_lib("eunit/include/eunit.hrl").


empty_strands_test() ->
    ?assertMatch(0, hamming:distance([], [])).

identical_strands_test() ->
    ?assertMatch(0, hamming:distance("A", "A")).

long_identical_strands_test() ->
    ?assertMatch(0, hamming:distance("GGACTGA", "GGACTGA")).

complete_distance_in_single_nucleotide_strands_test() ->
    ?assertMatch(1, hamming:distance("A", "G")).

complete_distance_in_small_strands_test() ->
    ?assertMatch(2, hamming:distance("AG", "CT")).

small_distance_in_small_strands_test() ->
    ?assertMatch(1, hamming:distance("AT", "CT")).

small_distance_test() ->
    ?assertMatch(1, hamming:distance("GGACG", "GGTCG")).

small_distance_in_long_strands_test() ->
    ?assertMatch(2, hamming:distance("ACCAGGG", "ACTATGG")).

non_unique_character_in_first_strand_test() ->
    ?assertMatch(1, hamming:distance("AAG", "AAA")).

non_unique_character_in_second_strand_test() ->
    ?assertMatch(1, hamming:distance("AAA", "AAG")).

same_nucleotides_in_different_positions_test() ->
    ?assertMatch(2, hamming:distance("TAG", "GAT")).

large_distance_test() ->
    ?assertMatch(4, hamming:distance("GATACA", "GCATAA")).

large_distance_in_off_by_one_strand_test() ->
    ?assertMatch(9,
		 hamming:distance("GGACGGATTCTG", "AGGACGGATTCT")).

disallow_first_strand_longer_test() ->
    ?assertMatch({error,
		  "left and right strands must be of equal "
		  "length"},
		 hamming:distance("AATG", "AAA")).

disallow_second_strand_longer_test() ->
    ?assertMatch({error,
		  "left and right strands must be of equal "
		  "length"},
		 hamming:distance("ATA", "AGTG")).

version_test() ->
    ?assertMatch(2, hamming:test_version()).