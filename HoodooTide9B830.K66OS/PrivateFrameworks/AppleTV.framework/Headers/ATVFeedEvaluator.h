/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSDateFormatter, NSNumberFormatter;
@protocol ATVReadWriteFeedResource;

__attribute__((visibility("hidden")))
@interface ATVFeedEvaluator : NSObject {
@private
	NSDateFormatter *_zuluDateFormatter;	// 4 = 0x4
	NSNumberFormatter *_numberFormatter;	// 8 = 0x8
	NSMutableDictionary *_dateFormatterCache;	// 12 = 0xc
	id<ATVReadWriteFeedResource> _feedResource;	// 16 = 0x10
}
@property(retain) id<ATVReadWriteFeedResource> feedResource;	// G=0x32947efd; S=0x32947f11; @synthesize=_feedResource
+ (id)evaluatePlist:(id)plist withFeedResource:(id)feedResource;	// 0x32947db1
- (id)init;	// 0x32947e19
- (id)_evaluateArguments:(id)arguments commandForErrorLogging:(id)errorLogging;	// 0x32948b49
- (id)_evaluateFunctionString:(id)string;	// 0x32948659
- (id)_evaluateObject:(id)object withRecursionLevel:(int)recursionLevel;	// 0x32947f35
- (id)_evaluateStoreCoverArts:(id)arts;	// 0x32948869
- (id)_ifElse:(id)anElse;	// 0x32948f1d
- (id)_localtime:(id)localtime;	// 0x32949099
- (id)_lookup:(id)lookup;	// 0x32949021
- (id)_removePreferences:(id)preferences;	// 0x329494d1
- (id)_setPreference:(id)preference;	// 0x329493a5
- (void)dealloc;	// 0x32947e75
// declared property getter: - (id)feedResource;	// 0x32947efd
// declared property setter: - (void)setFeedResource:(id)resource;	// 0x32947f11
@end

