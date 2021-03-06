/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDKeyedObject.h"
#import <NSObject.h> // Unknown library

@class EDResources;

__attribute__((visibility("hidden")))
@interface EDRun : NSObject <EDKeyedObject> {
@private
	EDResources *mResources;	// 4 = 0x4
	unsigned mCharIndex;	// 8 = 0x8
	unsigned mFontIndex;	// 12 = 0xc
}
@property(assign) unsigned charIndex;	// G=0x34c7b051; S=0x34dcff25; converted property
@property(retain) id font;	// G=0x34c7b061; S=0x34ce5cb5; converted property
@property(assign) unsigned fontIndex;	// G=0x34d51d91; S=0x34dcff35; converted property
+ (id)runWithCharIndex:(unsigned)charIndex font:(id)font resources:(id)resources;	// 0x34ce5c19
+ (id)runWithCharIndex:(unsigned)charIndex fontIndex:(unsigned)index resources:(id)resources;	// 0x34c62ce9
+ (id)runWithResources:(id)resources;	// 0x34dcff45
- (id)initWithCharIndex:(unsigned)charIndex font:(id)font resources:(id)resources;	// 0x34ce5c71
- (id)initWithCharIndex:(unsigned)charIndex fontIndex:(unsigned)index resources:(id)resources;	// 0x34c62d41
- (id)initWithResources:(id)resources;	// 0x34c62d81
// converted property getter: - (unsigned)charIndex;	// 0x34c7b051
// converted property getter: - (id)font;	// 0x34c7b061
// converted property getter: - (unsigned)fontIndex;	// 0x34d51d91
- (BOOL)isEqual:(id)equal;	// 0x34d69235
- (BOOL)isEqualToRun:(id)run;	// 0x34d69291
- (unsigned)key;	// 0x34c62ee1
// converted property setter: - (void)setCharIndex:(unsigned)index;	// 0x34dcff25
// converted property setter: - (void)setFont:(id)font;	// 0x34ce5cb5
// converted property setter: - (void)setFontIndex:(unsigned)index;	// 0x34dcff35
@end

