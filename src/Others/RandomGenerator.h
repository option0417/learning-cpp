/*
 * RandomGenerator.h
 *
 *  Created on: Feb 25, 2012
 *      Author: option0417
 */

#ifndef RANDOMGENERATOR_H_
#define RANDOMGENERATOR_H_

#include "boost/random.hpp"
#include "boost/generator_iterator.hpp"

namespace op {

class RandomGenerator {
public:
	~RandomGenerator();
	static RandomGenerator* getInstance();
	const int get();
private:
	RandomGenerator(int min = 1, int max = 100);
	static RandomGenerator* instance;
    boost::mt19937 *rngType;
    boost::uniform_int<> *range;
	boost::variate_generator<boost::mt19937&, boost::uniform_int<>> *generator;
	int val;
};

} /* namespace op */
#endif /* RANDOMGENERATOR_H_ */
