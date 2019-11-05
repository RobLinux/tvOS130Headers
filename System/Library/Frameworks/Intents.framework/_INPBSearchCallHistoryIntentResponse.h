/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <Intents/_INPBSearchCallHistoryIntentResponse.h>
@class NSArray, NSString;


@protocol _INPBSearchCallHistoryIntentResponse <NSObject>
@property (nonatomic,copy) NSArray * callRecords; 
@property (nonatomic,readonly) unsigned long long callRecordsCount; 
@property (nonatomic,copy) NSString * dateCreated; 
@property (nonatomic,readonly) BOOL hasDateCreated; 
@property (nonatomic,copy) NSString * status; 
@property (nonatomic,readonly) BOOL hasStatus; 
@property (nonatomic,copy) NSString * targetContact; 
@property (nonatomic,readonly) BOOL hasTargetContact; 
@required
+(Class)callRecordsType;
-(NSString *)status;
-(void)setStatus:(id)arg1;
-(BOOL)hasStatus;
-(void)clearCallRecords;
-(void)addCallRecords:(id)arg1;
-(id)callRecordsAtIndex:(unsigned long long)arg1;
-(NSArray *)callRecords;
-(void)setCallRecords:(id)arg1;
-(unsigned long long)callRecordsCount;
-(NSString *)dateCreated;
-(void)setDateCreated:(id)arg1;
-(BOOL)hasDateCreated;
-(NSString *)targetContact;
-(void)setTargetContact:(id)arg1;
-(BOOL)hasTargetContact;

@end

#import <Intents/NSSecureCoding.h>
#import <Intents/NSCopying.h>

@class NSArray, NSString;

@interface _INPBSearchCallHistoryIntentResponse : PBCodable <_INPBSearchCallHistoryIntentResponse, NSSecureCoding, NSCopying> {

	{?=} _has;
	BOOL __encodeLegacyGloryData;
	NSArray* _callRecords;
	NSString* _dateCreated;
	NSString* _status;
	NSString* _targetContact;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * callRecords;                                                        //@synthesize callRecords=_callRecords - In the implementation block
@property (nonatomic,readonly) unsigned long long callRecordsCount; 
@property (nonatomic,copy) NSString * dateCreated;                                                       //@synthesize dateCreated=_dateCreated - In the implementation block
@property (nonatomic,readonly) BOOL hasDateCreated; 
@property (nonatomic,copy) NSString * status;                                                            //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) BOOL hasStatus; 
@property (nonatomic,copy) NSString * targetContact;                                                     //@synthesize targetContact=_targetContact - In the implementation block
@property (nonatomic,readonly) BOOL hasTargetContact; 
+(BOOL)supportsSecureCoding;
+(Class)callRecordsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)status;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setStatus:(NSString *)arg1 ;
-(BOOL)hasStatus;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
-(void)clearCallRecords;
-(void)addCallRecords:(id)arg1 ;
-(id)callRecordsAtIndex:(unsigned long long)arg1 ;
-(NSArray *)callRecords;
-(void)setCallRecords:(NSArray *)arg1 ;
-(unsigned long long)callRecordsCount;
-(NSString *)dateCreated;
-(void)setDateCreated:(NSString *)arg1 ;
-(BOOL)hasDateCreated;
-(NSString *)targetContact;
-(void)setTargetContact:(NSString *)arg1 ;
-(BOOL)hasTargetContact;
@end

