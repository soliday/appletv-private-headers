/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <NSObject.h> // Unknown library

@class DACoreDAVLogger;

@interface CalDAVHTTPTrafficLog : NSObject {
	DACoreDAVLogger *_curLogger;	// 4 = 0x4
}
+ (id)instance;	// 0x331568d1
- (id)init;	// 0x33156919
- (void)dealloc;	// 0x33156991
- (BOOL)enabled;	// 0x331569dd
- (void)finishSnippets;	// 0x33156a41
- (void)logData:(id)data;	// 0x33156ad5
- (void)logString:(id)string;	// 0x33156a01
- (void)logStringWithFormat:(id)format;	// 0x33156a45
@end

