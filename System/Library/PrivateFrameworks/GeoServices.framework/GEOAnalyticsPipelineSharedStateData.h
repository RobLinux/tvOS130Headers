/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:01 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEOAnalyticsPipelineStateData.h>

@class geo_isolater;

@interface GEOAnalyticsPipelineSharedStateData : GEOAnalyticsPipelineStateData {

	geo_isolater* _placeIso;

}
+(id)sharedData;
-(id)init;
-(void)_populateWithGEOTransitPlaceCard:(id)arg1 ;
-(void)_populateWithGEOTransitDepartureSequenceUsage:(id)arg1 ;
-(void)populateWithPlaceActionDetails:(id)arg1 ;
-(BOOL)hasPlaceCard_PlaceActionDetails;
-(BOOL)hasPlaceCard_PlaceActionDetails_TransitPlaceCard;
-(BOOL)hasPlaceCard_PlaceActionDetails_TransitPlaceCard_TransitDepartureSequence;
-(void)performPlaceCardStateUpdate:(/*^block*/id)arg1 ;
-(void)clearPlaceCardStateData;
-(void)populateWithPlace:(id)arg1 timestamp:(double)arg2 resultIndex:(int)arg3 ;
-(void)populateWithChildPlace:(id)arg1 timestamp:(double)arg2 resultIndex:(int)arg3 ;
-(BOOL)hasPlaceCardStateData;
-(BOOL)hasMapsServerData;
-(BOOL)hasSuggestionsData;
-(void)clearSuggestionsData;
@end

