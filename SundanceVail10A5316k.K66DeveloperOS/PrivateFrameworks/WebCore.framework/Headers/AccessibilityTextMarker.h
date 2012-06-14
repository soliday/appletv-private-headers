/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface AccessibilityTextMarker : NSObject {
@private
	AXObjectCache *_cache;	// 4 = 0x4
	TextMarkerData _textMarkerData;	// 8 = 0x8
}
+ (id)textMarkerWithVisiblePosition:(VisiblePosition *)visiblePosition cache:(AXObjectCache *)cache;	// 0x352c9fa9
- (id)initWithData:(id)data accessibilityObject:(WebAccessibilityObjectWrapper *)object;	// 0x352c9f65
- (id)initWithData:(id)data cache:(AXObjectCache *)cache;	// 0x352c9efd
- (id)initWithTextMarker:(TextMarkerData *)textMarker cache:(AXObjectCache *)cache;	// 0x352c9ea1
- (id).cxx_construct;	// 0x352ca0a1
- (id)dataRepresentation;	// 0x352ca001
- (id)description;	// 0x352ca059
- (VisiblePosition)visiblePosition;	// 0x352ca031
@end
