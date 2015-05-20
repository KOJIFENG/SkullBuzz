
SkullBuzz development tree

SkullBuzz is a PoS-based cryptocurrency.

SkullBuzz is dependent upon libsecp256k1.

Total POW:  Blocks
POW Reward: 137 SKB per Block
POS Reward: 1.337 SKB
Block Spacing: 60 Seconds
Diff Retarget: 2 Blocks
Maturity: 37 Blocks
Stake Minimum Age: 8 Hours

Port: 30137
RPC Port: 30138

SkullBuzz includes an Address Index feature, based on the address index API (searchrawtransactions RPC command) implemented in Bitcoin Core but modified implementation to work with the SkullBuzz codebase (PoS coins maintain a txindex by default for instance).

Initialize the Address Index By Running with -reindexaddr Command Line Argument.  It may take 10-15 minutes to build the initial index.


