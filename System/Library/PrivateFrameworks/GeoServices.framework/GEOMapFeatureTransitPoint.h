/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:18 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOMapFeatureTransitStop, GEOMapFeatureTransitHall, GEOMapFeatureTransitStation, NSString, NSArray;

@interface GEOMapFeatureTransitPoint : NSObject {

	GEOTransitNodeFeature* _feature;
	SCD_Struct_GE33 _coordinate;
	double _boundingRadius;
	SCD_Struct_GE41 _boundingRect;
	SCD_Struct_GE33* _polygonPoints;
	unsigned long long _polygonPointsCount;

}

@property (nonatomic,readonly) GEOTileKey tileKey; 
@property (nonatomic,readonly) GEOTransitNodeFeature* feature; 
@property (nonatomic,readonly) GEOMapFeatureTransitStop * stop; 
@property (nonatomic,readonly) GEOMapFeatureTransitHall * hall; 
@property (nonatomic,readonly) GEOMapFeatureTransitStation * station; 
@property (nonatomic,readonly) SCD_Struct_GE33 coordinate;                         //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,readonly) unsigned long long transitID; 
@property (nonatomic,readonly) NSString * internalName; 
@property (nonatomic,readonly) NSArray * internalSystemNames; 
@property (nonatomic,readonly) double boundingRadius;                              //@synthesize boundingRadius=_boundingRadius - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE41 boundingRect;                       //@synthesize boundingRect=_boundingRect - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE33* polygonPoints;                     //@synthesize polygonPoints=_polygonPoints - In the implementation block
@property (nonatomic,readonly) unsigned long long polygonPointsCount;              //@synthesize polygonPointsCount=_polygonPointsCount - In the implementation block
-(id)description;
-(void)dealloc;
-(GEOMapFeatureTransitStop *)stop;
-(SCD_Struct_GE33)coordinate;
-(GEOTransitNodeFeature*)feature;
-(GEOTileKey)tileKey;
-(id)initWithFeature:(GEOTransitNodeFeature*)arg1 ;
-(unsigned long long)transitID;
-(NSString *)internalName;
-(double)boundingRadius;
-(SCD_Struct_GE41)boundingRect;
-(SCD_Struct_GE33*)polygonPoints;
-(unsigned long long)polygonPointsCount;
-(GEOMapFeatureTransitStation *)station;
-(NSArray *)internalSystemNames;
-(GEOMapFeatureTransitHall *)hall;
-(void)updateWithGeometryFeature:(SCD_Struct_GE229*)arg1 ;
@end
