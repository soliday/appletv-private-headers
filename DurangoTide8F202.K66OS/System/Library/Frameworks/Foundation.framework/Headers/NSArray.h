/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSArray.h> // Unknown library


@interface NSArray (NSArray)
+ (id)arrayWithContentsOfFile:(id)file;	// 0x32447cd9
+ (id)arrayWithContentsOfURL:(id)url;	// 0x32455921
+ (id)newWithContentsOf:(id)of immutable:(BOOL)immutable;	// 0x32423591
- (id)initWithCoder:(id)coder;	// 0x3243a67d
- (id)initWithContentsOfFile:(id)file;	// 0x324558e9
- (id)initWithContentsOfURL:(id)url;	// 0x324558b1
- (id)_stringToWrite;	// 0x32455959
- (Class)classForCoder;	// 0x3244b299
- (id)debugDescription;	// 0x324559a9
- (void)encodeWithCoder:(id)coder;	// 0x3243b3ad
- (id)sortedArrayHint;	// 0x32455c2d
- (id)sortedArrayUsingFunction:(/*function-pointer*/ void *)function context:(void *)context hint:(id)hint;	// 0x3244a65d
- (id)sortedArrayUsingSelector:(SEL)selector hint:(id)hint;	// 0x32455ae9
- (BOOL)writeToFile:(id)file atomically:(BOOL)atomically;	// 0x32423641
- (BOOL)writeToURL:(id)url atomically:(BOOL)atomically;	// 0x32456371
@end

@interface NSArray (NSKeyValueCodingPrivate)
- (id)_mutableArrayValueForKeyPath:(id)keyPath ofObjectAtIndex:(unsigned)index;	// 0x32476529
- (id)_mutableSetValueForKeyPath:(id)keyPath ofObjectAtIndex:(unsigned)index;	// 0x32476501
- (void)_setValue:(id)value forKeyPath:(id)keyPath ofObjectAtIndex:(unsigned)index;	// 0x324764d5
- (BOOL)_validateValue:(id *)value forKeyPath:(id)keyPath ofObjectAtIndex:(unsigned)index error:(id *)error;	// 0x3247649d
- (id)_valueForKeyPath:(id)keyPath ofObjectAtIndex:(unsigned)index;	// 0x32476551
@end

@interface NSArray (NSKeyValueCoding)
- (id)_avgForKeyPath:(id)keyPath;	// 0x324769e1
- (id)_countForKeyPath:(id)keyPath;	// 0x324769ad
- (id)_distinctUnionOfArraysForKeyPath:(id)keyPath;	// 0x32476701
- (id)_distinctUnionOfObjectsForKeyPath:(id)keyPath;	// 0x324766c1
- (id)_distinctUnionOfSetsForKeyPath:(id)keyPath;	// 0x32476635
- (id)_maxForKeyPath:(id)keyPath;	// 0x32476939
- (id)_minForKeyPath:(id)keyPath;	// 0x324768c9
- (id)_sumForKeyPath:(id)keyPath;	// 0x324777c9
- (id)_unionOfArraysForKeyPath:(id)keyPath;	// 0x324767d1
- (id)_unionOfObjectsForKeyPath:(id)keyPath;	// 0x3247684d
- (id)_unionOfSetsForKeyPath:(id)keyPath;	// 0x32476741
- (void)setValue:(id)value forKey:(id)key;	// 0x32477551
- (id)valueForKey:(id)key;	// 0x3243e9e5
- (id)valueForKeyPath:(id)keyPath;	// 0x32478405
@end

@interface NSArray (NSKeyValueObserverRegistration)
- (void)addObserver:(id)observer forKeyPath:(id)keyPath options:(unsigned)options context:(void *)context;	// 0x3247ebbd
- (void)addObserver:(id)observer toObjectsAtIndexes:(id)indexes forKeyPath:(id)keyPath options:(unsigned)options context:(void *)context;	// 0x3247ec1d
- (void)removeObserver:(id)observer forKeyPath:(id)keyPath;	// 0x3247eb5d
- (void)removeObserver:(id)observer fromObjectsAtIndexes:(id)indexes forKeyPath:(id)keyPath;	// 0x3247fdc9
@end

@interface NSArray (NSArrayPathExtensions)
- (id)pathsMatchingExtensions:(id)extensions;	// 0x3248f5bd
- (id)stringsByAppendingPathComponent:(id)component;	// 0x3248e499
@end

@interface NSArray (NSKeyValueSorting)
- (id)sortedArrayUsingDescriptors:(id)descriptors;	// 0x3243e589
@end

@interface NSArray (NSPredicateSupport)
- (id)filteredArrayUsingPredicate:(id)predicate;	// 0x3241688d
@end

