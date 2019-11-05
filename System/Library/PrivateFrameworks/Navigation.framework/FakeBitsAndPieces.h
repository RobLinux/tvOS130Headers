/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOLocation, NSString, NSDate, GEOComposedWaypoint, MNCommuteDestinationSuggestion;

@interface FakeBitsAndPieces : NSObject {

	GEOLocation* _location;
	NSString* _name;
	double _weight;
	unsigned long long _type;
	NSDate* _expires;
	NSDate* _startDate;
	NSDate* _endDate;
	GEOComposedWaypoint* _waypoint;

}

@property (nonatomic,retain) GEOLocation * location;                               //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) double weight;                                        //@synthesize weight=_weight - In the implementation block
@property (assign,nonatomic) unsigned long long type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSDate * expires;                                     //@synthesize expires=_expires - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                                   //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                                     //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain) GEOComposedWaypoint * waypoint;                       //@synthesize waypoint=_waypoint - In the implementation block
@property (readonly) MNCommuteDestinationSuggestion * fakeSuggestion; 
-(NSString *)name;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(double)weight;
-(void)setWeight:(double)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(GEOLocation *)location;
-(void)setLocation:(GEOLocation *)arg1 ;
-(GEOComposedWaypoint *)waypoint;
-(void)setWaypoint:(GEOComposedWaypoint *)arg1 ;
-(NSDate *)expires;
-(void)setExpires:(NSDate *)arg1 ;
-(MNCommuteDestinationSuggestion *)fakeSuggestion;
@end

