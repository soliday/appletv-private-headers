/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedElement.h"

@class NSArray, ATVFeedImageElement;

__attribute__((visibility("hidden")))
@interface ATVFeedImageWithLabelsElement : ATVFeedElement {
@private
	ATVFeedImageElement *_image;	// 28 = 0x1c
	NSArray *_labels;	// 32 = 0x20
}
@property(retain, nonatomic) ATVFeedImageElement *image;	// G=0x32b18701; S=0x32b18711; @synthesize=_image
@property(retain, nonatomic) NSArray *labels;	// G=0x32b18735; S=0x32b18745; @synthesize=_labels
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x32b18509
- (void)dealloc;	// 0x32b186a1
// declared property getter: - (id)image;	// 0x32b18701
// declared property getter: - (id)labels;	// 0x32b18735
// declared property setter: - (void)setImage:(id)image;	// 0x32b18711
// declared property setter: - (void)setLabels:(id)labels;	// 0x32b18745
@end

