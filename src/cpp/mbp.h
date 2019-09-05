// ----------------------------------------------------------------
//                   model B+ tree implentation
//                             mbp.h
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

//--------------------------------------------------------------------
//|                   op_queue                   | 
//|              op_queue & index_heap           | <- thread1 main    
//|                                              |     
//|               inmem_bptree_info              |     
//|                   -------                    |     
//|                                              |   
//|     tree_inmem_cache    data_inmem_cache     | <- thread2 mod_inmem_bptree
//|       B+tree_node          data_node         |  
//|----------------mem/disk ifc------------------| <- thread3 sync_mem_and_disk
//|     index_BPtree        data_collection      |     
//|        B+tree              data_node         | <- thread4 garbage_collection
//--------------------------------------------------------------------

// Different B+tree implentations

#include"basic_inmem_bptree.h"

// Parameter settings

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

// -----------------------------------------------------------------
// TODO List

// DS
// Func
// Test
// Multi thread
// Merge
// Ref
// OPT: B+ tree for big data
// OPT: which part is in mem
// OPT: write buffer like LSM tree? ref: https://cloud.tencent.com/developer/news/340271
// IDEA: can we make use of DDR memory access patterns?
// TODO: add counter

// ------------------------------------------------------------------
// OPT: write buffer like LSM tree? ref: https://cloud.tencent.com/developer/news/340271
// idea: use two kinds of in-mem tables: mutable_table x1 and immutable_table xn
// in-mem part: traditional B+ tree
// multithread is used to flush immutable_table back to disk. 
// Will this work? Can more than 1 thread be used to update the B+ tree on disk?
// ------------------------------------------------------------------

// ------------------------------------------------------------------
// OPT: garbage collection
// Use a thread to do garbage collection works
// Or, maybe more than one?
// Problem: how to deal with real time issues? Is a lock needed?
// Build a new tree while the old tree still exists? replace the old tree with a new one when all things were done?
// ------------------------------------------------------------------

// ------------------------------------------------------------------
// OPT: save some nodes in mem???
// ------------------------------------------------------------------

// ------------------------------------------------------------------
// OPT: in mem part: what should it be like? a heap?
// ------------------------------------------------------------------

// ------------------------------------------------------------------
// OPT: data part: data will now be saved to disk according to the seq they were created
// Delete and garbage collection: use a thread to deal with it
// ------------------------------------------------------------------

