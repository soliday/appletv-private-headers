/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library


@interface GEOSearchProvider : NSObject {
	id _error;	// 4 = 0x4
}
@property(copy, nonatomic) id error;	// G=0x35f3006d; S=0x35f3007d; @synthesize=_error
+ (id)hostname;	// 0x35f3000d
+ (unsigned short)provider;	// 0x35f30009
- (void)cancel;	// 0x35f30069
- (void)dealloc;	// 0x35f30019
// declared property getter: - (id)error;	// 0x35f3006d
- (void)search:(id)search finished:(id)finished spellingSuggestion:(id)suggestion refinement:(id)refinement error:(id)error;	// 0x35f30065
// declared property setter: - (void)setError:(id)error;	// 0x35f3007d
@end

