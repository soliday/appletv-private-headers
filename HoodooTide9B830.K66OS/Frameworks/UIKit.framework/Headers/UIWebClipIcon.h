/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class NSURL;

@interface UIWebClipIcon : NSObject {
	BOOL _precomposed;	// 4 = 0x4
	BOOL _siteWide;	// 5 = 0x5
	CGSize _bestSize;	// 8 = 0x8
	NSURL *_url;	// 16 = 0x10
}
@property(assign, nonatomic) CGSize bestSize;	// G=0x302a4b71; S=0x302a4b8d; @synthesize=_bestSize
@property(assign, nonatomic, getter=isPrecomposed) BOOL precomposed;	// G=0x302a4b31; S=0x302a4b41; @synthesize=_precomposed
@property(assign, nonatomic, getter=isSiteWide) BOOL siteWide;	// G=0x302a4b51; S=0x302a4b61; @synthesize=_siteWide
@property(retain, nonatomic) NSURL *url;	// G=0x302a4ba1; S=0x302a4bb1; @synthesize=_url
// declared property getter: - (CGSize)bestSize;	// 0x302a4b71
- (int)compare:(id)compare preferringDeviceIconSizes:(BOOL)sizes;	// 0x302a4939
- (void)dealloc;	// 0x302a48ed
// declared property getter: - (BOOL)isPrecomposed;	// 0x302a4b31
// declared property getter: - (BOOL)isSiteWide;	// 0x302a4b51
// declared property setter: - (void)setBestSize:(CGSize)size;	// 0x302a4b8d
// declared property setter: - (void)setPrecomposed:(BOOL)precomposed;	// 0x302a4b41
// declared property setter: - (void)setSiteWide:(BOOL)wide;	// 0x302a4b61
// declared property setter: - (void)setUrl:(id)url;	// 0x302a4bb1
// declared property getter: - (id)url;	// 0x302a4ba1
@end

