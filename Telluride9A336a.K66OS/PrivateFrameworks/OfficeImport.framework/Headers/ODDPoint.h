/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class ODDPointPropertySet, OADTextBody, OADShapeProperties;

__attribute__((visibility("hidden")))
@interface ODDPoint : NSObject {
@private
	int mType;	// 4 = 0x4
	ODDPointPropertySet *mPropertySet;	// 8 = 0x8
	OADShapeProperties *mShapeProperties;	// 12 = 0xc
	OADTextBody *mText;	// 16 = 0x10
}
@property(retain) id text;	// G=0x34d4bf7d; S=0x34d4774d; converted property
@property(assign) int type;	// G=0x34d481c1; S=0x34d470d9; converted property
+ (void)addConnectionToPoint:(id)point order:(unsigned long)order array:(id *)array;	// 0x34d47f99
- (id)init;	// 0x34d46fcd
- (void)dealloc;	// 0x34d4e559
- (id)propertySet;	// 0x34d47109
// converted property setter: - (void)setText:(id)text;	// 0x34d4774d
// converted property setter: - (void)setType:(int)type;	// 0x34d470d9
- (id)shapeProperties;	// 0x34d470f9
// converted property getter: - (id)text;	// 0x34d4bf7d
// converted property getter: - (int)type;	// 0x34d481c1
@end

