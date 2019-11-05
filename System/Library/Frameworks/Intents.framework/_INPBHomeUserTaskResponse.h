/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:02 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <Intents/_INPBHomeUserTaskResponse.h>
@class _INPBHomeUserTask;


@protocol _INPBHomeUserTaskResponse <NSObject>
@property (assign,nonatomic) int taskOutcome; 
@property (assign,nonatomic) BOOL hasTaskOutcome; 
@property (nonatomic,retain) _INPBHomeUserTask * userTask; 
@property (nonatomic,readonly) BOOL hasUserTask; 
@required
-(_INPBHomeUserTask *)userTask;
-(void)setUserTask:(id)arg1;
-(BOOL)hasUserTask;
-(id)taskOutcomeAsString:(int)arg1;
-(int)StringAsTaskOutcome:(id)arg1;
-(int)taskOutcome;
-(void)setTaskOutcome:(int)arg1;
-(BOOL)hasTaskOutcome;
-(void)setHasTaskOutcome:(BOOL)arg1;

@end

#import <Intents/NSSecureCoding.h>
#import <Intents/NSCopying.h>

@class _INPBHomeUserTask, NSString;

@interface _INPBHomeUserTaskResponse : PBCodable <_INPBHomeUserTaskResponse, NSSecureCoding, NSCopying> {

	SCD_Struct_IN3 _has;
	BOOL __encodeLegacyGloryData;
	int _taskOutcome;
	_INPBHomeUserTask* _userTask;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int taskOutcome;                                                            //@synthesize taskOutcome=_taskOutcome - In the implementation block
@property (assign,nonatomic) BOOL hasTaskOutcome; 
@property (nonatomic,retain) _INPBHomeUserTask * userTask;                                               //@synthesize userTask=_userTask - In the implementation block
@property (nonatomic,readonly) BOOL hasUserTask; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
-(_INPBHomeUserTask *)userTask;
-(void)setUserTask:(_INPBHomeUserTask *)arg1 ;
-(BOOL)hasUserTask;
-(id)taskOutcomeAsString:(int)arg1 ;
-(int)StringAsTaskOutcome:(id)arg1 ;
-(int)taskOutcome;
-(void)setTaskOutcome:(int)arg1 ;
-(BOOL)hasTaskOutcome;
-(void)setHasTaskOutcome:(BOOL)arg1 ;
@end

