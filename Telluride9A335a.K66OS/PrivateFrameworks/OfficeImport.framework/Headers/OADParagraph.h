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
@property(retain) id paragraphEndCharacterProperties;	// G=0x3512b485; S=0x353c9ef5; converted property
@property(retain) id properties;	// G=0x3512ad35; S=0x353c9fed; converted property
- (id)init;	// 0x351a5a01
- (id)addDateTimeField;	// 0x351a9ec5
- (id)addFooterField;	// 0x351aa3c9
- (id)addGenericTextField;	// 0x353c9f35
- (id)addRegularTextRun;	// 0x351a7db9
- (id)addSlideNumberField;	// 0x351e8b01
- (id)addTextLineBreak;	// 0x351a7f29
- (void)applyProperties:(id)properties;	// 0x353c9e19
- (id)bulletCharacterProperties;	// 0x353c9e7d
- (void)dealloc;	// 0x351b2395
- (id)findFirstTextRunOfClass:(Class)aClass;	// 0x351aa229
- (BOOL)hasBulletCharacterProperties;	// 0x353c9ea9
- (BOOL)isEmpty;	// 0x3512ba4d
// converted property getter: - (id)paragraphEndCharacterProperties;	// 0x3512b485
- (id)plainText;	// 0x352f4071
// converted property getter: - (id)properties;	// 0x3512ad35
- (void)removeAllTextRuns;	// 0x353c9fcd
- (void)removeUnnecessaryOverrides;	// 0x351abca5
// converted property setter: - (void)setParagraphEndCharacterProperties:(id)properties;	// 0x353c9ef5
- (void)setParentTextListStyle:(id)style;	// 0x351aa965
// converted property setter: - (void)setProperties:(id)properties;	// 0x353c9fed
- (id)textRunAtIndex:(unsigned)index;	// 0x3512bacd
- (unsigned)textRunCount;	// 0x3512baad
@end

