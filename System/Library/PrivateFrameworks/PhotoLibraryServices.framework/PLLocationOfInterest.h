/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:26 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID, PLLocationOfInterestLocation, NSMutableArray;

@interface PLLocationOfInterest : NSObject {

	NSUUID* _identifier;
	long long _type;
	double _typeRadius;
	PLLocationOfInterestLocation* _routineLocation;
	PLLocationOfInterestLocation* _mapItemLocation;
	NSMutableArray* _visits;

}

@property (nonatomic,retain) NSMutableArray * visits;                                       //@synthesize visits=_visits - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long type;                                              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) double typeRadius;                                           //@synthesize typeRadius=_typeRadius - In the implementation block
@property (nonatomic,readonly) PLLocationOfInterestLocation * routineLocation;              //@synthesize routineLocation=_routineLocation - In the implementation block
@property (nonatomic,readonly) PLLocationOfInterestLocation * mapItemLocation;              //@synthesize mapItemLocation=_mapItemLocation - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)type;
-(NSUUID *)identifier;
-(double)distanceFromLocation:(id)arg1 ;
-(void)setVisits:(NSMutableArray *)arg1 ;
-(NSMutableArray *)visits;
-(id)initWithIdentifier:(id)arg1 locationOfInterestType:(long long)arg2 typeRadius:(double)arg3 routineLocation:(id)arg4 mapItemLocation:(id)arg5 ;
-(void)addVisit:(id)arg1 ;
-(void)removeVisit:(id)arg1 ;
-(double)centerDistanceFromLocation:(id)arg1 ;
-(double)typeRadius;
-(PLLocationOfInterestLocation *)routineLocation;
-(PLLocationOfInterestLocation *)mapItemLocation;
@end
