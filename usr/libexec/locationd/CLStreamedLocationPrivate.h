/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:46 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <locationd/NSCopying.h>

@interface CLStreamedLocationPrivate : PBCodable <NSCopying> {

	double _deltaDistance;
	double _deltaDistanceAccuracy;
	double _groundAltitude;
	double _groundAltitudeUncertainty;
	double _maxAbsSlope;
	double _odometer;
	double _slope;
	double _timestampGps;
	FalseStepDetectorState _has;

}

@property (assign,nonatomic) BOOL hasOdometer; 
@property (assign,nonatomic) double odometer;                                //@synthesize odometer=_odometer - In the implementation block
@property (assign,nonatomic) BOOL hasDeltaDistance; 
@property (assign,nonatomic) double deltaDistance;                           //@synthesize deltaDistance=_deltaDistance - In the implementation block
@property (assign,nonatomic) BOOL hasDeltaDistanceAccuracy; 
@property (assign,nonatomic) double deltaDistanceAccuracy;                   //@synthesize deltaDistanceAccuracy=_deltaDistanceAccuracy - In the implementation block
@property (assign,nonatomic) BOOL hasTimestampGps; 
@property (assign,nonatomic) double timestampGps;                            //@synthesize timestampGps=_timestampGps - In the implementation block
@property (assign,nonatomic) BOOL hasSlope; 
@property (assign,nonatomic) double slope;                                   //@synthesize slope=_slope - In the implementation block
@property (assign,nonatomic) BOOL hasMaxAbsSlope; 
@property (assign,nonatomic) double maxAbsSlope;                             //@synthesize maxAbsSlope=_maxAbsSlope - In the implementation block
@property (assign,nonatomic) BOOL hasGroundAltitude; 
@property (assign,nonatomic) double groundAltitude;                          //@synthesize groundAltitude=_groundAltitude - In the implementation block
@property (assign,nonatomic) BOOL hasGroundAltitudeUncertainty; 
@property (assign,nonatomic) double groundAltitudeUncertainty;               //@synthesize groundAltitudeUncertainty=_groundAltitudeUncertainty - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(double)odometer;
-(void)setOdometer:(double)arg1 ;
-(double)slope;
-(void)setSlope:(double)arg1 ;
-(double)deltaDistance;
-(double)deltaDistanceAccuracy;
-(double)groundAltitude;
-(double)groundAltitudeUncertainty;
-(CLDaemonLocationPrivate*)daemonLocationPrivate;
-(BOOL)hasOdometer;
-(id)initWithDaemonLocationPrivate:(const CLDaemonLocationPrivate*)arg1 ;
-(void)setHasOdometer:(BOOL)arg1 ;
-(void)setDeltaDistance:(double)arg1 ;
-(void)setHasDeltaDistance:(BOOL)arg1 ;
-(BOOL)hasDeltaDistance;
-(void)setDeltaDistanceAccuracy:(double)arg1 ;
-(void)setHasDeltaDistanceAccuracy:(BOOL)arg1 ;
-(BOOL)hasDeltaDistanceAccuracy;
-(void)setHasSlope:(BOOL)arg1 ;
-(BOOL)hasSlope;
-(void)setMaxAbsSlope:(double)arg1 ;
-(void)setHasMaxAbsSlope:(BOOL)arg1 ;
-(BOOL)hasMaxAbsSlope;
-(void)setGroundAltitude:(double)arg1 ;
-(void)setHasGroundAltitude:(BOOL)arg1 ;
-(BOOL)hasGroundAltitude;
-(void)setGroundAltitudeUncertainty:(double)arg1 ;
-(void)setHasGroundAltitudeUncertainty:(BOOL)arg1 ;
-(BOOL)hasGroundAltitudeUncertainty;
-(double)maxAbsSlope;
-(void)setTimestampGps:(double)arg1 ;
-(void)setHasTimestampGps:(BOOL)arg1 ;
-(BOOL)hasTimestampGps;
-(double)timestampGps;
@end

