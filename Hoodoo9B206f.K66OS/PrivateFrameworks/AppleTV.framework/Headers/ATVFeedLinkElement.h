/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedElement.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedLinkElement : ATVFeedElement {
@private
	NSString *_url;	// 28 = 0x1c
}
@property(copy, nonatomic) NSString *url;	// G=0x367c5361; S=0x367c5371; @synthesize=_url
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x367c52b5
- (void)dealloc;	// 0x367c5315
// declared property setter: - (void)setUrl:(id)url;	// 0x367c5371
// declared property getter: - (id)url;	// 0x367c5361
@end

