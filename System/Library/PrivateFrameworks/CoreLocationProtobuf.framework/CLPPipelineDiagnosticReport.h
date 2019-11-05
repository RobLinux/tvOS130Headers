/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:11 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreLocationProtobuf/NSCopying.h>

@interface CLPPipelineDiagnosticReport : PBCodable <NSCopying> {

	SCD_Struct_CL12* _prbOnFloorEstimates;
	double _prbCoarseIndoorSaysIndoor;
	double _prbGpsSaysIndoor;
	double _prbInjectionGainRetryLimitOk;
	double _prbInjectionOccupancyRetryLimitOk;
	double _prbInlierEstimate;
	double _prbLocalizerIoWrapperSaysWifiOk;
	double _prbOnFloorsEstimate;
	double _prbParticleFilterSaysYield;
	double _prbPipelinedSaysYield;
	double _prbWifiSaysIndoor;
	int _pfYieldStatusBeforeCalculatePose;
	int _yieldStatusBeforeCalculatePose;
	int _yieldType;
	SCD_Struct_CL13 _has;

}

@property (assign,nonatomic) BOOL hasYieldType; 
@property (assign,nonatomic) int yieldType;                                              //@synthesize yieldType=_yieldType - In the implementation block
@property (assign,nonatomic) BOOL hasPrbPipelinedSaysYield; 
@property (assign,nonatomic) double prbPipelinedSaysYield;                               //@synthesize prbPipelinedSaysYield=_prbPipelinedSaysYield - In the implementation block
@property (assign,nonatomic) BOOL hasPrbCoarseIndoorSaysIndoor; 
@property (assign,nonatomic) double prbCoarseIndoorSaysIndoor;                           //@synthesize prbCoarseIndoorSaysIndoor=_prbCoarseIndoorSaysIndoor - In the implementation block
@property (assign,nonatomic) BOOL hasPrbWifiSaysIndoor; 
@property (assign,nonatomic) double prbWifiSaysIndoor;                                   //@synthesize prbWifiSaysIndoor=_prbWifiSaysIndoor - In the implementation block
@property (assign,nonatomic) BOOL hasPrbGpsSaysIndoor; 
@property (assign,nonatomic) double prbGpsSaysIndoor;                                    //@synthesize prbGpsSaysIndoor=_prbGpsSaysIndoor - In the implementation block
@property (assign,nonatomic) BOOL hasPrbParticleFilterSaysYield; 
@property (assign,nonatomic) double prbParticleFilterSaysYield;                          //@synthesize prbParticleFilterSaysYield=_prbParticleFilterSaysYield - In the implementation block
@property (assign,nonatomic) BOOL hasPrbOnFloorsEstimate; 
@property (assign,nonatomic) double prbOnFloorsEstimate;                                 //@synthesize prbOnFloorsEstimate=_prbOnFloorsEstimate - In the implementation block
@property (nonatomic,readonly) unsigned long long prbOnFloorEstimatesCount; 
@property (nonatomic,readonly) double* prbOnFloorEstimates; 
@property (assign,nonatomic) BOOL hasPrbInlierEstimate; 
@property (assign,nonatomic) double prbInlierEstimate;                                   //@synthesize prbInlierEstimate=_prbInlierEstimate - In the implementation block
@property (assign,nonatomic) BOOL hasPrbLocalizerIoWrapperSaysWifiOk; 
@property (assign,nonatomic) double prbLocalizerIoWrapperSaysWifiOk;                     //@synthesize prbLocalizerIoWrapperSaysWifiOk=_prbLocalizerIoWrapperSaysWifiOk - In the implementation block
@property (assign,nonatomic) BOOL hasPrbInjectionOccupancyRetryLimitOk; 
@property (assign,nonatomic) double prbInjectionOccupancyRetryLimitOk;                   //@synthesize prbInjectionOccupancyRetryLimitOk=_prbInjectionOccupancyRetryLimitOk - In the implementation block
@property (assign,nonatomic) BOOL hasPrbInjectionGainRetryLimitOk; 
@property (assign,nonatomic) double prbInjectionGainRetryLimitOk;                        //@synthesize prbInjectionGainRetryLimitOk=_prbInjectionGainRetryLimitOk - In the implementation block
@property (assign,nonatomic) BOOL hasPfYieldStatusBeforeCalculatePose; 
@property (assign,nonatomic) int pfYieldStatusBeforeCalculatePose;                       //@synthesize pfYieldStatusBeforeCalculatePose=_pfYieldStatusBeforeCalculatePose - In the implementation block
@property (assign,nonatomic) BOOL hasYieldStatusBeforeCalculatePose; 
@property (assign,nonatomic) int yieldStatusBeforeCalculatePose;                         //@synthesize yieldStatusBeforeCalculatePose=_yieldStatusBeforeCalculatePose - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned long long)prbOnFloorEstimatesCount;
-(void)clearPrbOnFloorEstimates;
-(double)prbOnFloorEstimateAtIndex:(unsigned long long)arg1 ;
-(void)addPrbOnFloorEstimate:(double)arg1 ;
-(int)yieldType;
-(void)setYieldType:(int)arg1 ;
-(void)setHasYieldType:(BOOL)arg1 ;
-(BOOL)hasYieldType;
-(id)yieldTypeAsString:(int)arg1 ;
-(int)StringAsYieldType:(id)arg1 ;
-(void)setPrbPipelinedSaysYield:(double)arg1 ;
-(void)setHasPrbPipelinedSaysYield:(BOOL)arg1 ;
-(BOOL)hasPrbPipelinedSaysYield;
-(void)setPrbCoarseIndoorSaysIndoor:(double)arg1 ;
-(void)setHasPrbCoarseIndoorSaysIndoor:(BOOL)arg1 ;
-(BOOL)hasPrbCoarseIndoorSaysIndoor;
-(void)setPrbWifiSaysIndoor:(double)arg1 ;
-(void)setHasPrbWifiSaysIndoor:(BOOL)arg1 ;
-(BOOL)hasPrbWifiSaysIndoor;
-(void)setPrbGpsSaysIndoor:(double)arg1 ;
-(void)setHasPrbGpsSaysIndoor:(BOOL)arg1 ;
-(BOOL)hasPrbGpsSaysIndoor;
-(void)setPrbParticleFilterSaysYield:(double)arg1 ;
-(void)setHasPrbParticleFilterSaysYield:(BOOL)arg1 ;
-(BOOL)hasPrbParticleFilterSaysYield;
-(void)setPrbOnFloorsEstimate:(double)arg1 ;
-(void)setHasPrbOnFloorsEstimate:(BOOL)arg1 ;
-(BOOL)hasPrbOnFloorsEstimate;
-(double*)prbOnFloorEstimates;
-(void)setPrbOnFloorEstimates:(double*)arg1 count:(unsigned long long)arg2 ;
-(void)setPrbInlierEstimate:(double)arg1 ;
-(void)setHasPrbInlierEstimate:(BOOL)arg1 ;
-(BOOL)hasPrbInlierEstimate;
-(void)setPrbLocalizerIoWrapperSaysWifiOk:(double)arg1 ;
-(void)setHasPrbLocalizerIoWrapperSaysWifiOk:(BOOL)arg1 ;
-(BOOL)hasPrbLocalizerIoWrapperSaysWifiOk;
-(void)setPrbInjectionOccupancyRetryLimitOk:(double)arg1 ;
-(void)setHasPrbInjectionOccupancyRetryLimitOk:(BOOL)arg1 ;
-(BOOL)hasPrbInjectionOccupancyRetryLimitOk;
-(void)setPrbInjectionGainRetryLimitOk:(double)arg1 ;
-(void)setHasPrbInjectionGainRetryLimitOk:(BOOL)arg1 ;
-(BOOL)hasPrbInjectionGainRetryLimitOk;
-(int)pfYieldStatusBeforeCalculatePose;
-(void)setPfYieldStatusBeforeCalculatePose:(int)arg1 ;
-(void)setHasPfYieldStatusBeforeCalculatePose:(BOOL)arg1 ;
-(BOOL)hasPfYieldStatusBeforeCalculatePose;
-(id)pfYieldStatusBeforeCalculatePoseAsString:(int)arg1 ;
-(int)StringAsPfYieldStatusBeforeCalculatePose:(id)arg1 ;
-(int)yieldStatusBeforeCalculatePose;
-(void)setYieldStatusBeforeCalculatePose:(int)arg1 ;
-(void)setHasYieldStatusBeforeCalculatePose:(BOOL)arg1 ;
-(BOOL)hasYieldStatusBeforeCalculatePose;
-(id)yieldStatusBeforeCalculatePoseAsString:(int)arg1 ;
-(int)StringAsYieldStatusBeforeCalculatePose:(id)arg1 ;
-(double)prbPipelinedSaysYield;
-(double)prbCoarseIndoorSaysIndoor;
-(double)prbWifiSaysIndoor;
-(double)prbGpsSaysIndoor;
-(double)prbParticleFilterSaysYield;
-(double)prbOnFloorsEstimate;
-(double)prbInlierEstimate;
-(double)prbLocalizerIoWrapperSaysWifiOk;
-(double)prbInjectionOccupancyRetryLimitOk;
-(double)prbInjectionGainRetryLimitOk;
@end

