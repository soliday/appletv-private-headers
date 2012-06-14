/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface SBJsonWriter : NSObject {
@private
	NSString *error;	// 4 = 0x4
	unsigned maxDepth;	// 8 = 0x8
	BOOL sortKeys;	// 12 = 0xc
	BOOL humanReadable;	// 13 = 0xd
}
@property(copy) NSString *error;	// G=0x32c48549; S=0x32c4855d; @synthesize
@property(assign) BOOL humanReadable;	// G=0x32c48529; S=0x32c48539; @synthesize
@property(assign) unsigned maxDepth;	// G=0x32c48581; S=0x32c48591; @synthesize
@property(assign) BOOL sortKeys;	// G=0x32c48509; S=0x32c48519; @synthesize
- (id)init;	// 0x32c48151
- (id)dataWithObject:(id)object;	// 0x32c482d9
- (void)dealloc;	// 0x32c48199
// declared property getter: - (id)error;	// 0x32c48549
// declared property getter: - (BOOL)humanReadable;	// 0x32c48529
// declared property getter: - (unsigned)maxDepth;	// 0x32c48581
// declared property setter: - (void)setError:(id)error;	// 0x32c4855d
// declared property setter: - (void)setHumanReadable:(BOOL)readable;	// 0x32c48539
// declared property setter: - (void)setMaxDepth:(unsigned)depth;	// 0x32c48591
// declared property setter: - (void)setSortKeys:(BOOL)keys;	// 0x32c48519
// declared property getter: - (BOOL)sortKeys;	// 0x32c48509
- (id)stringWithObject:(id)object;	// 0x32c481e5
- (id)stringWithObject:(id)object error:(id *)error;	// 0x32c48245
@end

