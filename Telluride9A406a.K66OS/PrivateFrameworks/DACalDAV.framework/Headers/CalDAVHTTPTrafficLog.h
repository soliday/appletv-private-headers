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
+ (id)instance;	// 0x32edaa4d
- (id)init;	// 0x32edaa95
- (void)dealloc;	// 0x32edab0d
- (BOOL)enabled;	// 0x32edab59
- (void)finishSnippets;	// 0x32edabbd
- (void)logData:(id)data;	// 0x32edac51
- (void)logString:(id)string;	// 0x32edab7d
- (void)logStringWithFormat:(id)format;	// 0x32edabc1
@end

