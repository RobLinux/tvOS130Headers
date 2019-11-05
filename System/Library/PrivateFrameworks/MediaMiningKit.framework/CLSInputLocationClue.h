/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:22 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/MediaMiningKit-Structs.h>
#import <MediaMiningKit/CLSInputClue.h>

@class CLSPlace;

@interface CLSInputLocationClue : CLSInputClue {

	CLSPlace* _place;

}
+(id)clueWithLocation:(id)arg1 ;
+(id)cluesWithLocations:(id)arg1 ;
-(id)description;
-(id)region;
-(id)location;
-(id)place;
-(void)setPlace:(id)arg1 ;
-(id)placemark;
-(id)projectedLocation;
-(BOOL)isEqualToClue:(id)arg1 ;
-(void)_prepareWithProgressBlock:(/*^block*/id)arg1 ;
-(id)regionInPlacemark;
-(CLLocationCoordinate2D)closestCoordinates;
-(BOOL)isDefinite;
@end
