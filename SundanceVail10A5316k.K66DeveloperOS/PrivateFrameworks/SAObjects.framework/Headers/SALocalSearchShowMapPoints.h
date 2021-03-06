/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSNumber, NSString, SALocalSearchMapItem, NSURL;

@interface SALocalSearchShowMapPoints : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSString *directionsType;	// G=0x32f5659d; S=0x32f565b9; 
@property(retain, nonatomic) SALocalSearchMapItem *itemDestination;	// G=0x32f56609; S=0x32f5665d; 
@property(retain, nonatomic) SALocalSearchMapItem *itemSource;	// G=0x32f56699; S=0x32f566ed; 
@property(retain, nonatomic) NSNumber *regionOfInterestRadiusInMiles;	// G=0x32f56729; S=0x32f56745; 
@property(assign, nonatomic) BOOL showDirections;	// G=0x32f56761; S=0x32f567d9; 
@property(assign, nonatomic) BOOL showTraffic;	// G=0x32f5681d; S=0x32f56895; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x32f564c1; S=0x32f5653d; 
+ (id)showMapPoints;	// 0x32f56431
+ (id)showMapPointsWithDictionary:(id)dictionary context:(id)context;	// 0x32f56475
// declared property getter: - (id)directionsType;	// 0x32f5659d
- (id)encodedClassName;	// 0x32f56425
- (id)groupIdentifier;	// 0x32f56415
// declared property getter: - (id)itemDestination;	// 0x32f56609
// declared property getter: - (id)itemSource;	// 0x32f56699
// declared property getter: - (id)regionOfInterestRadiusInMiles;	// 0x32f56729
- (BOOL)requiresResponse;	// 0x32f568d9
// declared property setter: - (void)setDirectionsType:(id)type;	// 0x32f565b9
// declared property setter: - (void)setItemDestination:(id)destination;	// 0x32f5665d
// declared property setter: - (void)setItemSource:(id)source;	// 0x32f566ed
// declared property setter: - (void)setRegionOfInterestRadiusInMiles:(id)miles;	// 0x32f56745
// declared property setter: - (void)setShowDirections:(BOOL)directions;	// 0x32f567d9
// declared property setter: - (void)setShowTraffic:(BOOL)traffic;	// 0x32f56895
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x32f5653d
// declared property getter: - (BOOL)showDirections;	// 0x32f56761
// declared property getter: - (BOOL)showTraffic;	// 0x32f5681d
// declared property getter: - (id)targetAppId;	// 0x32f564c1
@end

