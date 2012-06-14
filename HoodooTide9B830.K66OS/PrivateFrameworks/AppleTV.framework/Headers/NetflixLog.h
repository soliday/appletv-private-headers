/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "NetflixNrdObjectProtocol.h"
#import "NetflixNrdObject.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface NetflixLog : NetflixNrdObject <NetflixNrdObjectProtocol> {
}
@property(copy) NSArray *traceAreas;	// G=0x32c486ad; S=0x32c48751; 
+ (id)sharedInstance;	// 0x32c485a1
- (id)init;	// 0x32c48681
- (void)debug:(id)debug;	// 0x32c487cd
- (void)error:(id)error;	// 0x32c487f5
- (void)fatal:(id)fatal;	// 0x32c48809
- (BOOL)handleEvent:(id)event;	// 0x32c4888d
- (void)info:(id)info;	// 0x32c487e1
- (void)log:(unsigned)log message:(id)message;	// 0x32c487a1
// declared property setter: - (void)setTraceAreas:(id)areas;	// 0x32c48751
- (void)trace:(id)trace;	// 0x32c4881d
// declared property getter: - (id)traceAreas;	// 0x32c486ad
@end

