/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, OADCharacterProperties, OADParagraphProperties;

__attribute__((visibility("hidden")))
@interface OADParagraph : NSObject {
@private
	OADParagraphProperties *mProperties;	// 4 = 0x4
	NSMutableArray *mTextRuns;	// 8 = 0x8
	OADCharacterProperties *mParagraphEndCharacterProperties;	// 12 = 0xc
}
@property(retain) id paragraphEndCharacterProperties;	// G=0x34379485; S=0x34617ef5; converted property
@property(retain) id properties;	// G=0x34378d35; S=0x34617fed; converted property
- (id)init;	// 0x343f3a01
- (id)addDateTimeField;	// 0x343f7ec5
- (id)addFooterField;	// 0x343f83c9
- (id)addGenericTextField;	// 0x34617f35
- (id)addRegularTextRun;	// 0x343f5db9
- (id)addSlideNumberField;	// 0x34436b01
- (id)addTextLineBreak;	// 0x343f5f29
- (void)applyProperties:(id)properties;	// 0x34617e19
- (id)bulletCharacterProperties;	// 0x34617e7d
- (void)dealloc;	// 0x34400395
- (id)findFirstTextRunOfClass:(Class)aClass;	// 0x343f8229
- (BOOL)hasBulletCharacterProperties;	// 0x34617ea9
- (BOOL)isEmpty;	// 0x34379a4d
// converted property getter: - (id)paragraphEndCharacterProperties;	// 0x34379485
- (id)plainText;	// 0x34542071
// converted property getter: - (id)properties;	// 0x34378d35
- (void)removeAllTextRuns;	// 0x34617fcd
- (void)removeUnnecessaryOverrides;	// 0x343f9ca5
// converted property setter: - (void)setParagraphEndCharacterProperties:(id)properties;	// 0x34617ef5
- (void)setParentTextListStyle:(id)style;	// 0x343f8965
// converted property setter: - (void)setProperties:(id)properties;	// 0x34617fed
- (id)textRunAtIndex:(unsigned)index;	// 0x34379acd
- (unsigned)textRunCount;	// 0x34379aad
@end

