/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDCollection;

__attribute__((visibility("hidden")))
@interface EDLink : NSObject {
@private
	int mType;	// 4 = 0x4
	EDCollection *mExternalNames;	// 8 = 0x8
}
@property(assign) int type;	// G=0x30d54549; S=0x30e32269; converted property
+ (id)linkWithType:(int)type;	// 0x30cc659d
- (id)initWithType:(int)type;	// 0x30cc65e9
- (void)dealloc;	// 0x30cf3c75
- (id)externalNames;	// 0x30dd9115
// converted property setter: - (void)setType:(int)type;	// 0x30e32269
// converted property getter: - (int)type;	// 0x30d54549
@end

