/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class NSMutableSet;

@interface CoreDAVSupportedReportSetItem : CoreDAVItem {
	NSMutableSet *_supportedReports;	// 24 = 0x18
}
@property(retain) NSMutableSet *supportedReports;	// G=0x35f755c5; S=0x35f755d9; @synthesize=_supportedReports
+ (id)copyParseRules;	// 0x35f7539d
- (id)init;	// 0x35f75261
- (void)addSupportedReport:(id)report;	// 0x35f7552d
- (void)dealloc;	// 0x35f7528d
- (id)description;	// 0x35f752d9
// declared property setter: - (void)setSupportedReports:(id)reports;	// 0x35f755d9
// declared property getter: - (id)supportedReports;	// 0x35f755c5
@end

