/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:53 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/ContentKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <ContentKit/NSCopying.h>

@class NSString;

@interface WFPBTriggeredAutomationEvent : PBCodable <NSCopying> {

	NSString* _key;
	NSString* _triggerType;
	BOOL _requiredRuntimeConfirmation;
	SCD_Struct_WF13 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                                   //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) BOOL hasTriggerType; 
@property (nonatomic,retain) NSString * triggerType;                           //@synthesize triggerType=_triggerType - In the implementation block
@property (assign,nonatomic) BOOL hasRequiredRuntimeConfirmation; 
@property (assign,nonatomic) BOOL requiredRuntimeConfirmation;                 //@synthesize requiredRuntimeConfirmation=_requiredRuntimeConfirmation - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTriggerType:(NSString *)arg1 ;
-(BOOL)hasTriggerType;
-(NSString *)triggerType;
-(BOOL)hasKey;
-(void)setRequiredRuntimeConfirmation:(BOOL)arg1 ;
-(void)setHasRequiredRuntimeConfirmation:(BOOL)arg1 ;
-(BOOL)hasRequiredRuntimeConfirmation;
-(BOOL)requiredRuntimeConfirmation;
@end

