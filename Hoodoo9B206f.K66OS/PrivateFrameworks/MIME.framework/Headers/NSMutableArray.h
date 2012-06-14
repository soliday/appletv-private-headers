/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSMutableArray.h> // Unknown library


@interface NSMutableArray (SortedArrayExtensions)
- (unsigned)mf_insertObject:(id)object usingSortFunction:(/*function-pointer*/ void *)function context:(void *)context allowDuplicates:(BOOL)duplicates;	// 0x35e71bfd
- (unsigned)mf_removeObject:(id)object usingSortFunction:(/*function-pointer*/ void *)function context:(void *)context;	// 0x35e71c89
@end

@interface NSMutableArray (Convenience)
- (BOOL)mf_addObjectIfAbsent:(id)absent;	// 0x35e71b85
- (BOOL)mf_addObjectIfAbsentAccordingToEquals:(id)equals;	// 0x35e71bc1
@end

