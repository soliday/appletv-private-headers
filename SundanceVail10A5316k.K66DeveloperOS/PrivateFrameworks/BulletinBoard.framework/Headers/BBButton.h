/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import "NSCoding.h"
#import "BulletinBoard-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class BBAction, NSString;

@interface BBButton : NSObject <NSCopying, NSCoding> {
	NSString *_title;	// 4 = 0x4
	BBAction *_action;	// 8 = 0x8
}
@property(retain, nonatomic) BBAction *action;	// G=0x36b7ae3d; S=0x36b7ae4d; @synthesize=_action
@property(copy, nonatomic) NSString *title;	// G=0x36b7ae19; S=0x36b7ae2d; @synthesize=_title
+ (void)_addButtonToCache:(id)cache;	// 0x36b7a821
+ (id)_possiblyCachedButtonForInitializedButton:(id)initializedButton;	// 0x36b7a8ed
+ (void)_removeButtonFromCache:(id)cache;	// 0x36b7a879
+ (id)buttonWithTitle:(id)title action:(id)action;	// 0x36b7a98d
- (id)initWithCoder:(id)coder;	// 0x36b7ace5
// declared property getter: - (id)action;	// 0x36b7ae3d
- (id)copyWithZone:(NSZone *)zone;	// 0x36b7acd5
- (void)dealloc;	// 0x36b7aa95
- (id)description;	// 0x36b7ac45
- (void)encodeWithCoder:(id)coder;	// 0x36b7adb5
- (unsigned)hash;	// 0x36b7abfd
- (BOOL)isEqual:(id)equal;	// 0x36b7ab09
// declared property setter: - (void)setAction:(id)action;	// 0x36b7ae4d
// declared property setter: - (void)setTitle:(id)title;	// 0x36b7ae2d
// declared property getter: - (id)title;	// 0x36b7ae19
@end
