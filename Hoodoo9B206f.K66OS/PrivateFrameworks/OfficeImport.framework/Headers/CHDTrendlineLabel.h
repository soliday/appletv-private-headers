/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class CHDFormula, OADGraphicProperties, EDResources;

__attribute__((visibility("hidden")))
@interface CHDTrendlineLabel : NSObject {
@private
	EDResources *mResources;	// 4 = 0x4
	CHDFormula *mName;	// 8 = 0x8
	unsigned mLastCachedNameStringIndex;	// 12 = 0xc
	unsigned mContentFormatId;	// 16 = 0x10
	bool mGeneratedText;	// 20 = 0x14
	bool mAutomaticLabelDeleted;	// 21 = 0x15
	OADGraphicProperties *mGraphicProperties;	// 24 = 0x18
}
@property(assign, getter=isAutomaticLabelDeleted) bool automaticLabelDeleted;	// G=0x345da75d; S=0x34567825; converted property
@property(retain) id contentFormat;	// G=0x345da841; S=0x345da7ad; converted property
@property(assign) unsigned contentFormatId;	// G=0x345da79d; S=0x34567805; converted property
@property(assign, getter=isGeneratedText) bool generatedText;	// G=0x345da74d; S=0x34567815; converted property
@property(retain) id graphicProperties;	// G=0x345da76d; S=0x3456787d; converted property
@property(retain) id lastCachedName;	// G=0x345da889; S=0x34567835; converted property
@property(assign) unsigned stringIndex;	// G=0x345da77d; S=0x345da78d; converted property
+ (id)trendlineLabelWithResources:(id)resources;	// 0x34561831
- (id)initWithResources:(id)resources;	// 0x3456187d
// converted property getter: - (id)contentFormat;	// 0x345da841
// converted property getter: - (unsigned)contentFormatId;	// 0x345da79d
- (void)dealloc;	// 0x34561df1
// converted property getter: - (id)graphicProperties;	// 0x345da76d
// converted property getter: - (bool)isAutomaticLabelDeleted;	// 0x345da75d
// converted property getter: - (bool)isGeneratedText;	// 0x345da74d
// converted property getter: - (id)lastCachedName;	// 0x345da889
- (id)name;	// 0x345da73d
// converted property setter: - (void)setAutomaticLabelDeleted:(bool)deleted;	// 0x34567825
// converted property setter: - (void)setContentFormat:(id)format;	// 0x345da7ad
// converted property setter: - (void)setContentFormatId:(unsigned)anId;	// 0x34567805
// converted property setter: - (void)setGeneratedText:(bool)text;	// 0x34567815
// converted property setter: - (void)setGraphicProperties:(id)properties;	// 0x3456787d
// converted property setter: - (void)setLastCachedName:(id)name;	// 0x34567835
- (void)setName:(id)name chart:(id)chart;	// 0x34567769
// converted property setter: - (void)setStringIndex:(unsigned)index;	// 0x345da78d
// converted property getter: - (unsigned)stringIndex;	// 0x345da77d
@end

