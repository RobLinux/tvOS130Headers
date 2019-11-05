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

@class NSString;

@interface CLPContext : PBCodable <NSCopying> {

	NSString* _bundleCategory;
	int _type;
	int _workoutType;
	BOOL _isDriving;
	SCD_Struct_CL1 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                               //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasIsDriving; 
@property (assign,nonatomic) BOOL isDriving;                         //@synthesize isDriving=_isDriving - In the implementation block
@property (assign,nonatomic) BOOL hasWorkoutType; 
@property (assign,nonatomic) int workoutType;                        //@synthesize workoutType=_workoutType - In the implementation block
@property (nonatomic,readonly) BOOL hasBundleCategory; 
@property (nonatomic,retain) NSString * bundleCategory;              //@synthesize bundleCategory=_bundleCategory - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(int)type;
-(void)setType:(int)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(void)setWorkoutType:(int)arg1 ;
-(int)workoutType;
-(BOOL)isDriving;
-(void)setBundleCategory:(NSString *)arg1 ;
-(void)setIsDriving:(BOOL)arg1 ;
-(void)setHasIsDriving:(BOOL)arg1 ;
-(BOOL)hasIsDriving;
-(void)setHasWorkoutType:(BOOL)arg1 ;
-(BOOL)hasWorkoutType;
-(BOOL)hasBundleCategory;
-(NSString *)bundleCategory;
@end

