/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "MFPEffect.h"


__attribute__((visibility("hidden")))
@interface MFPRedEyeCorrectionEffect : MFPEffect {
@private
	vector<CGRect, std::allocator<CGRect> > *mAreas;	// 4 = 0x4
}
+ (id)GUID;	// 0x31266341
- (id)initWithAreas:(const vector<CGRect, std::allocator<CGRect> > *)areas;	// 0x3126634d
- (void)dealloc;	// 0x31266435
@end

