/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedRootElement.h"

@class NSArray, BRXMLElement;

__attribute__((visibility("hidden")))
@interface ATVFeedInterstitialGroupElement : ATVFeedRootElement {
@private
	NSArray *_interstitials;	// 52 = 0x34
	BRXMLElement *_xml;	// 56 = 0x38
}
@property(retain, nonatomic) NSArray *interstitials;	// G=0x367c61c9; S=0x367c61d9; @synthesize=_interstitials
@property(readonly, assign, nonatomic) BRXMLElement *xml;	// G=0x367c61fd; @synthesize=_xml
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x367c5ff9
- (void)dealloc;	// 0x367c6169
// declared property getter: - (id)interstitials;	// 0x367c61c9
// declared property setter: - (void)setInterstitials:(id)interstitials;	// 0x367c61d9
// declared property getter: - (id)xml;	// 0x367c61fd
@end

