/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

#import <NSObject.h> // Unknown library
#import "IMFoundation-Structs.h"

@class NSArray, NSString, NSAttributedString;

@interface IMAttributedStringParserContext : NSObject {
	NSAttributedString *_inString;	// 4 = 0x4
}
@property(readonly, retain) NSAttributedString *inString;	// G=0x31ae1915; @synthesize=_inString
@property(readonly, retain) NSString *name;	// G=0x31ae16a5; 
@property(readonly, retain) NSArray *resultsForLogging;	// G=0x31ae16b1; 
@property(readonly, assign) BOOL shouldPreprocess;	// G=0x31ae16c1; 
- (id)initWithAttributedString:(id)attributedString;	// 0x31ae18c9
- (void)dealloc;	// 0x31ae1881
// declared property getter: - (id)inString;	// 0x31ae1915
// declared property getter: - (id)name;	// 0x31ae16a5
- (void)parser:(id)parser foundAttributes:(id)attributes inRange:(NSRange)range;	// 0x31ae16b9
- (id)parser:(id)parser preprocessedAttributesForAttributes:(id)attributes range:(NSRange)range;	// 0x31ae16c5
- (void)parserDidEnd:(id)parser;	// 0x31ae16bd
- (void)parserDidStart:(id)parser;	// 0x31ae16b5
// declared property getter: - (id)resultsForLogging;	// 0x31ae16b1
// declared property getter: - (BOOL)shouldPreprocess;	// 0x31ae16c1
@end

