#ifndef GENESIS_H
#define GENESIS_H

#include "bignum.h"

// Genesis block 0 hash

static const uint256 hashGenesisBlock("0000005f6a28e686f641c616e56182d1b43afbe08a223f23bda23cdf9d55b882");
static const uint256 hashGenesisBlockTestNet("0000005f6a28e686f641c616e56182d1b43afbe08a223f23bda23cdf9d55b882");
static const uint256 CheckPointBlock1("191e54d44ed16d6cb90f5aeb374098d915b93ef65b26423720da09a7ffe7e84c"); // checkpoint at block 100000
static const uint256 CheckPointBlock2("00000019ca43d5a4dbae504ca25971b59e6f8662027c905423f9c0dd92a37c7c"); // checkpoint at block 295800

// TODO: Move Kernel checksum in here


#endif // GENESIS_H
