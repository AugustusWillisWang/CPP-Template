// ----------------------------------------------------------------
//                   model B+ tree implentation
//                      basic_inmem_bptree.h
// ----------------------------------------------------------------
//              Copyright (C) 2019 Wang Huaqiang 
//             email : wanghuaqiang16@mails.ucas.ac.cn
// ----------------------------------------------------------------
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.
// -----------------------------------------------------------------

// Current design

// Parameter settings

#define KEY_SIZE 16 //16B
#define VALUE_SIZE1 256 //B
#define VALUE_SIZE2 1024 //B

//scan 20-2000

#define PAGE_SIZE (4096) //4096B
#define NODE_CAPACITY (PAGE_SIZE/(sizeof(int)+sizeof(int*))-1)
#define LEAF_CAPACITY NODE_CAPACITY
#define NODE_CAPACITY ()

// Init a B+ tree

// Add a new item

// Look for an item

// Delete an item

// Mod an item

// Traverse a tree

// Save a tree to disk

// Load a tree from disk

// Reorg a tree

// Merge two trees
