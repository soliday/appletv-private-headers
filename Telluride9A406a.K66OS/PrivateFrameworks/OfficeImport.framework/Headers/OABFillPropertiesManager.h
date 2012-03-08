/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"
#import "OABFillPropertiesManager.h"
#import "OABColorPropertiesManager.h"

@protocol OABPropertiesManager;

@protocol OABFillPropertiesManager <OABColorPropertiesManager>
- (long)fillAngle;
- (long)fillBgAlpha;
- (unsigned long)fillBlipID;
- (id)fillBlipName;
- (long)fillFgAlpha;
- (long)fillFocus;
- (long)fillFocusBottom;
- (long)fillFocusLeft;
- (long)fillFocusRight;
- (long)fillFocusTop;
- (const EshTablePropVal<EshGradientStop> *)fillGradientColors;
- (int)fillType;
@end

__attribute__((visibility("hidden")))
@interface OABFillPropertiesManager : NSObject <OABFillPropertiesManager> {
@private
	EshFill *mFill;	// 4 = 0x4
	int mShapeType;	// 8 = 0x8
	id<OABPropertiesManager> mMasterManager;	// 12 = 0xc
}
- (id)initWithFill:(const EshFill *)fill shapeType:(int)type masterShape:(EshShape *)shape;	// 0x32827de9
- (void)dealloc;	// 0x328a05b1
- (long)fillAngle;	// 0x328ea34d
- (long)fillBgAlpha;	// 0x328ea885
- (EshColor)fillBgColor;	// 0x328ea41d
- (EshBlip *)fillBlipDataReference;	// 0x328e45b5
- (unsigned long)fillBlipID;	// 0x328e4481
- (id)fillBlipName;	// 0x328e4509
- (long)fillFgAlpha;	// 0x328a6a05
- (EshColor)fillFgColor;	// 0x328a6999
- (long)fillFocus;	// 0x328ea3b5
- (long)fillFocusBottom;	// 0x329683d5
- (long)fillFocusLeft;	// 0x329682c1
- (long)fillFocusRight;	// 0x32968379
- (long)fillFocusTop;	// 0x3296831d
- (const EshTablePropVal<EshGradientStop> *)fillGradientColors;	// 0x328ea661
- (int)fillType;	// 0x3282886d
- (BOOL)isFilled;	// 0x32828921
- (BOOL)isStroked;	// 0x32b1880d
- (EshColor)shadowColor;	// 0x32b18811
- (EshColor)strokeBgColor;	// 0x32b18839
- (EshColor)strokeFgColor;	// 0x32b18861
@end
