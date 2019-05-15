/*
 * Swap.h
 *
 *  Created on: 2019?3?28?
 *      Author: WANGZijian
 */

#ifndef SWAP_H_
#define SWAP_H_
#endif /* SWAP_H_ */

class SwapE{
public:
template <typename T>
void swap(const T &x, const T &y){
	T temp=x;
	x=y;
	y=temp;
}
};
