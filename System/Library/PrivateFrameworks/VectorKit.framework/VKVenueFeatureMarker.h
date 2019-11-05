/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKFeatureMarker.h>

@class GEOMapItemIdentifier, NSArray;

@interface VKVenueFeatureMarker : VKFeatureMarker {

	BOOL _localize;

}

@property (nonatomic,readonly) unsigned long long businessID; 
@property (nonatomic,readonly) GEOMapItemIdentifier * mapIdentifier; 
@property (nonatomic,readonly) NSArray * buildings; 
-(id)name;
-(unsigned long long)businessID;
-(NSArray *)buildings;
-(id)shortName;
-(id)initWithVenue:(const Venue*)arg1 localize:(BOOL)arg2 ;
-(const shared_ptr<md::VenueFeatureMarker>*)venueFeatureMarker;
-(GEOMapItemIdentifier *)mapIdentifier;
@end

