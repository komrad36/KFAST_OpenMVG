/*******************************************************************
*   KFAST.h
*   KFAST
*
*	Author: Kareem Omar
*	kareem.omar@uah.edu
*	https://github.com/komrad36
*
*	Last updated Jul 11, 2016
*******************************************************************/
//
// Implementation of the FAST corner feature detector with optional
// non-maximal suppression, as described in the 2006 paper by
// Rosten and Drummond:
// "Machine learning for high-speed corner detection"
//         Edward Rosten and Tom Drummond
// https://www.edwardrosten.com/work/rosten_2006_machine.pdf
//
// My implementation uses AVX2, as well as many other careful
// optimizations, to implement the FAST algorithm as described
// in the paper but at great speed. This implementation
// outperforms the reference implementation by 40-60%
// while matching its output and capabilities.
//

#pragma once

#include <cstdint>
#include <cstring>
#include <immintrin.h>
#include <vector>

void KFAST(const uint8_t* __restrict const data, const int32_t cols, const int32_t rows, const int32_t stride,
	std::vector<openMVG::features::SIOPointFeature>& keypoints, const uint8_t threshold, const bool nonmax_suppression);
