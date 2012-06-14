/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface UIStatusBarItem : NSObject {
@private
	int _type;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSString *indicatorName;	// G=0x30186b69; @dynamic
@property(readonly, assign, nonatomic) int leftOrder;	// G=0x3002d25d; @dynamic
@property(readonly, assign, nonatomic) int priority;	// G=0x3003f86d; @dynamic
@property(readonly, assign, nonatomic) int rightOrder;	// G=0x3002d2a1; @dynamic
@property(readonly, assign, nonatomic) int type;	// G=0x3003e4d5; @synthesize=_type
@property(readonly, assign, nonatomic) Class viewClass;	// G=0x3003e561; @dynamic
+ (BOOL)itemType:(int)type canBeEnabledForData:(id)data style:(int)style;	// 0x3002cb61
+ (id)itemWithType:(int)type;	// 0x3002d159
+ (BOOL)typeIsValid:(int)valid;	// 0x3002d1c5
- (id)initWithType:(int)type;	// 0x3003e375
- (BOOL)appearsInRegion:(int)region;	// 0x3002d1d1
- (BOOL)appearsOnLeft;	// 0x3002d23d
- (BOOL)appearsOnRight;	// 0x3002d281
- (int)compareLeftOrder:(id)order;	// 0x3002ef49
- (int)comparePriority:(id)priority;	// 0x3003f835
- (int)compareRightOrder:(id)order;	// 0x30164419
- (id)description;	// 0x303288c9
// declared property getter: - (id)indicatorName;	// 0x30186b69
// declared property getter: - (int)leftOrder;	// 0x3002d25d
// declared property getter: - (int)priority;	// 0x3003f86d
// declared property getter: - (int)rightOrder;	// 0x3002d2a1
// declared property getter: - (int)type;	// 0x3003e4d5
// declared property getter: - (Class)viewClass;	// 0x3003e561
@end

