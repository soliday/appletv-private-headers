/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSCharacterSet.h"
#import "Foundation-Structs.h"


__attribute__((visibility("hidden")))
@interface _NSPlaceholderCharacterSet : NSCharacterSet {
@private
	NSCharacterSet *_original;	// 4 = 0x4
	NSCharacterSet *_invertedSet;	// 8 = 0x8
	struct {
		unsigned _inverted : 1;
		unsigned _builtin : 1;
		unsigned _isCF : 1;
		unsigned _reserved : 29;
	} _flags;	// 12 = 0xc
}
@property(readonly, retain) NSCharacterSet *invertedSet;	// G=0x31d3d9f9; converted property
- (id)initWithSet:(id)set options:(unsigned)options;	// 0x31d3d829
- (void)_expandInverted;	// 0x31d4d93d
- (CFCharacterSetRef)_expandedCFCharacterSet;	// 0x31d4d915
- (BOOL)_isDeallocating;	// 0x31d4dddd
- (BOOL)_tryRetain;	// 0x31d4de25
- (id)autorelease;	// 0x31d4dcd5
- (id)bitmapRepresentation;	// 0x31d4dbf9
- (BOOL)characterIsMember:(unsigned short)member;	// 0x31d4da39
- (void)dealloc;	// 0x31d4de6d
- (BOOL)hasMemberInPlane:(unsigned char)plane;	// 0x31d4db15
// converted property getter: - (id)invertedSet;	// 0x31d3d9f9
- (BOOL)isEmpty;	// 0x31d4dc65
- (BOOL)isEqual:(id)equal;	// 0x31d4db6d
- (BOOL)isSupersetOfSet:(id)set;	// 0x31d4da99
- (BOOL)longCharacterIsMember:(unsigned long)member;	// 0x31d4da51
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x31d4d9c1
- (oneway void)release;	// 0x31d4dd9d
- (id)replacementObjectForCoder:(id)coder;	// 0x31d4df29
- (id)replacementObjectForKeyedArchiver:(id)keyedArchiver;	// 0x31d4dee1
- (id)retain;	// 0x31d4dd15
- (unsigned)retainCount;	// 0x31d4dd55
@end

