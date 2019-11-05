/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <Intents/_INPBShareFileIntentResponse.h>
@class NSArray;


@protocol _INPBShareFileIntentResponse <NSObject>
@property (assign,nonatomic) BOOL confirm; 
@property (assign,nonatomic) BOOL hasConfirm; 
@property (nonatomic,copy) NSArray * recipients; 
@property (nonatomic,readonly) unsigned long long recipientsCount; 
@property (assign,nonatomic) int shareMode; 
@property (assign,nonatomic) BOOL hasShareMode; 
@property (assign,nonatomic) BOOL success; 
@property (assign,nonatomic) BOOL hasSuccess; 
@required
+(Class)recipientsType;
-(BOOL)success;
-(void)setRecipients:(id)arg1;
-(NSArray *)recipients;
-(void)setSuccess:(BOOL)arg1;
-(void)setHasSuccess:(BOOL)arg1;
-(BOOL)hasSuccess;
-(void)clearRecipients;
-(void)addRecipients:(id)arg1;
-(id)recipientsAtIndex:(unsigned long long)arg1;
-(id)shareModeAsString:(int)arg1;
-(int)StringAsShareMode:(id)arg1;
-(unsigned long long)recipientsCount;
-(int)shareMode;
-(void)setShareMode:(int)arg1;
-(BOOL)hasShareMode;
-(void)setHasShareMode:(BOOL)arg1;
-(BOOL)confirm;
-(void)setConfirm:(BOOL)arg1;
-(BOOL)hasConfirm;
-(void)setHasConfirm:(BOOL)arg1;

@end

#import <Intents/NSSecureCoding.h>
#import <Intents/NSCopying.h>

@class NSArray, NSString;

@interface _INPBShareFileIntentResponse : PBCodable <_INPBShareFileIntentResponse, NSSecureCoding, NSCopying> {

	SCD_Struct_IN4 _has;
	BOOL _confirm;
	BOOL _success;
	BOOL __encodeLegacyGloryData;
	int _shareMode;
	NSArray* _recipients;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL confirm;                                                               //@synthesize confirm=_confirm - In the implementation block
@property (assign,nonatomic) BOOL hasConfirm; 
@property (nonatomic,copy) NSArray * recipients;                                                         //@synthesize recipients=_recipients - In the implementation block
@property (nonatomic,readonly) unsigned long long recipientsCount; 
@property (assign,nonatomic) int shareMode;                                                              //@synthesize shareMode=_shareMode - In the implementation block
@property (assign,nonatomic) BOOL hasShareMode; 
@property (assign,nonatomic) BOOL success;                                                               //@synthesize success=_success - In the implementation block
@property (assign,nonatomic) BOOL hasSuccess; 
+(BOOL)supportsSecureCoding;
+(Class)recipientsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)success;
-(void)setRecipients:(NSArray *)arg1 ;
-(NSArray *)recipients;
-(void)setSuccess:(BOOL)arg1 ;
-(void)setHasSuccess:(BOOL)arg1 ;
-(BOOL)hasSuccess;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
-(void)clearRecipients;
-(void)addRecipients:(id)arg1 ;
-(id)recipientsAtIndex:(unsigned long long)arg1 ;
-(id)shareModeAsString:(int)arg1 ;
-(int)StringAsShareMode:(id)arg1 ;
-(unsigned long long)recipientsCount;
-(int)shareMode;
-(void)setShareMode:(int)arg1 ;
-(BOOL)hasShareMode;
-(void)setHasShareMode:(BOOL)arg1 ;
-(BOOL)confirm;
-(void)setConfirm:(BOOL)arg1 ;
-(BOOL)hasConfirm;
-(void)setHasConfirm:(BOOL)arg1 ;
@end

