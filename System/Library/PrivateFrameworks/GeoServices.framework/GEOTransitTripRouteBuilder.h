/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSMutableArray, NSMutableData, GEOMapRegion, GEOPDTransitTripGeometry, GEOPBTransitLine, NSArray;

@interface GEOTransitTripRouteBuilder : NSObject {

	NSMutableArray* _steps;
	NSMutableArray* _composedGuidanceEvents;
	NSMutableArray* _legs;
	NSMutableData* _pointsData;
	NSMutableArray* _pointSections;
	GEOMapRegion* _boundingMapRegion;
	GEOPDTransitTripGeometry* _geometry;
	GEOPBTransitLine* _line;
	NSArray* _stops;

}

@property (nonatomic,readonly) GEOMapRegion * boundingMapRegion;              //@synthesize boundingMapRegion=_boundingMapRegion - In the implementation block
@property (nonatomic,readonly) NSMutableArray * pointSections;                //@synthesize pointSections=_pointSections - In the implementation block
-(void)buildRoute:(id)arg1 ;
-(id)initWithGeometry:(id)arg1 andLine:(id)arg2 andStops:(id)arg3 ;
-(GEOMapRegion *)boundingMapRegion;
-(void)buildPointSectionsForRoute:(id)arg1 ;
-(NSMutableArray *)pointSections;
-(double)_buildPointSectionsForRoute:(id)arg1 pointRange:(NSRange)arg2 stepIndex:(unsigned long long)arg3 currentTransitLineColor:(id)arg4 startDistance:(double)arg5 ;
@end

