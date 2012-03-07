/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@class NSString, UIView, NSArray;

@interface UITableViewSection : NSObject <NSCoding> {
@private
	NSString *_headerTitle;	// 4 = 0x4
	UIView *_headerView;	// 8 = 0x8
	NSString *_footerTitle;	// 12 = 0xc
	UIView *_footerView;	// 16 = 0x10
	NSArray *_rows;	// 20 = 0x14
}
@property(copy, nonatomic) NSString *footerTitle;	// G=0x35424855; S=0x35424865; @synthesize=_footerTitle
@property(retain, nonatomic) UIView *footerView;	// G=0x35424889; S=0x35424899; @synthesize=_footerView
@property(copy, nonatomic) NSString *headerTitle;	// G=0x354247ed; S=0x354247fd; @synthesize=_headerTitle
@property(retain, nonatomic) UIView *headerView;	// G=0x35424821; S=0x35424831; @synthesize=_headerView
@property(copy, nonatomic) NSArray *rows;	// G=0x354248bd; S=0x354248cd; @synthesize=_rows
+ (id)sectionWithRows:(id)rows;	// 0x354244ed
- (id)initWithCoder:(id)coder;	// 0x35424551
- (void)dealloc;	// 0x35424751
- (void)encodeWithCoder:(id)coder;	// 0x3542466d
// declared property getter: - (id)footerTitle;	// 0x35424855
// declared property getter: - (id)footerView;	// 0x35424889
// declared property getter: - (id)headerTitle;	// 0x354247ed
// declared property getter: - (id)headerView;	// 0x35424821
// declared property getter: - (id)rows;	// 0x354248bd
// declared property setter: - (void)setFooterTitle:(id)title;	// 0x35424865
// declared property setter: - (void)setFooterView:(id)view;	// 0x35424899
// declared property setter: - (void)setHeaderTitle:(id)title;	// 0x354247fd
// declared property setter: - (void)setHeaderView:(id)view;	// 0x35424831
// declared property setter: - (void)setRows:(id)rows;	// 0x354248cd
@end
