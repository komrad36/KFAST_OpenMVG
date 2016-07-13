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

#pragma once

#include <cstdint>
#include <immintrin.h>
#include <vector>

struct Keypoint {
	int32_t x;
	int32_t y;
	uint8_t score;

	Keypoint(const int32_t _x, const int32_t _y, const uint8_t _score) : x(_x), y(_y), score(_score) {}

};

void KFAST(const uint8_t* __restrict const data, const int32_t cols, const int32_t rows, const int32_t stride,
	std::vector<Keypoint>& keypoints, const uint8_t threshold, const bool nonmax_suppression);