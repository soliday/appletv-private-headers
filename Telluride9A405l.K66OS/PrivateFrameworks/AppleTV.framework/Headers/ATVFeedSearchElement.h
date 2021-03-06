/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedRootElement.h"

@class ATVFeedHeaderElement, NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedSearchElement : ATVFeedRootElement {
@private
	ATVFeedHeaderElement *_header;	// 44 = 0x2c
	NSString *_baseURL;	// 48 = 0x30
	BOOL _showPreview;	// 52 = 0x34
}
@property(copy, nonatomic) NSString *baseURL;	// G=0x35f233d9; S=0x35f233e9; @synthesize=_baseURL
@property(retain, nonatomic) ATVFeedHeaderElement *header;	// G=0x35f233a5; S=0x35f233b5; @synthesize=_header
@property(assign, nonatomic) BOOL showPreview;	// G=0x35f2340d; S=0x35f2341d; @synthesize=_showPreview
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x35f231fd
// declared property getter: - (id)baseURL;	// 0x35f233d9
- (void)dealloc;	// 0x35f23345
// declared property getter: - (id)header;	// 0x35f233a5
// declared property setter: - (void)setBaseURL:(id)url;	// 0x35f233e9
// declared property setter: - (void)setHeader:(id)header;	// 0x35f233b5
// declared property setter: - (void)setShowPreview:(BOOL)preview;	// 0x35f2341d
// declared property getter: - (BOOL)showPreview;	// 0x35f2340d
@end

