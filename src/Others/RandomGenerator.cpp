/*
 * RandomGenerator.cpp
 *
 *  Created on: Feb 25, 2012
 *      Author: option0417
 */

#include "RandomGenerator.h"
#include <iostream>

using namespace std;

namespace op {

RandomGenerator* RandomGenerator::instance = 0;

RandomGenerator::RandomGenerator(int min, int max) {
	rngType = new boost::mt19937(time(0));
	range = new boost::uniform_int<>(min, max);
	generator = new boost::variate_generator<boost::mt19937&, boost::uniform_int<>>(*rngType, *range);
}

RandomGenerator::~RandomGenerator() {
	if (instance) {
		delete instance;
	}
}

RandomGenerator* RandomGenerator::getInstance() {
	if (RandomGenerator::instance == 0) {
		RandomGenerator::instance = new RandomGenerator();
	}
	return RandomGenerator::instance;
}

const int RandomGenerator::get() {
	return generator->operator ()();
}

} /* namespace op */
