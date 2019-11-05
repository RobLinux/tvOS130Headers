/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:39 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKLabelNavFeature.h>

@class VKLabelNavRoadLabel, NSString;

@interface VKLabelNavManeuver : NSObject <VKLabelNavFeature> {

	VKLabelNavRoadLabel* _maneuverSign;
	Matrix<double, 3, 1> _worldPoint;
	PolylineCoordinate _routeOffset;
	NSString* _name;
	int _type;
	int _drivingSide;
	BOOL _isVisible;
	BOOL _isPicked;

}

@property (nonatomic,readonly) BOOL isOnRoute; 
@property (nonatomic,readonly) BOOL isAwayFromRoute; 
@property (nonatomic,readonly) BOOL isRamp; 
@property (nonatomic,readonly) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * shieldDisplayGroup; 
@property (nonatomic,readonly) BOOL isStartOfRoadName; 
@property (nonatomic,readonly) BOOL isInGuidance; 
@property (nonatomic,readonly) long long intraRoadPriority; 
@property (nonatomic,readonly) BOOL isGuidanceStepStart; 
@property (nonatomic,readonly) BOOL isVisible;                                  //@synthesize isVisible=_isVisible - In the implementation block
@property (nonatomic,readonly) VKLabelNavRoadLabel * maneuverSign;              //@synthesize maneuverSign=_maneuverSign - In the implementation block
@property (nonatomic,readonly) PolylineCoordinate routeOffset;                  //@synthesize routeOffset=_routeOffset - In the implementation block
@property (nonatomic,readonly) BOOL isEtaFeature; 
@property (nonatomic,readonly) BOOL isTrafficCameraFeature; 
@property (assign,nonatomic) BOOL isPicked;                                     //@synthesize isPicked=_isPicked - In the implementation block
-(NSString *)name;
-(id)description;
-(void)dealloc;
-(BOOL)isVisible;
-(BOOL)isRamp;
-(BOOL)isPicked;
-(PolylineCoordinate)routeOffset;
-(void)layoutWithNavContext:(NavContext*)arg1 ;
-(void)setIsPicked:(BOOL)arg1 ;
-(BOOL)isTrafficCameraFeature;
-(BOOL)isEtaFeature;
-(BOOL)isOnRoute;
-(BOOL)isAwayFromRoute;
-(NSString *)shieldDisplayGroup;
-(BOOL)isStartOfRoadName;
-(BOOL)isInGuidance;
-(long long)intraRoadPriority;
-(BOOL)isGuidanceStepStart;
-(id)initWithGEOComposedRouteStep:(id)arg1 ;
-(void)createLabelWithNavContext:(NavContext*)arg1 artworkCache:(VKLabelNavArtworkCache*)arg2 ;
-(void)prepareStyleVarsWithContext:(NavContext*)arg1 ;
-(VKLabelNavRoadLabel *)maneuverSign;
@end

