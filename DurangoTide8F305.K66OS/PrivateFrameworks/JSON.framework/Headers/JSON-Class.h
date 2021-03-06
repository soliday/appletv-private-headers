/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/JSON.framework/JSON
 */

#import <NSObject.h> // Unknown library


@interface JSON : NSObject {
	unsigned options;	// 4 = 0x4
	NSError **error;	// 8 = 0x8
	unsigned depth;	// 12 = 0xc
}
+ (id)dataWithObject:(id)object options:(unsigned)options encoding:(unsigned)encoding error:(id *)error;	// 0x30b9dbfd
+ (id)dataWithObject:(id)object options:(unsigned)options error:(id *)error;	// 0x30b9dc31
+ (id)objectWithData:(id)data options:(unsigned)options error:(id *)error;	// 0x30b9d3c5
+ (id)stringWithObject:(id)object options:(unsigned)options error:(id *)error;	// 0x30b9db75
- (id)initWithOptions:(unsigned)options error:(id *)error;	// 0x30b9c45d
- (void)setErrorWithCode:(unsigned)code description:(id)description;	// 0x30b9c551
- (void)setErrorWithCode:(unsigned)code string:(id)string;	// 0x30b9c4ad
@end

