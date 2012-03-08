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
@property(retain) id paragraphEndCharacterProperties;	// G=0x32822485; S=0x32ac0ef5; converted property
@property(retain) id properties;	// G=0x32821d35; S=0x32ac0fed; converted property
- (id)init;	// 0x3289ca01
- (id)addDateTimeField;	// 0x328a0ec5
- (id)addFooterField;	// 0x328a13c9
- (id)addGenericTextField;	// 0x32ac0f35
- (id)addRegularTextRun;	// 0x3289edb9
- (id)addSlideNumberField;	// 0x328dfb01
- (id)addTextLineBreak;	// 0x3289ef29
- (void)applyProperties:(id)properties;	// 0x32ac0e19
- (id)bulletCharacterProperties;	// 0x32ac0e7d
- (void)dealloc;	// 0x328a9395
- (id)findFirstTextRunOfClass:(Class)aClass;	// 0x328a1229
- (BOOL)hasBulletCharacterProperties;	// 0x32ac0ea9
- (BOOL)isEmpty;	// 0x32822a4d
// converted property getter: - (id)paragraphEndCharacterProperties;	// 0x32822485
- (id)plainText;	// 0x329eb071
// converted property getter: - (id)properties;	// 0x32821d35
- (void)removeAllTextRuns;	// 0x32ac0fcd
- (void)removeUnnecessaryOverrides;	// 0x328a2ca5
// converted property setter: - (void)setParagraphEndCharacterProperties:(id)properties;	// 0x32ac0ef5
- (void)setParentTextListStyle:(id)style;	// 0x328a1965
// converted property setter: - (void)setProperties:(id)properties;	// 0x32ac0fed
- (id)textRunAtIndex:(unsigned)index;	// 0x32822acd
- (unsigned)textRunCount;	// 0x32822aad
@end
