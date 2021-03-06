/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADTextBodyProperties, OADTextListStyle, OADShapeProperties;

__attribute__((visibility("hidden")))
@interface OADDefaultProperties : NSObject {
@private
	OADShapeProperties *mShapeProperties;	// 4 = 0x4
	OADTextBodyProperties *mTextBodyProperties;	// 8 = 0x8
	OADTextListStyle *mTextListStyle;	// 12 = 0xc
}
@property(retain) id shapeProperties;	// G=0x344a872d; S=0x344a7e9d; converted property
@property(retain) id textBodyProperties;	// G=0x3453803d; S=0x34591ded; converted property
@property(retain) id textListStyle;	// G=0x3443a859; S=0x344a873d; converted property
- (id)init;	// 0x344a7c11
- (id)initWithDefaults;	// 0x34591e25
- (void)dealloc;	// 0x3445f299
// converted property setter: - (void)setShapeProperties:(id)properties;	// 0x344a7e9d
// converted property setter: - (void)setTextBodyProperties:(id)properties;	// 0x34591ded
// converted property setter: - (void)setTextListStyle:(id)style;	// 0x344a873d
// converted property getter: - (id)shapeProperties;	// 0x344a872d
// converted property getter: - (id)textBodyProperties;	// 0x3453803d
// converted property getter: - (id)textListStyle;	// 0x3443a859
@end

