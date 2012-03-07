/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "EDKeyedObject.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class EDString;

__attribute__((visibility("hidden")))
@interface EDContentFormat : NSObject <EDKeyedObject, NSCopying> {
@private
	EDString *mFormatString;	// 4 = 0x4
	unsigned mFormatId;	// 8 = 0x8
	bool mBuiltIn;	// 12 = 0xc
	bool mReferenced;	// 13 = 0xd
}
@property(assign) unsigned formatId;	// G=0x30cba805; S=0x30ddcced; converted property
@property(assign) bool referenced;	// G=0x30e2f9a5; S=0x30cbaa1d; converted property
+ (id)contentFormatWithFormatString:(id)formatString;	// 0x30cba689
+ (id)contentFormatWithFormatString:(id)formatString formatId:(unsigned)anId;	// 0x30cba661
+ (id)contentFormatWithNSString:(id)nsstring formatId:(unsigned)anId builtIn:(bool)anIn;	// 0x30cba4fd
- (id)init;	// 0x30cba6f5
- (bool)builtIn;	// 0x30e2f995
- (id)copyWithZone:(NSZone *)zone;	// 0x30e2f9e1
- (void)dealloc;	// 0x30cc94e1
// converted property getter: - (unsigned)formatId;	// 0x30cba805
- (id)formatString;	// 0x30cdf979
- (unsigned)hash;	// 0x30e2f9b5
- (BOOL)isEqual:(id)equal;	// 0x30cbf449
- (BOOL)isEqualToContentFormat:(id)contentFormat;	// 0x30cbf4a5
- (unsigned)key;	// 0x30cbaa0d
// converted property getter: - (bool)referenced;	// 0x30e2f9a5
// converted property setter: - (void)setFormatId:(unsigned)anId;	// 0x30ddcced
// converted property setter: - (void)setReferenced:(bool)referenced;	// 0x30cbaa1d
@end
